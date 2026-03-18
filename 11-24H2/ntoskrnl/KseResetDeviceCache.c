/*
 * XREFs of KseResetDeviceCache @ 0x14095B32C
 * Callers:
 *     KseQueryDeviceDataList @ 0x14095A9E0 (KseQueryDeviceDataList.c)
 *     KseQueryDeviceData @ 0x14095C660 (KseQueryDeviceData.c)
 * Callees:
 *     KsepCacheReset @ 0x14074065C (KsepCacheReset.c)
 *     KsepCacheLock @ 0x1408BB520 (KsepCacheLock.c)
 *     KsepCacheUnlock @ 0x14095B51C (KsepCacheUnlock.c)
 */

__int64 KseResetDeviceCache()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9

  if ( dword_140E66AE4 == 2 )
  {
    KsepCacheLock((unsigned __int64 *)qword_140E66B28);
    KsepCacheReset(qword_140E66B28, v0, v1, v2);
    KsepCacheUnlock(qword_140E66B28);
  }
  return 0LL;
}
