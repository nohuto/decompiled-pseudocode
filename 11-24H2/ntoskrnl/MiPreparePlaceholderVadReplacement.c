/*
 * XREFs of MiPreparePlaceholderVadReplacement @ 0x140A6753C
 * Callers:
 *     MiReserveUserMemory @ 0x1408DFE98 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiRemoveVad @ 0x1402601E8 (MiRemoveVad.c)
 *     MiReferenceVad @ 0x140262A70 (MiReferenceVad.c)
 *     PerfInfoLogVirtualFree @ 0x1408DC5E8 (PerfInfoLogVirtualFree.c)
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
