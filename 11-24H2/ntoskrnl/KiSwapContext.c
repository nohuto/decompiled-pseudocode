/*
 * XREFs of KiSwapContext @ 0x1406B2A60
 * Callers:
 *     KiDispatchInterrupt @ 0x1402936B0 (KiDispatchInterrupt.c)
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 *     KiHandleDeferredPreemption @ 0x14029602C (KiHandleDeferredPreemption.c)
 *     KiSwapThread @ 0x1402A6990 (KiSwapThread.c)
 *     KiCheckForThreadDispatch @ 0x14031D21C (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KeYieldExecution @ 0x14033C510 (KeYieldExecution.c)
 *     KiExecuteSmtIsolationThread @ 0x1405C2BD0 (KiExecuteSmtIsolationThread.c)
 * Callees:
 *     SwapContext @ 0x1406B2B40 (SwapContext.c)
 */

__int64 __fastcall KiSwapContext(__int64 a1, __int64 a2, unsigned int a3)
{
  return SwapContext(a3);
}
