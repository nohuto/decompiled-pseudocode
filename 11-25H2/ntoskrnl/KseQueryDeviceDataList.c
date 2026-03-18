/*
 * XREFs of KseQueryDeviceDataList @ 0x140829150
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x140829BF4 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     KsepShimDbChanged @ 0x1404A6134 (KsepShimDbChanged.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     KsepDbCacheInsertDevice @ 0x140732364 (KsepDbCacheInsertDevice.c)
 *     KsepDbCacheQueryDeviceDataList @ 0x1407324B4 (KsepDbCacheQueryDeviceDataList.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1407327B4 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepDbCacheReadDevice @ 0x14082A190 (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceFree @ 0x14082A3C0 (KsepCacheDeviceFree.c)
 *     KsepCacheLookup @ 0x14082BFB8 (KsepCacheLookup.c)
 *     KsepCacheUnlock @ 0x14082C09C (KsepCacheUnlock.c)
 *     KsepCacheLock @ 0x14082C0D4 (KsepCacheLock.c)
 *     KseResetDeviceCache @ 0x14082C130 (KseResetDeviceCache.c)
 */

__int64 __fastcall KseQueryDeviceDataList(PCWSTR SourceString, char *a2, unsigned int a3, _DWORD *a4)
{
  int RegistryDeviceDataList; // ebx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v13; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v14[4]; // [rsp+30h] [rbp-68h] BYREF
  int v15; // [rsp+34h] [rbp-64h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-40h] BYREF

  v15 = 0;
  memset_0(v14, 0, 0x44uLL);
  v13 = 0LL;
  if ( dword_140E66814 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !SourceString || !a4 )
    return (unsigned int)-1073741811;
  RegistryDeviceDataList = KsepDbQueryRegistryDeviceDataList((__int64)SourceString, a2, a3, a4);
  if ( RegistryDeviceDataList == -1073741275 )
  {
    if ( (unsigned int)KsepShimDbChanged() )
    {
      KseResetDeviceCache();
LABEL_11:
      RegistryDeviceDataList = KsepDbCacheReadDevice(SourceString, &v13);
      if ( RegistryDeviceDataList >= 0 )
      {
        v11 = v13;
        RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v13, a2, a3, a4);
        if ( (int)KsepDbCacheInsertDevice(SourceString, v11) < 0 )
          KsepCacheDeviceFree(v11);
      }
      return (unsigned int)RegistryDeviceDataList;
    }
    RtlInitUnicodeString(&DestinationString, SourceString);
    KsepCacheLock(qword_140E66858);
    v9 = KsepCacheLookup(qword_140E66858, v14);
    v13 = v9;
    v10 = v9;
    if ( v9 )
      RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v9, a2, a3, a4);
    KsepCacheUnlock(qword_140E66858);
    if ( !v10 )
      goto LABEL_11;
  }
  return (unsigned int)RegistryDeviceDataList;
}
