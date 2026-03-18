/*
 * XREFs of PopIdleAoAcDozeS4TimerCallback @ 0x1405D3760
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     PopDeepSleepSetDisengageReason @ 0x140354D44 (PopDeepSleepSetDisengageReason.c)
 */

void PopIdleAoAcDozeS4TimerCallback()
{
  KIRQL v0; // al

  v0 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  byte_140F0A9D4 = 0;
  KeReleaseSpinLock(&PopIdleAoAcDozeS4Lock, v0);
  _m_prefetchw(&dword_140F0A9DC);
  if ( !_InterlockedOr(&dword_140F0A9DC, 1u) )
  {
    PopDeepSleepSetDisengageReason(4u);
    ExQueueWorkItem(&PopIdleAoAcDozeS4WorkItem, DelayedWorkQueue);
  }
}
