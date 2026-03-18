/*
 * XREFs of HalpDmaGetAdapterVersion @ 0x140333AC8
 * Callers:
 *     HalpDmaAllocateScatterPagesFromContiguousPool @ 0x1403336A8 (HalpDmaAllocateScatterPagesFromContiguousPool.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x140333910 (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     IoMapTransferInternal @ 0x140333E20 (IoMapTransferInternal.c)
 *     IopMapTransfer @ 0x140334310 (IopMapTransfer.c)
 *     HalpDmaAllocateMapRegisters @ 0x140334FBC (HalpDmaAllocateMapRegisters.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x1403353E0 (HalpAllocateAdapterCallbackV2.c)
 *     HalPutScatterGatherListV2 @ 0x140335DA0 (HalPutScatterGatherListV2.c)
 *     HalGetScatterGatherList @ 0x140337120 (HalGetScatterGatherList.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x14033784C (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalJoinDmaDomain @ 0x1404D9CF0 (HalJoinDmaDomain.c)
 *     HalAllocateAdapterChannel @ 0x14053AEC0 (HalAllocateAdapterChannel.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel @ 0x14053B010 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel @ 0x14053B03C (HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel.c)
 *     IoFreeMapRegistersThunk @ 0x14053B100 (IoFreeMapRegistersThunk.c)
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x14054C574 (HalpDmaAllocateMapRegistersAtHighLevel.c)
 *     HalGetAdapterV3 @ 0x1406F42C8 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x1406F4868 (HalGetAdapterV2.c)
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
