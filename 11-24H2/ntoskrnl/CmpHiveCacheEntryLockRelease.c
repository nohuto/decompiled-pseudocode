/*
 * XREFs of CmpHiveCacheEntryLockRelease @ 0x1407E56DC
 * Callers:
 *     CmpHiveCacheClaimHiveEntry @ 0x1407E5310 (CmpHiveCacheClaimHiveEntry.c)
 *     CmpHiveCacheCreateHiveEntry @ 0x1407E5408 (CmpHiveCacheCreateHiveEntry.c)
 *     CmpHiveCachePnpNotificationCallback @ 0x1407E5720 (CmpHiveCachePnpNotificationCallback.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x1407E5854 (CmpHiveCachePopulateHiveEntry.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407E5970 (CmpHiveCachePopulateHiveEntryThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
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
