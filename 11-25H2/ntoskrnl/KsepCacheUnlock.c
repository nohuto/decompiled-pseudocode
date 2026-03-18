/*
 * XREFs of KsepCacheUnlock @ 0x14082C09C
 * Callers:
 *     KsepDbCacheInsertDevice @ 0x140732364 (KsepDbCacheInsertDevice.c)
 *     KseLookupHardwareId @ 0x140733D2C (KseLookupHardwareId.c)
 *     KseQueryDeviceDataList @ 0x140829150 (KseQueryDeviceDataList.c)
 *     KsepDbCacheQueryDevice @ 0x14082BEF0 (KsepDbCacheQueryDevice.c)
 *     KseResetDeviceCache @ 0x14082C130 (KseResetDeviceCache.c)
 *     KseAddHardwareId @ 0x14082C174 (KseAddHardwareId.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

void __fastcall KsepCacheUnlock(volatile signed __int64 *BugCheckParameter2)
{
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
}
