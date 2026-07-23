/*
 * XREFs of ExReleaseTimeRefreshLockShared @ 0x140A0C21C
 * Callers:
 *     ExTraceTimerResolution @ 0x1404A3CD8 (ExTraceTimerResolution.c)
 *     ExpSetTimeZoneInformation @ 0x1407B5C94 (ExpSetTimeZoneInformation.c)
 *     PopPolicyTimeChange @ 0x140A0C160 (PopPolicyTimeChange.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void ExReleaseTimeRefreshLockShared()
{
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpTimeRefreshLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpTimeRefreshLock);
  KeAbPostRelease((ULONG_PTR)&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
