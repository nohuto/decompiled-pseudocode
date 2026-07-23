/*
 * XREFs of PspReleasePushLockShared @ 0x1404F51E0
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140772820 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspNotifyServerSiloCreation @ 0x140779808 (PspNotifyServerSiloCreation.c)
 *     PspBeginServerSiloShutdown @ 0x14085A824 (PspBeginServerSiloShutdown.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void PspReleasePushLockShared()
{
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KeLeaveCriticalRegion();
}
