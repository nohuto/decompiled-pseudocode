/*
 * XREFs of KiHeteroIsSwapBeneficialForPerformance @ 0x14020119C
 * Callers:
 *     KiHeteroScanQueueForPreemptionSwapTarget @ 0x140200CC0 (KiHeteroScanQueueForPreemptionSwapTarget.c)
 *     KiEvaluatePreemptionSwapTarget @ 0x140200FAC (KiEvaluatePreemptionSwapTarget.c)
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
       - *(unsigned __int16 *)(a1 + 2LL * a2 + 34492) >= dword_140FC4408;
}
