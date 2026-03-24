/*
 * XREFs of MousePnpStartCompletion @ 0x1C00052E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MousePnpStartCompletion(__int64 a1, __int64 a2, PIO_WORKITEM *a3)
{
  IoQueueWorkItem(*a3, (PIO_WORKITEM_ROUTINE)MouseStartWorker, DelayedWorkQueue, a3);
  return 3221225494LL;
}
