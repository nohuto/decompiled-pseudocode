/*
 * XREFs of PfpVirtualQuery @ 0x140ABD794
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140932B10 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 */

__int64 __fastcall PfpVirtualQuery(__int64 a1, char a2, _DWORD *a3)
{
  __int64 result; // rax
  int v5; // eax
  __int128 v6; // [rsp+40h] [rbp-28h] BYREF
  __int128 v7; // [rsp+50h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
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
  result = MmQueryVirtualMemory(*((ULONG_PTR *)&v7 + 1), 0LL, 4, *((unsigned __int64 *)&v6 + 1), v7, 0LL, v5);
  if ( (int)result >= 0 )
    *a3 = 32;
  return result;
}
