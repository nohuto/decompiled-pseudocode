/*
 * XREFs of VF_ASSERT_MAX_IRQL @ 0x140B86FC0
 * Callers:
 *     VfFlushAdapterBuffers @ 0x140B88230 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140B883E0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeCommonBuffer @ 0x140B88660 (VfFreeCommonBuffer.c)
 *     VfGetScatterGatherListEx @ 0x140B88F30 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140B89310 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140B894C0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140B89690 (VfPutDmaAdapter.c)
 *     VfReadDmaCounter @ 0x140B89B00 (VfReadDmaCounter.c)
 *     ViGetAdapterInformationInternal @ 0x140B8AE98 (ViGetAdapterInformationInternal.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1406109F4 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140B8B21C (ViHalPreprocessOptions.c)
 */

void VF_ASSERT_MAX_IRQL()
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v1; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
  {
    v1 = CurrentIrql;
    ViHalPreprocessOptions(byte_140E0EA44, "Bad IRQL -- needed %x or less, got %x.", 268435475, 2);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 2uLL, 2uLL, v1, byte_140E0EA44);
  }
}
