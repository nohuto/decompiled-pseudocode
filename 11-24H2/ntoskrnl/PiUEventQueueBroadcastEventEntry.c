/*
 * XREFs of PiUEventQueueBroadcastEventEntry @ 0x140A601C4
 * Callers:
 *     PiUEventProcessBroadcastNotifications @ 0x140857EAC (PiUEventProcessBroadcastNotifications.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PiUEventCoalesceBroadcastEvents @ 0x140A60280 (PiUEventCoalesceBroadcastEvents.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
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
  v3 = (__int64 *)qword_140F8BDA8;
  if ( *(PVOID **)qword_140F8BDA8 != &PiUEventBroadcastEventQueue )
    __fastfail(3u);
  *(_QWORD *)a1 = &PiUEventBroadcastEventQueue;
  *(_QWORD *)(a1 + 8) = v3;
  *v3 = a1;
  qword_140F8BDA8 = a1;
  KeReleaseGuardedMutex(&PiUEventBroadcastEventQueueLock);
  if ( v2 == &PiUEventBroadcastEventQueue )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x59706E50u);
    if ( Pool2 )
    {
      Pool2->List.Flink = 0LL;
      Pool2->WorkerRoutine = PiUEventBroadcastEventWorker;
      Pool2->Parameter = Pool2;
      ExQueueWorkItem(Pool2, BackgroundWorkQueue);
    }
  }
}
