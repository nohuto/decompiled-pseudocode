/*
 * XREFs of ViGetRealDmaAdapter @ 0x140B890EC
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x140610B10 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x140610C30 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x140610C80 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x140610CB0 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x140610CF0 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x140B85190 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140B85370 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140B85580 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140B85640 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferVector @ 0x140B85700 (VfAllocateCommonBufferVector.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140B85790 (VfAllocateCommonBufferWithBounds.c)
 *     VfAllocateCrashDumpRegisters @ 0x140B85870 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140B85950 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140B85AB0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140B85DB0 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x140B85F70 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x140B85FE0 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x140B860B0 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x140B860F0 (VfConfigureAdapterChannel.c)
 *     VfCreateCommonBufferFromMdl @ 0x140B86140 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140B86230 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140B863E0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x140B86490 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140B86540 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140B86660 (VfFreeCommonBuffer.c)
 *     VfFreeCommonBufferFromVector @ 0x140B86730 (VfFreeCommonBufferFromVector.c)
 *     VfFreeCommonBufferVector @ 0x140B86780 (VfFreeCommonBufferVector.c)
 *     VfFreeMapRegisters @ 0x140B867E0 (VfFreeMapRegisters.c)
 *     VfGetCommonBufferFromVectorByIndex @ 0x140B868E0 (VfGetCommonBufferFromVectorByIndex.c)
 *     VfGetDmaAdapterInfo @ 0x140B86AE0 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x140B86B20 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x140B86B70 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x140B86BE0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140B86F30 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x140B870C0 (VfHalAllocateMapRegisters.c)
 *     VfInitializeDmaTransferContext @ 0x140B87250 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x140B87310 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140B874C0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140B87690 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x140B87980 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x140B87B00 (VfReadDmaCounter.c)
 *     ViReleaseDmaAdapter @ 0x140B89A1C (ViReleaseDmaAdapter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140612434 (VfReportIssueWithOptions.c)
 *     ViGetAdapterSignature @ 0x140B88FA4 (ViGetAdapterSignature.c)
 *     ViHalPreprocessOptions @ 0x140B8921C (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaAdapter(ULONG_PTR a1)
{
  __int64 v2; // rcx

  if ( (unsigned int)ViGetAdapterSignature(a1) == 1634550856 )
    return v2;
  if ( (unsigned int)ViGetAdapterSignature(v2) != 1634550870 )
  {
    ViHalPreprocessOptions(
      byte_140E0E938,
      "Driver has provided an adapter (%p) that is not a valid DMA Adapter",
      (const void *)0x27);
    VfReportIssueWithOptions(0xE6u, 0x27uLL, a1, 0LL, 0LL, byte_140E0E938);
  }
  return *(_QWORD *)(a1 + 24);
}
