/*
 * XREFs of MmGetDefaultPagePriority @ 0x14047E830
 * Callers:
 *     PspApplyIFEOPerfOptions @ 0x140776888 (PspApplyIFEOPerfOptions.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     PfSnAsyncPrefetchWorker @ 0x140951F40 (PfSnAsyncPrefetchWorker.c)
 *     PfSnCheckActionsNeeded @ 0x140961228 (PfSnCheckActionsNeeded.c)
 *     NtQueryInformationThread @ 0x1409A7C80 (NtQueryInformationThread.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 *     PfpLogEventRequest @ 0x140AA86F4 (PfpLogEventRequest.c)
 *     PfTAccessTracingCleanup @ 0x140B5B46C (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140B5B5B0 (PfTAccessTracingStart.c)
 *     ExpDebuggerWorker @ 0x140B79F70 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}
