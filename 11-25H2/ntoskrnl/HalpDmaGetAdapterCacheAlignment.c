/*
 * XREFs of HalpDmaGetAdapterCacheAlignment @ 0x140333410
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x140332110 (HalFlushAdapterBuffersEx.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x14033239C (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaCheckMdlAccessibility @ 0x140332BD0 (HalpDmaCheckMdlAccessibility.c)
 *     HalGetDmaTransferInfoInternal @ 0x140333120 (HalGetDmaTransferInfoInternal.c)
 *     IoMapTransferInternal @ 0x140333E20 (IoMapTransferInternal.c)
 *     IopMapTransfer @ 0x140334310 (IopMapTransfer.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x1403353E0 (HalpAllocateAdapterCallbackV2.c)
 *     HalPutScatterGatherListV2 @ 0x140335DA0 (HalPutScatterGatherListV2.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x140336260 (HalpDmaNextContiguousPieceV3.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x1403373F4 (HalpDmaMapContiguousTransferV2.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x14033753C (HalpDmaFlushContiguousTransferV2.c)
 *     IoFlushAdapterBuffersV2 @ 0x140337650 (IoFlushAdapterBuffersV2.c)
 *     HalpDmaMapScatterTransferV3 @ 0x140497828 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x1404D4CFC (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalpFlushMapBuffers @ 0x14054D128 (HalpFlushMapBuffers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaGetAdapterCacheAlignment(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 156) == 2 )
    return 1LL;
  result = (unsigned int)HalpCoreDmaAlignment;
  if ( *(_BYTE *)(a1 + 445) )
    return 1LL;
  return result;
}
