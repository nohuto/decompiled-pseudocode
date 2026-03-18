/*
 * XREFs of RtlpReleaseBootStatusLock @ 0x1404B6CA4
 * Callers:
 *     PopBootStatGet @ 0x140A1C0B0 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x140A1C6F8 (PopBootStatSet.c)
 *     RtlUnlockBootStatusData @ 0x140A1CA60 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140A7A490 (RtlLockBootStatusData.c)
 *     PopBootStatRestoreDefaults @ 0x140AA6644 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

void RtlpReleaseBootStatusLock()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&RtlpBootStatHandleLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&RtlpBootStatHandleLock);
  KeAbPostRelease((ULONG_PTR)&RtlpBootStatHandleLock);
  KeLeaveCriticalRegion();
}
