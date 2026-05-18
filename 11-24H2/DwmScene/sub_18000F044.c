/*
 * XREFs of sub_18000F044 @ 0x18000F044
 * Callers:
 *     sub_18000D61C @ 0x18000D61C (sub_18000D61C.c)
 * Callees:
 *     sub_18000D5E4 @ 0x18000D5E4 (sub_18000D5E4.c)
 *     sub_18000D63C @ 0x18000D63C (sub_18000D63C.c)
 *     sub_18000D7B0 @ 0x18000D7B0 (sub_18000D7B0.c)
 *     sub_18000D830 @ 0x18000D830 (sub_18000D830.c)
 *     sub_18000F124 @ 0x18000F124 (sub_18000F124.c)
 *     sub_18000FC98 @ 0x18000FC98 (sub_18000FC98.c)
 *     sub_18000FDB4 @ 0x18000FDB4 (sub_18000FDB4.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18000F044(char *lpMem)
{
  __int64 v2; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  char v6; // [rsp+50h] [rbp+18h] BYREF

  if ( byte_1801C4370 || qword_1801C4348 && (unsigned __int8)qword_1801C4348() )
  {
    return (unsigned int)--*(_DWORD *)lpMem;
  }
  else
  {
    sub_18000FC98(lpMem + 8, &v5);
    if ( !--*(_DWORD *)lpMem )
    {
      sub_18000FDB4(lpMem + 16, 0LL);
      sub_18000FDB4(lpMem + 24, 0LL);
      v2 = v5;
      if ( v5 )
      {
        sub_18000D5E4((__int64)&v6);
        sub_18000F124(v2);
        sub_18000D830((__int64)&v6);
      }
      v5 = 0LL;
      sub_18000D63C((__int64)lpMem);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    return sub_18000D7B0(&v5);
  }
}
