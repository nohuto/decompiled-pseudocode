/*
 * XREFs of PopIdleAoAcDozeS4TimerCallback @ 0x1405D80C0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     PopDeepSleepSetDisengageReason @ 0x1403CB2E4 (PopDeepSleepSetDisengageReason.c)
 */

void PopIdleAoAcDozeS4TimerCallback()
{
  KIRQL v0; // al

  v0 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  byte_140F0BDB4 = 0;
  KeReleaseSpinLock(&PopIdleAoAcDozeS4Lock, v0);
  _m_prefetchw(&dword_140F0BDBC);
  if ( !_InterlockedOr(&dword_140F0BDBC, 1u) )
  {
    PopDeepSleepSetDisengageReason(4u);
    ExQueueWorkItem(&PopIdleAoAcDozeS4WorkItem, DelayedWorkQueue);
  }
}
