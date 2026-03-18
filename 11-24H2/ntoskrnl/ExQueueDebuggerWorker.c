/*
 * XREFs of ExQueueDebuggerWorker @ 0x140658418
 * Callers:
 *     KdExitDebugger @ 0x140B75008 (KdExitDebugger.c)
 *     ExpWorkerInitialization @ 0x140C42F00 (ExpWorkerInitialization.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 */

char ExQueueDebuggerWorker()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&ExpDebuggerWork, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = KeInsertQueueDpc(&ExpDebuggerDpc, 0LL, 0LL);
  return v0;
}
