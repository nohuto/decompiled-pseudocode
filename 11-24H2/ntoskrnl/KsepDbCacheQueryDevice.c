/*
 * XREFs of KsepDbCacheQueryDevice @ 0x140942E30
 * Callers:
 *     KseQueryDeviceData @ 0x140944120 (KseQueryDeviceData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     KsepDbCacheQueryDeviceData @ 0x14073C34C (KsepDbCacheQueryDeviceData.c)
 *     KsepCacheLock @ 0x1408B8ED0 (KsepCacheLock.c)
 *     KsepCacheLookup @ 0x140942EF8 (KsepCacheLookup.c)
 *     KsepCacheUnlock @ 0x140942FDC (KsepCacheUnlock.c)
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
  KsepCacheLock((unsigned __int64 *)qword_140E66C58);
  v10 = KsepCacheLookup(qword_140E66C58, v12);
  if ( v10 )
    DeviceData = KsepDbCacheQueryDeviceData(v10, a2, a3, a4, a5);
  KsepCacheUnlock(qword_140E66C58);
  return DeviceData;
}
