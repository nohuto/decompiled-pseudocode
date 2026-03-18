/*
 * XREFs of PopReleaseAwaymodeLock @ 0x140B5D144
 * Callers:
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 *     PopPowerRequestCallbackAwayModeRequired @ 0x140A90A90 (PopPowerRequestCallbackAwayModeRequired.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
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
