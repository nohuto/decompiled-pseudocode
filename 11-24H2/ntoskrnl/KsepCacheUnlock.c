/*
 * XREFs of KsepCacheUnlock @ 0x140942FDC
 * Callers:
 *     KsepDbCacheInsertDevice @ 0x14073C2B4 (KsepDbCacheInsertDevice.c)
 *     KseLookupHardwareId @ 0x14073DC7C (KseLookupHardwareId.c)
 *     KseAddHardwareId @ 0x140942360 (KseAddHardwareId.c)
 *     KseQueryDeviceDataList @ 0x1409424A0 (KseQueryDeviceDataList.c)
 *     KseResetDeviceCache @ 0x140942DEC (KseResetDeviceCache.c)
 *     KsepDbCacheQueryDevice @ 0x140942E30 (KsepDbCacheQueryDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void __fastcall KsepCacheUnlock(volatile signed __int64 *BugCheckParameter2)
{
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
}
