/*
 * XREFs of MiLocatePagefileSubsection @ 0x1403D2A80
 * Callers:
 *     MiOffsetToProtos @ 0x1402C28D0 (MiOffsetToProtos.c)
 *     MiAdvanceVadView @ 0x1403C8DEC (MiAdvanceVadView.c)
 *     MiSkipEntirePagefileRegions @ 0x1403D2224 (MiSkipEntirePagefileRegions.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403D2314 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140974760 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MmCommitSessionMappedView @ 0x140974B70 (MmCommitSessionMappedView.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall MiLocatePagefileSubsection(unsigned int *a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // r10
  unsigned int *result; // rax
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r9
  unsigned int *v10; // rcx

  v3 = *a2;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x1000) != 0 || a1[12] >= 0x40000000 )
  {
    v5 = 0x40000LL;
    if ( a1[12] < 0x40000000 )
      v5 = 0x20000LL;
    v6 = (unsigned int)(v3 / v5);
    v7 = v3 / v5;
    v8 = v3 % v5;
    v9 = v6 + 1;
    if ( !v8 )
      v9 = v6;
    if ( v9 > *(unsigned int *)(*(_QWORD *)a1 + 96LL) )
      return 0LL;
    v10 = &a1[22 * v7];
    if ( v8 >= v10[11] )
      return 0LL;
    result = v10;
    *a2 = v8;
  }
  else
  {
    if ( v3 >= a1[11] )
      return 0LL;
    return a1;
  }
  return result;
}
