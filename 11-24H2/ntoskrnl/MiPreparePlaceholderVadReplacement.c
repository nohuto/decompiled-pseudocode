/*
 * XREFs of MiPreparePlaceholderVadReplacement @ 0x140A6031C
 * Callers:
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiRemoveVad @ 0x1402907F8 (MiRemoveVad.c)
 *     MiReferenceVad @ 0x140292770 (MiReferenceVad.c)
 *     PerfInfoLogVirtualFree @ 0x1408DA818 (PerfInfoLogVirtualFree.c)
 */

void __fastcall MiPreparePlaceholderVadReplacement(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rcx

  _InterlockedIncrement((volatile signed __int32 *)(a3 + 232));
  MiReferenceVad(a1);
  MiRemoveVad(a1, 0, 0LL);
  *(_QWORD *)(a2 + 552) += ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
                          - (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
                          - 1) << 12;
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
  {
    v5 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
    PerfInfoLogVirtualFree(
      v5 << 12,
      ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) - v5 + 1) << 12,
      a2,
      0x8000);
  }
}
