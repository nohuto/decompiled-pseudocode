/*
 * XREFs of PpmCheckPeriodicStart @ 0x1404576F0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PpmCheckStart @ 0x140457794 (PpmCheckStart.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x140457B6C (PpmEventTraceFailedPerfCheckStart.c)
 */

void __fastcall PpmCheckPeriodicStart(__int64 a1, __int64 a2, void *a3)
{
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-18h] BYREF

  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject(&word_140F0B888, Executive, 0, 0, &Timeout) )
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
