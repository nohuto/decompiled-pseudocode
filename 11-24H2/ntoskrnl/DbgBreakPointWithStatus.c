/*
 * XREFs of DbgBreakPointWithStatus @ 0x1404FA0D0
 * Callers:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x140275C70 (vDbgPrintExWithPrefixInternalHelper.c)
 *     KeAccumulateTicks @ 0x1402AAEB0 (KeAccumulateTicks.c)
 *     KdCheckForDebugBreak @ 0x1402AC8F8 (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x1405AFCE0 (KiBugCheckDebugBreak.c)
 *     NtSystemDebugControl @ 0x140A4F080 (NtSystemDebugControl.c)
 *     PopInvokeSystemStateHandler @ 0x140B6766C (PopInvokeSystemStateHandler.c)
 *     ExpDebuggerWorker @ 0x140B7BF70 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
