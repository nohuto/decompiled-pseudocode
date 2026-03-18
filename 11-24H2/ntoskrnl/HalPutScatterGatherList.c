/*
 * XREFs of HalPutScatterGatherList @ 0x1403927F0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutScatterGatherListV2 @ 0x14038F730 (HalPutScatterGatherListV2.c)
 *     HalPutScatterGatherListV3 @ 0x140392818 (HalPutScatterGatherListV3.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall HalPutScatterGatherList(
        PADAPTER_OBJECT DmaAdapter,
        PSCATTER_GATHER_LIST ScatterGather,
        BOOLEAN WriteToDevice)
{
  __int64 v3; // r9

  if ( HIDWORD(DmaAdapter[9].DmaOperations) == 2 )
    HalPutScatterGatherListV2((__int64)DmaAdapter, ScatterGather, WriteToDevice, v3);
  else
    HalPutScatterGatherListV3(DmaAdapter, ScatterGather, WriteToDevice);
}
