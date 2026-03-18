/*
 * XREFs of KsepCacheUnlock @ 0x14095B51C
 * Callers:
 *     KsepDbCacheInsertDevice @ 0x14073E384 (KsepDbCacheInsertDevice.c)
 *     KseLookupHardwareId @ 0x14073FD4C (KseLookupHardwareId.c)
 *     KseAddHardwareId @ 0x14095A8A0 (KseAddHardwareId.c)
 *     KseQueryDeviceDataList @ 0x14095A9E0 (KseQueryDeviceDataList.c)
 *     KseResetDeviceCache @ 0x14095B32C (KseResetDeviceCache.c)
 *     KsepDbCacheQueryDevice @ 0x14095B370 (KsepDbCacheQueryDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

void __fastcall KsepCacheUnlock(volatile signed __int64 *BugCheckParameter2)
{
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
}
