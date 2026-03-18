/*
 * XREFs of PpmCheckPeriodicStart @ 0x1402035D0
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckStart @ 0x140203674 (PpmCheckStart.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x1404B5160 (PpmEventTraceFailedPerfCheckStart.c)
 */

void __fastcall PpmCheckPeriodicStart(__int64 a1, __int64 a2, void *a3)
{
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-18h] BYREF

  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject(&word_140F0B508, Executive, 0, 0, &Timeout) )
  {
    PpmEventTraceFailedPerfCheckStart(PpmCheckLastEffectiveExecutionTime);
    _m_prefetchw(&PpmCheckDelayedStartWorkerQueued);
    if ( !_InterlockedOr8(&PpmCheckDelayedStartWorkerQueued, 1u) )
    {
      PpmCheckDelayedStartWorkItem.List.Flink = 0LL;
      PpmCheckDelayedStartWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmCheckDelayedPeriodicStart;
      PpmCheckDelayedStartWorkItem.Parameter = a3;
      ExQueueWorkItem(&PpmCheckDelayedStartWorkItem, CriticalWorkQueue);
    }
  }
  else
  {
    PpmCheckMakeupCount = (int)a3;
    PpmCheckStart(0LL);
  }
}
