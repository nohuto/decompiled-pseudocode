/*
 * XREFs of DbgBreakPointWithStatus @ 0x1404FC810
 * Callers:
 *     KeAccumulateTicks @ 0x14029C3C0 (KeAccumulateTicks.c)
 *     KdCheckForDebugBreak @ 0x14029DE08 (KdCheckForDebugBreak.c)
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1402CB420 (vDbgPrintExWithPrefixInternalHelper.c)
 *     KiBugCheckDebugBreak @ 0x1405B2D70 (KiBugCheckDebugBreak.c)
 *     NtSystemDebugControl @ 0x140A571F0 (NtSystemDebugControl.c)
 *     PopInvokeSystemStateHandler @ 0x140B6552C (PopInvokeSystemStateHandler.c)
 *     ExpDebuggerWorker @ 0x140B79F70 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
