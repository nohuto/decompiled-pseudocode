/*
 * XREFs of KsepDbCacheInsertDevice @ 0x14073C2B4
 * Callers:
 *     KseQueryDeviceDataList @ 0x1409424A0 (KseQueryDeviceDataList.c)
 *     KseQueryDeviceData @ 0x140944120 (KseQueryDeviceData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     KsepCacheLock @ 0x1408B8ED0 (KsepCacheLock.c)
 *     KsepCacheLookup @ 0x140942EF8 (KsepCacheLookup.c)
 *     KsepCacheUnlock @ 0x140942FDC (KsepCacheUnlock.c)
 *     KsepCacheInsert @ 0x140A9B7FC (KsepCacheInsert.c)
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
  KsepCacheLock(qword_140E66C58);
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( !KsepCacheLookup(qword_140E66C58, v6) )
  {
    KsepCacheInsert(qword_140E66C58, a2);
    v4 = 0;
  }
  KsepCacheUnlock(qword_140E66C58);
  return v4;
}
