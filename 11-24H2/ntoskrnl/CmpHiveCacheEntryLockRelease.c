/*
 * XREFs of CmpHiveCacheEntryLockRelease @ 0x1407E5CAC
 * Callers:
 *     CmpHiveCacheClaimHiveEntry @ 0x1407E58E0 (CmpHiveCacheClaimHiveEntry.c)
 *     CmpHiveCacheCreateHiveEntry @ 0x1407E59D8 (CmpHiveCacheCreateHiveEntry.c)
 *     CmpHiveCachePnpNotificationCallback @ 0x1407E5CF0 (CmpHiveCachePnpNotificationCallback.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x1407E5E24 (CmpHiveCachePopulateHiveEntry.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407E5F40 (CmpHiveCachePopulateHiveEntryThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void __fastcall CmpHiveCacheEntryLockRelease(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 304;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 304), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 304));
  KeAbPostRelease(v1);
  KeLeaveCriticalRegion();
}
