/*
 * XREFs of PspReleasePushLockShared @ 0x1404F7900
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140772600 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspNotifyServerSiloCreation @ 0x140779708 (PspNotifyServerSiloCreation.c)
 *     PspBeginServerSiloShutdown @ 0x1408E8FFC (PspBeginServerSiloShutdown.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

void PspReleasePushLockShared()
{
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KeLeaveCriticalRegion();
}
