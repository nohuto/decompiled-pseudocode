/*
 * XREFs of HalpDmaGetAdapterCacheAlignment @ 0x14038D160
 * Callers:
 *     HalGetDmaTransferInfoInternal @ 0x14038CE70 (HalGetDmaTransferInfoInternal.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x14038D984 (HalpDmaMapContiguousTransferV2.c)
 *     IopMapTransfer @ 0x14038DCD0 (IopMapTransfer.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x14038ED80 (HalpAllocateAdapterCallbackV2.c)
 *     HalPutScatterGatherListV2 @ 0x14038F730 (HalPutScatterGatherListV2.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x14038FC4C (HalpDmaNextContiguousPieceV3.c)
 *     IoMapTransferInternal @ 0x140390384 (IoMapTransferInternal.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x1403910E4 (HalpDmaFlushContiguousTransferV2.c)
 *     IoFlushAdapterBuffersV2 @ 0x1403911F0 (IoFlushAdapterBuffersV2.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x1403917D4 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalpDmaCheckMdlAccessibility @ 0x140391F30 (HalpDmaCheckMdlAccessibility.c)
 *     HalFlushAdapterBuffersEx @ 0x140392210 (HalFlushAdapterBuffersEx.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x14039249C (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x140493664 (HalpDmaMapScatterTransferV3.c)
 *     HalpFlushMapBuffers @ 0x14054FA88 (HalpFlushMapBuffers.c)
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
