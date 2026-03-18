/*
 * XREFs of KsepDbCacheInsertDevice @ 0x14073E384
 * Callers:
 *     KseQueryDeviceDataList @ 0x14095A9E0 (KseQueryDeviceDataList.c)
 *     KseQueryDeviceData @ 0x14095C660 (KseQueryDeviceData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     KsepCacheLock @ 0x1408BB520 (KsepCacheLock.c)
 *     KsepCacheLookup @ 0x14095B438 (KsepCacheLookup.c)
 *     KsepCacheUnlock @ 0x14095B51C (KsepCacheUnlock.c)
 *     KsepCacheInsert @ 0x140AA046C (KsepCacheInsert.c)
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
  KsepCacheLock(qword_140E66B28);
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( !KsepCacheLookup(qword_140E66B28, v6) )
  {
    KsepCacheInsert(qword_140E66B28, a2);
    v4 = 0;
  }
  KsepCacheUnlock(qword_140E66B28);
  return v4;
}
