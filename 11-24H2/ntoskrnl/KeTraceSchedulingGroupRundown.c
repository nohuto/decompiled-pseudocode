/*
 * XREFs of KeTraceSchedulingGroupRundown @ 0x1405C7810
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A15E44 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     ?KiLogSingleSchedulingGroupRundown@@YAXPEAU_ETW_SILODRIVERSTATE@@KPEAU_KSCHEDULING_GROUP@@@Z @ 0x1405C7634 (-KiLogSingleSchedulingGroupRundown@@YAXPEAU_ETW_SILODRIVERSTATE@@KPEAU_KSCHEDULING_GROUP@@@Z.c)
 *     EtwTraceThreadSchedulingGroupRundown @ 0x14064E230 (EtwTraceThreadSchedulingGroupRundown.c)
 *     PsGetNextProcess @ 0x1408EEB70 (PsGetNextProcess.c)
 *     PsGetNextProcessThread @ 0x14094A700 (PsGetNextProcessThread.c)
 */

void __fastcall KeTraceSchedulingGroupRundown(struct _ETW_SILODRIVERSTATE *a1, unsigned int a2)
{
  struct _LIST_ENTRY *Flink; // rbx
  void *i; // rdi
  __int64 j; // rdx
  __int64 NextProcessThread; // rax
  __int64 v8; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( !KiGroupSchedulingEnabled
    || (Flink = KiSchedulingGroupList.Flink, KiSchedulingGroupList.Flink == &KiSchedulingGroupList) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    do
    {
      KiLogSingleSchedulingGroupRundown(a1, a2, (struct _KSCHEDULING_GROUP *)&Flink[-4].Blink);
      Flink = Flink->Flink;
    }
    while ( Flink != &KiSchedulingGroupList );
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    for ( i = (void *)PsGetNextProcess(0LL); i; i = (void *)PsGetNextProcess(i) )
    {
      for ( j = 0LL; ; j = v8 )
      {
        NextProcessThread = PsGetNextProcessThread(i, j);
        v8 = NextProcessThread;
        if ( !NextProcessThread )
          break;
        if ( (*(_DWORD *)(NextProcessThread + 120) & 0x200) == 0 )
        {
          if ( *(_QWORD *)(NextProcessThread + 104) )
            EtwTraceThreadSchedulingGroupRundown(a1, a2, NextProcessThread);
        }
      }
    }
  }
}
