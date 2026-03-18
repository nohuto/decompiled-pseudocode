/*
 * XREFs of KiHeteroIsSwapBeneficialForPerformance @ 0x1403126FC
 * Callers:
 *     KiEvaluatePreemptionSwapTarget @ 0x140312514 (KiEvaluatePreemptionSwapTarget.c)
 *     KiHeteroScanQueueForPreemptionSwapTarget @ 0x140313444 (KiHeteroScanQueueForPreemptionSwapTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiHeteroIsSwapBeneficialForPerformance(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  return a2 != a4
      && *(unsigned __int16 *)(a3 + 2LL * a2 + 34492)
       + *(unsigned __int16 *)(a1 + 2LL * a4 + 34492)
       - *(unsigned __int16 *)(a3 + 2LL * a4 + 34492)
       - *(unsigned __int16 *)(a1 + 2LL * a2 + 34492) >= dword_140FC43F8;
}
