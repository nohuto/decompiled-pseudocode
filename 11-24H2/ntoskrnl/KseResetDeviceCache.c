/*
 * XREFs of KseResetDeviceCache @ 0x140942DEC
 * Callers:
 *     KseQueryDeviceDataList @ 0x1409424A0 (KseQueryDeviceDataList.c)
 *     KseQueryDeviceData @ 0x140944120 (KseQueryDeviceData.c)
 * Callees:
 *     KsepCacheReset @ 0x14073E58C (KsepCacheReset.c)
 *     KsepCacheLock @ 0x1408B8ED0 (KsepCacheLock.c)
 *     KsepCacheUnlock @ 0x140942FDC (KsepCacheUnlock.c)
 */

__int64 KseResetDeviceCache()
{
  __int64 v0; // rdx

  if ( dword_140E66C14 == 2 )
  {
    KsepCacheLock((unsigned __int64 *)qword_140E66C58);
    KsepCacheReset(qword_140E66C58, v0);
    KsepCacheUnlock(qword_140E66C58);
  }
  return 0LL;
}
