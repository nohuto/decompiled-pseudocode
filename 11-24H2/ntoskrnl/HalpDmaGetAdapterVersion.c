/*
 * XREFs of HalpDmaGetAdapterVersion @ 0x14038FBDC
 * Callers:
 *     IopMapTransfer @ 0x14038DCD0 (IopMapTransfer.c)
 *     HalpDmaAllocateMapRegisters @ 0x14038E95C (HalpDmaAllocateMapRegisters.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x14038ED80 (HalpAllocateAdapterCallbackV2.c)
 *     HalPutScatterGatherListV2 @ 0x14038F730 (HalPutScatterGatherListV2.c)
 *     IoMapTransferInternal @ 0x140390384 (IoMapTransferInternal.c)
 *     HalGetScatterGatherList @ 0x140390DB0 (HalGetScatterGatherList.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x1403913EC (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalJoinDmaDomain @ 0x1404D8CA0 (HalJoinDmaDomain.c)
 *     HalAllocateAdapterChannel @ 0x14053D6F0 (HalAllocateAdapterChannel.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel @ 0x14053D840 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel @ 0x14053D86C (HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel.c)
 *     IoFreeMapRegistersThunk @ 0x14053D930 (IoFreeMapRegistersThunk.c)
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x14054EED8 (HalpDmaAllocateMapRegistersAtHighLevel.c)
 *     HalGetAdapterV3 @ 0x1407000B8 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140700658 (HalGetAdapterV2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaGetAdapterVersion(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 156);
  result = 2LL;
  if ( v1 != 2 )
  {
    result = 0xFFFFFFFFLL;
    if ( v1 == 3 )
      return 3LL;
  }
  return result;
}
