/*
 * XREFs of ExReleaseTimeRefreshLockShared @ 0x140A13ABC
 * Callers:
 *     ExTraceTimerResolution @ 0x1404A9A08 (ExTraceTimerResolution.c)
 *     ExpSetTimeZoneInformation @ 0x1407B5844 (ExpSetTimeZoneInformation.c)
 *     PopPolicyTimeChange @ 0x140A13A00 (PopPolicyTimeChange.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

void ExReleaseTimeRefreshLockShared()
{
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpTimeRefreshLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpTimeRefreshLock);
  KeAbPostRelease((ULONG_PTR)&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
