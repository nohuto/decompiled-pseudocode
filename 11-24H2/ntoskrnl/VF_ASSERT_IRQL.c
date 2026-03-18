/*
 * XREFs of VF_ASSERT_IRQL @ 0x140B84F40
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140B85190 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140B85370 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140B85580 (VfAllocateCommonBuffer.c)
 *     VfAllocateCrashDumpRegisters @ 0x140B85870 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildScatterGatherList @ 0x140B85AB0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140B85DB0 (VfBuildScatterGatherListEx.c)
 *     VfFreeAdapterChannel @ 0x140B86490 (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x140B867E0 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapter @ 0x140B86940 (VfGetDmaAdapter.c)
 *     VfGetDmaAlignment @ 0x140B86B20 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x140B86BE0 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x140B87980 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140612434 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140B8921C (ViHalPreprocessOptions.c)
 */

void __fastcall VF_ASSERT_IRQL(unsigned __int8 a1)
{
  unsigned __int8 CurrentIrql; // al
  unsigned int v2; // edi
  ULONG_PTR v3; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != a1 )
  {
    v2 = a1;
    v3 = CurrentIrql;
    ViHalPreprocessOptions(byte_140E0E900, "Bad IRQL -- needed %x, got %x.", 268435475, 1);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 1uLL, v2, v3, byte_140E0E900);
  }
}
