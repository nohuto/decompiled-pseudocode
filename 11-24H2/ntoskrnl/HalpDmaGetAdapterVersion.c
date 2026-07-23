/*
 * XREFs of HalpDmaGetAdapterVersion @ 0x14038951C
 * Callers:
 *     IopMapTransfer @ 0x140387610 (IopMapTransfer.c)
 *     HalpDmaAllocateMapRegisters @ 0x14038829C (HalpDmaAllocateMapRegisters.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x1403886C0 (HalpAllocateAdapterCallbackV2.c)
 *     HalPutScatterGatherListV2 @ 0x140389070 (HalPutScatterGatherListV2.c)
 *     IoMapTransferInternal @ 0x140389CC4 (IoMapTransferInternal.c)
 *     HalGetScatterGatherList @ 0x14038A6E0 (HalGetScatterGatherList.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x14038AD1C (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalJoinDmaDomain @ 0x1404D20F0 (HalJoinDmaDomain.c)
 *     HalAllocateAdapterChannel @ 0x14053AFF0 (HalAllocateAdapterChannel.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel @ 0x14053B140 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel @ 0x14053B16C (HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel.c)
 *     IoFreeMapRegistersThunk @ 0x14053B230 (IoFreeMapRegistersThunk.c)
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x14054C818 (HalpDmaAllocateMapRegistersAtHighLevel.c)
 *     HalGetAdapterV3 @ 0x1406FDCF8 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x1406FE298 (HalGetAdapterV2.c)
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
