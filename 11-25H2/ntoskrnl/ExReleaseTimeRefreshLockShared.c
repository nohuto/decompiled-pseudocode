/*
 * XREFs of ExReleaseTimeRefreshLockShared @ 0x140A095BC
 * Callers:
 *     ExTraceTimerResolution @ 0x1404A8858 (ExTraceTimerResolution.c)
 *     ExpSetTimeZoneInformation @ 0x1407A63A4 (ExpSetTimeZoneInformation.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     PopPolicyTimeChange @ 0x140A09500 (PopPolicyTimeChange.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 */

void ExReleaseTimeRefreshLockShared()
{
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpTimeRefreshLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpTimeRefreshLock);
  KeAbPostRelease((ULONG_PTR)&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
