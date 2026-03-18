/*
 * XREFs of DbgBreakPointWithStatus @ 0x1404FA090
 * Callers:
 *     KeAccumulateTicks @ 0x140273800 (KeAccumulateTicks.c)
 *     KdCheckForDebugBreak @ 0x140275528 (KdCheckForDebugBreak.c)
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1403A97C0 (vDbgPrintExWithPrefixInternalHelper.c)
 *     KiBugCheckDebugBreak @ 0x1405AF3E0 (KiBugCheckDebugBreak.c)
 *     NtSystemDebugControl @ 0x140A53910 (NtSystemDebugControl.c)
 *     PopInvokeSystemStateHandler @ 0x140B5541C (PopInvokeSystemStateHandler.c)
 *     ExpDebuggerWorker @ 0x140B69F70 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
