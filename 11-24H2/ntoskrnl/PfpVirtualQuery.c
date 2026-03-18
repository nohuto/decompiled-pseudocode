/*
 * XREFs of PfpVirtualQuery @ 0x140932690
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140933148 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
 */

__int64 __fastcall PfpVirtualQuery(__int64 a1, char a2, _DWORD *a3)
{
  __int64 result; // rax
  int v5; // eax
  __int128 v6; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter1[2]; // [rsp+50h] [rbp-18h]

  v6 = 0LL;
  *(_OWORD *)BugCheckParameter1 = 0LL;
  if ( *(_DWORD *)(a1 + 24) != 32 )
    return 3221225990LL;
  if ( a2 && (*(_QWORD *)(a1 + 16) & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  memmove(&v6, *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
  if ( (_DWORD)v6 != 1 )
    return 3221225485LL;
  v5 = 2;
  if ( (BYTE4(v6) & 1) != 0 && (BYTE4(v6) & 2) != 0 )
    return 3221225485LL;
  if ( (DWORD1(v6) & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  if ( (BYTE4(v6) & 1) == 0 )
    v5 = (BYTE4(v6) & 2) != 0;
  result = MmQueryVirtualMemory(BugCheckParameter1[1], BugCheckParameter1[0], 0LL, v5);
  if ( (int)result >= 0 )
    *a3 = 32;
  return result;
}
