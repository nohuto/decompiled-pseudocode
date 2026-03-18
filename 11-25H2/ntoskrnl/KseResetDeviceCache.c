/*
 * XREFs of KseResetDeviceCache @ 0x14082C130
 * Callers:
 *     KseQueryDeviceDataList @ 0x140829150 (KseQueryDeviceDataList.c)
 *     KseQueryDeviceData @ 0x14082A670 (KseQueryDeviceData.c)
 * Callees:
 *     KsepCacheReset @ 0x14073463C (KsepCacheReset.c)
 *     KsepCacheUnlock @ 0x14082C09C (KsepCacheUnlock.c)
 *     KsepCacheLock @ 0x14082C0D4 (KsepCacheLock.c)
 */

__int64 KseResetDeviceCache()
{
  if ( dword_140E66814 == 2 )
  {
    KsepCacheLock((unsigned __int64 *)qword_140E66858);
    KsepCacheReset(qword_140E66858);
    KsepCacheUnlock((volatile signed __int64 *)qword_140E66858);
  }
  return 0LL;
}
