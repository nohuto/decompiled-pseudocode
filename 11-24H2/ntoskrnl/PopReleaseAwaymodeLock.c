/*
 * XREFs of PopReleaseAwaymodeLock @ 0x140B6DAC8
 * Callers:
 *     PopIssueActionRequest @ 0x140A84124 (PopIssueActionRequest.c)
 *     PopPowerRequestCallbackAwayModeRequired @ 0x140A91380 (PopPowerRequestCallbackAwayModeRequired.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void PopReleaseAwaymodeLock()
{
  signed __int64 v0; // rdx
  ULONG_PTR v1; // rtt

  if ( (struct _KTHREAD *)PopAwaymodeLockExclusiveThread == KeGetCurrentThread() )
    PopAwaymodeLockExclusiveThread = 0LL;
  _m_prefetchw(&PopAwaymodeLock);
  v0 = PopAwaymodeLock - 16;
  if ( (PopAwaymodeLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (PopAwaymodeLock & 2) != 0
    || (v1 = PopAwaymodeLock,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopAwaymodeLock, v0, PopAwaymodeLock)) )
  {
    ExfReleasePushLock(&PopAwaymodeLock);
  }
  KeAbPostRelease((ULONG_PTR)&PopAwaymodeLock);
  KeLeaveCriticalRegion();
}
