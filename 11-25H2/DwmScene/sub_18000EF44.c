/*
 * XREFs of sub_18000EF44 @ 0x18000EF44
 * Callers:
 *     sub_18000D53C @ 0x18000D53C (sub_18000D53C.c)
 * Callees:
 *     sub_18000D4FC @ 0x18000D4FC (sub_18000D4FC.c)
 *     sub_18000D55C @ 0x18000D55C (sub_18000D55C.c)
 *     sub_18000D6D0 @ 0x18000D6D0 (sub_18000D6D0.c)
 *     sub_18000D750 @ 0x18000D750 (sub_18000D750.c)
 *     sub_18000F024 @ 0x18000F024 (sub_18000F024.c)
 *     sub_18000FB98 @ 0x18000FB98 (sub_18000FB98.c)
 *     sub_18000FCB4 @ 0x18000FCB4 (sub_18000FCB4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18000EF44(char *lpMem)
{
  __int64 v2; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  char v6; // [rsp+50h] [rbp+18h] BYREF

  if ( byte_1801C3358 || qword_1801C3330 && (unsigned __int8)qword_1801C3330() )
  {
    return (unsigned int)--*(_DWORD *)lpMem;
  }
  else
  {
    sub_18000FB98(lpMem + 8, &v5);
    if ( !--*(_DWORD *)lpMem )
    {
      sub_18000FCB4(lpMem + 16, 0LL);
      sub_18000FCB4(lpMem + 24, 0LL);
      v2 = v5;
      if ( v5 )
      {
        sub_18000D4FC((__int64)&v6);
        sub_18000F024(v2);
        sub_18000D750((__int64)&v6);
      }
      v5 = 0LL;
      sub_18000D55C((__int64)lpMem);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    return sub_18000D6D0(&v5);
  }
}
