/*
 * XREFs of ViGetRealDmaAdapter @ 0x140B8B0EC
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x14060F0D0 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x14060F1F0 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x14060F240 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x14060F270 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x14060F2B0 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x140B87190 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140B87370 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140B87580 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140B87640 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferVector @ 0x140B87700 (VfAllocateCommonBufferVector.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140B87790 (VfAllocateCommonBufferWithBounds.c)
 *     VfAllocateCrashDumpRegisters @ 0x140B87870 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140B87950 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140B87AB0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140B87DB0 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x140B87F70 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x140B87FE0 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x140B880B0 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x140B880F0 (VfConfigureAdapterChannel.c)
 *     VfCreateCommonBufferFromMdl @ 0x140B88140 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140B88230 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140B883E0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x140B88490 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140B88540 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140B88660 (VfFreeCommonBuffer.c)
 *     VfFreeCommonBufferFromVector @ 0x140B88730 (VfFreeCommonBufferFromVector.c)
 *     VfFreeCommonBufferVector @ 0x140B88780 (VfFreeCommonBufferVector.c)
 *     VfFreeMapRegisters @ 0x140B887E0 (VfFreeMapRegisters.c)
 *     VfGetCommonBufferFromVectorByIndex @ 0x140B888E0 (VfGetCommonBufferFromVectorByIndex.c)
 *     VfGetDmaAdapterInfo @ 0x140B88AE0 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x140B88B20 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x140B88B70 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x140B88BE0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140B88F30 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x140B890C0 (VfHalAllocateMapRegisters.c)
 *     VfInitializeDmaTransferContext @ 0x140B89250 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x140B89310 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140B894C0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140B89690 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x140B89980 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x140B89B00 (VfReadDmaCounter.c)
 *     ViReleaseDmaAdapter @ 0x140B8BA1C (ViReleaseDmaAdapter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1406109F4 (VfReportIssueWithOptions.c)
 *     ViGetAdapterSignature @ 0x140B8AFA4 (ViGetAdapterSignature.c)
 *     ViHalPreprocessOptions @ 0x140B8B21C (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaAdapter(ULONG_PTR a1)
{
  __int64 v2; // rcx

  if ( (unsigned int)ViGetAdapterSignature(a1) == 1634550856 )
    return v2;
  if ( (unsigned int)ViGetAdapterSignature(v2) != 1634550870 )
  {
    ViHalPreprocessOptions(
      byte_140E0E9E8,
      "Driver has provided an adapter (%p) that is not a valid DMA Adapter",
      (const void *)0x27);
    VfReportIssueWithOptions(0xE6u, 0x27uLL, a1, 0LL, 0LL, byte_140E0E9E8);
  }
  return *(_QWORD *)(a1 + 24);
}
