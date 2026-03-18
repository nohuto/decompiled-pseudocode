/*
 * XREFs of MiPreparePlaceholderVadReplacement @ 0x140A68E90
 * Callers:
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1409012DC (MiReserveUserMemory.c)
 * Callees:
 *     MiReferenceVad @ 0x1402A7A40 (MiReferenceVad.c)
 *     MiRemoveVad @ 0x1402A7E14 (MiRemoveVad.c)
 *     PerfInfoLogVirtualFree @ 0x1408F7478 (PerfInfoLogVirtualFree.c)
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
