/*
 * XREFs of VF_ASSERT_IRQL @ 0x140B86F40
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140B87190 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140B87370 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140B87580 (VfAllocateCommonBuffer.c)
 *     VfAllocateCrashDumpRegisters @ 0x140B87870 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildScatterGatherList @ 0x140B87AB0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140B87DB0 (VfBuildScatterGatherListEx.c)
 *     VfFreeAdapterChannel @ 0x140B88490 (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x140B887E0 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapter @ 0x140B88940 (VfGetDmaAdapter.c)
 *     VfGetDmaAlignment @ 0x140B88B20 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x140B88BE0 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x140B89980 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1406109F4 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140B8B21C (ViHalPreprocessOptions.c)
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
    ViHalPreprocessOptions(byte_140E0EA4C, "Bad IRQL -- needed %x, got %x.", 268435475, 1);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 1uLL, v2, v3, byte_140E0EA4C);
  }
}
