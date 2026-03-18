/*
 * XREFs of MmGetDefaultPagePriority @ 0x14047DF60
 * Callers:
 *     PspApplyIFEOPerfOptions @ 0x140766EB8 (PspApplyIFEOPerfOptions.c)
 *     PfSnCheckActionsNeeded @ 0x140826AA8 (PfSnCheckActionsNeeded.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     PfSnAsyncPrefetchWorker @ 0x1408EBF40 (PfSnAsyncPrefetchWorker.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     NtQueryInformationThread @ 0x1409C32F0 (NtQueryInformationThread.c)
 *     PfpLogEventRequest @ 0x140AA366C (PfpLogEventRequest.c)
 *     PfTAccessTracingCleanup @ 0x140B4B4FC (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140B4B640 (PfTAccessTracingStart.c)
 *     ExpDebuggerWorker @ 0x140B69F70 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}
