/*
 * XREFs of ViPendingQueuePassiveLevelCompletion @ 0x140B93FF0
 * Callers:
 *     ViPendingDelayCompletion @ 0x140B93E88 (ViPendingDelayCompletion.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeQueryPriorityThread @ 0x1402E24A0 (KeQueryPriorityThread.c)
 *     KeSetPriorityThread @ 0x140371FE0 (KeSetPriorityThread.c)
 */

__int64 __fastcall ViPendingQueuePassiveLevelCompletion(signed __int64 a1)
{
  KPRIORITY PriorityThread; // eax
  struct _KTHREAD *CurrentThread; // rdx
  int v4; // r9d
  unsigned int v5; // r8d
  __int64 v7; // rbx

  if ( !ViPendingWorkersCount )
    return 0LL;
  PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = ViPendingWorkersCount;
  v5 = ViPendingWorkerIndexHint;
  while ( _InterlockedCompareExchange64(&qword_140F03E28[6 * v5], a1, 0LL) )
  {
    v5 = v5 + 1 < ViPendingWorkersCount ? v5 + 1 : 0;
    if ( !--v4 )
    {
      ++ViPendingWorkersBusyCount;
LABEL_7:
      KeLeaveCriticalRegion();
      return 0LL;
    }
  }
  ViPendingWorkerIndexHint = v5 + 1 < ViPendingWorkersCount ? v5 + 1 : 0;
  if ( v5 == -1 )
    goto LABEL_7;
  v7 = 48LL * v5;
  KeSetPriorityThread(*(PKTHREAD *)((char *)&ViPendingWorkers + v7), PriorityThread);
  KeSetEvent((PRKEVENT)((char *)&ViPendingWorkers + v7 + 16), 0, 0);
  KeLeaveCriticalRegion();
  return 1LL;
}
