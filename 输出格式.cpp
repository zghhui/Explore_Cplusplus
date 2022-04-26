#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		cout << setfill('\'') << setw(10) << "**" << setw(6) << "++" << endl;
	}
}