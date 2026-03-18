/*
 * XREFs of ExQueueDebuggerWorker @ 0x14064C4B8
 * Callers:
 *     KdExitDebugger @ 0x140B65008 (KdExitDebugger.c)
 *     ExpWorkerInitialization @ 0x140C31C34 (ExpWorkerInitialization.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 */

char ExQueueDebuggerWorker()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&ExpDebuggerWork, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = KeInsertQueueDpc(&ExpDebuggerDpc, 0LL, 0LL);
  return v0;
}
