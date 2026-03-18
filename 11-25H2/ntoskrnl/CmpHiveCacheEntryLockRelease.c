/*
 * XREFs of CmpHiveCacheEntryLockRelease @ 0x1407D586C
 * Callers:
 *     CmpHiveCacheClaimHiveEntry @ 0x1407D54A0 (CmpHiveCacheClaimHiveEntry.c)
 *     CmpHiveCacheCreateHiveEntry @ 0x1407D5598 (CmpHiveCacheCreateHiveEntry.c)
 *     CmpHiveCachePnpNotificationCallback @ 0x1407D58B0 (CmpHiveCachePnpNotificationCallback.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x1407D59E0 (CmpHiveCachePopulateHiveEntry.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407D5AF0 (CmpHiveCachePopulateHiveEntryThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
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
