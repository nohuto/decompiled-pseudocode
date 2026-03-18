/*
 * XREFs of PopReleaseAwaymodeLock @ 0x140B6C224
 * Callers:
 *     PopIssueActionRequest @ 0x140A87C34 (PopIssueActionRequest.c)
 *     PopPowerRequestCallbackAwayModeRequired @ 0x140A94BD0 (PopPowerRequestCallbackAwayModeRequired.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
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
