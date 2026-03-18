/*
 * XREFs of PiUEventQueueBroadcastEventEntry @ 0x140A65454
 * Callers:
 *     PiUEventProcessBroadcastNotifications @ 0x140967900 (PiUEventProcessBroadcastNotifications.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     PiUEventCoalesceBroadcastEvents @ 0x140A65510 (PiUEventCoalesceBroadcastEvents.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

void __fastcall PiUEventQueueBroadcastEventEntry(__int64 a1)
{
  PVOID *v2; // rdi
  __int64 *v3; // rax
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  ExAcquireFastMutex(&PiUEventBroadcastEventQueueLock);
  v2 = (PVOID *)PiUEventBroadcastEventQueue;
  PiUEventCoalesceBroadcastEvents(a1);
  *(_BYTE *)(a1 + 16) = 1;
  v3 = (__int64 *)qword_140F8B288;
  if ( *(PVOID **)qword_140F8B288 != &PiUEventBroadcastEventQueue )
    __fastfail(3u);
  *(_QWORD *)a1 = &PiUEventBroadcastEventQueue;
  *(_QWORD *)(a1 + 8) = v3;
  *v3 = a1;
  qword_140F8B288 = a1;
  KeReleaseGuardedMutex(&PiUEventBroadcastEventQueueLock);
  if ( v2 == &PiUEventBroadcastEventQueue )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      Pool2->List.Flink = 0LL;
      Pool2->WorkerRoutine = PiUEventBroadcastEventWorker;
      Pool2->Parameter = Pool2;
      ExQueueWorkItem(Pool2, BackgroundWorkQueue);
    }
  }
}
