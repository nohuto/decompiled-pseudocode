/*
 * XREFs of KsepDbCacheQueryDevice @ 0x14095B370
 * Callers:
 *     KseQueryDeviceData @ 0x14095C660 (KseQueryDeviceData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     KsepDbCacheQueryDeviceData @ 0x14073E41C (KsepDbCacheQueryDeviceData.c)
 *     KsepCacheLock @ 0x1408BB520 (KsepCacheLock.c)
 *     KsepCacheLookup @ 0x14095B438 (KsepCacheLookup.c)
 *     KsepCacheUnlock @ 0x14095B51C (KsepCacheUnlock.c)
 */

__int64 __fastcall KsepDbCacheQueryDevice(PCWSTR SourceString, const WCHAR *a2, _DWORD *a3, unsigned int *a4, void *a5)
{
  unsigned int DeviceData; // edi
  __int64 v10; // rcx
  _BYTE v12[4]; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+34h] [rbp-54h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-30h] BYREF

  v13 = 0;
  DeviceData = -1073741275;
  memset_0(v12, 0, 0x44uLL);
  RtlInitUnicodeString(&DestinationString, SourceString);
  KsepCacheLock((unsigned __int64 *)qword_140E66B28);
  v10 = KsepCacheLookup(qword_140E66B28, v12);
  if ( v10 )
    DeviceData = KsepDbCacheQueryDeviceData(v10, a2, a3, a4, a5);
  KsepCacheUnlock(qword_140E66B28);
  return DeviceData;
}
