/*
 * XREFs of HalPutScatterGatherList @ 0x1403342E0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutScatterGatherListV3 @ 0x14033419C (HalPutScatterGatherListV3.c)
 *     HalPutScatterGatherListV2 @ 0x140335DA0 (HalPutScatterGatherListV2.c)
 */

void __stdcall HalPutScatterGatherList(
        PADAPTER_OBJECT DmaAdapter,
        PSCATTER_GATHER_LIST ScatterGather,
        BOOLEAN WriteToDevice)
{
  if ( HIDWORD(DmaAdapter[9].DmaOperations) == 2 )
    HalPutScatterGatherListV2(DmaAdapter, ScatterGather, WriteToDevice);
  else
    HalPutScatterGatherListV3((__int64)DmaAdapter, (__int64)ScatterGather, WriteToDevice);
}
