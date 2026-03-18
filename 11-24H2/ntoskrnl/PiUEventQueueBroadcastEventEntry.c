/*
 * XREFs of PiUEventQueueBroadcastEventEntry @ 0x140A673E4
 * Callers:
 *     PiUEventProcessBroadcastNotifications @ 0x14085C13C (PiUEventProcessBroadcastNotifications.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     PiUEventCoalesceBroadcastEvents @ 0x140A674A0 (PiUEventCoalesceBroadcastEvents.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
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
  v3 = (__int64 *)qword_140F8BD08;
  if ( *(PVOID **)qword_140F8BD08 != &PiUEventBroadcastEventQueue )
    __fastfail(3u);
  *(_QWORD *)a1 = &PiUEventBroadcastEventQueue;
  *(_QWORD *)(a1 + 8) = v3;
  *v3 = a1;
  qword_140F8BD08 = a1;
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
