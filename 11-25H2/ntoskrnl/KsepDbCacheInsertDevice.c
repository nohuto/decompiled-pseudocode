/*
 * XREFs of KsepDbCacheInsertDevice @ 0x140732364
 * Callers:
 *     KseQueryDeviceDataList @ 0x140829150 (KseQueryDeviceDataList.c)
 *     KseQueryDeviceData @ 0x14082A670 (KseQueryDeviceData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     KsepCacheLookup @ 0x14082BFB8 (KsepCacheLookup.c)
 *     KsepCacheUnlock @ 0x14082C09C (KsepCacheUnlock.c)
 *     KsepCacheLock @ 0x14082C0D4 (KsepCacheLock.c)
 *     KsepCacheInsert @ 0x140A9A6FC (KsepCacheInsert.c)
 */

__int64 __fastcall KsepDbCacheInsertDevice(PCWSTR SourceString, __int64 a2)
{
  unsigned int v4; // edi
  _BYTE v6[4]; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+24h] [rbp-54h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF

  v7 = 0;
  v4 = -1073741811;
  memset_0(v6, 0, 0x44uLL);
  KsepCacheLock(qword_140E66858);
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( !KsepCacheLookup(qword_140E66858, v6) )
  {
    KsepCacheInsert(qword_140E66858, a2);
    v4 = 0;
  }
  KsepCacheUnlock(qword_140E66858);
  return v4;
}
