/*
 * XREFs of MiHashIsCommon @ 0x14044D5B4
 * Callers:
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 * Callees:
 *     RtlCompareMemoryUlong @ 0x1406B49B0 (RtlCompareMemoryUlong.c)
 */

_BOOL8 __fastcall MiHashIsCommon(__int64 a1, __int64 a2, void *a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r11
  __int64 v5; // rax
  __int64 v6; // rcx

  v3 = *(_DWORD *)(a1 + 136);
  v4 = *(_QWORD *)(a1 + 120);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 128);
  while ( 1 )
  {
    if ( (unsigned int)v5 >= v3 )
      return 0LL;
    if ( a2 == *(_QWORD *)(v4 + 8 * v5) )
      break;
    v5 = (unsigned int)(v5 + 1);
  }
  return !a3 || RtlCompareMemoryUlong(a3, 0x1000uLL, *(_DWORD *)(v6 + 4 * v5)) == 4096;
}
