/*
 * XREFs of KseQueryDeviceData @ 0x14082A670
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x140829BF4 (ExpGetDeviceDataInformation.c)
 *     KseQueryDeviceFlags @ 0x14082A5C0 (KseQueryDeviceFlags.c)
 * Callees:
 *     KsepLogInfo @ 0x14048E720 (KsepLogInfo.c)
 *     KsepShimDbChanged @ 0x1404A6134 (KsepShimDbChanged.c)
 *     KsepDebugPrint @ 0x1404D3784 (KsepDebugPrint.c)
 *     KsepDbCacheInsertDevice @ 0x140732364 (KsepDbCacheInsertDevice.c)
 *     KsepDbCacheQueryDeviceData @ 0x1407323FC (KsepDbCacheQueryDeviceData.c)
 *     KsepDbCacheReadDevice @ 0x14082A190 (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceFree @ 0x14082A3C0 (KsepCacheDeviceFree.c)
 *     KsepDbQueryRegistryDeviceData @ 0x14082A834 (KsepDbQueryRegistryDeviceData.c)
 *     KsepDbCacheQueryDevice @ 0x14082BEF0 (KsepDbCacheQueryDevice.c)
 *     KseResetDeviceCache @ 0x14082C130 (KseResetDeviceCache.c)
 */

__int64 __fastcall KseQueryDeviceData(PCWSTR SourceString, const WCHAR *a2, _DWORD *a3, unsigned int *a4, void *a5)
{
  int RegistryDeviceData; // ebx
  _DWORD *v11; // r8
  void **v12; // rdi
  __int64 v13; // rax
  void *v14; // [rsp+20h] [rbp-38h]
  int v15[2]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)v15 = 0LL;
  if ( dword_140E66814 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !a2 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  if ( (*a3 & 0x20000000) != 0 )
  {
    *a3 = 0;
  }
  else
  {
    *a3 = 0;
    HIDWORD(v14) = HIDWORD(a5);
    RegistryDeviceData = KsepDbQueryRegistryDeviceData(SourceString);
    if ( RegistryDeviceData != -1073741275 )
      goto LABEL_8;
  }
  if ( (unsigned int)KsepShimDbChanged() )
  {
    KseResetDeviceCache();
LABEL_15:
    RegistryDeviceData = KsepDbCacheReadDevice((__int64)SourceString, v15);
    if ( RegistryDeviceData < 0 )
      return (unsigned int)RegistryDeviceData;
    v11 = a3;
    v12 = *(void ***)v15;
    RegistryDeviceData = KsepDbCacheQueryDeviceData(*(__int64 *)v15, a2, v11, a4, a5);
    if ( (int)KsepDbCacheInsertDevice(SourceString, (__int64)v12) < 0 )
      KsepCacheDeviceFree(v12);
    goto LABEL_8;
  }
  RegistryDeviceData = KsepDbCacheQueryDevice(SourceString, (int)a2, (int)a3, (int)a4, a5);
  if ( RegistryDeviceData == -1073741275 )
    goto LABEL_15;
LABEL_8:
  if ( RegistryDeviceData >= 0 )
  {
    if ( !*a4 )
      RegistryDeviceData = -1073741275;
    v13 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v13]) = 0;
    LODWORD(KsepHistoryMessages[v13]) = 592111;
    if ( (KsepDebugFlag & 1) != 0 )
    {
      LODWORD(v14) = RegistryDeviceData;
      KsepDebugPrint(0LL, (int)"KSE: Query device [%ws, %ws]: found in cache %08x\n", a2, SourceString, v14);
    }
    LODWORD(v14) = RegistryDeviceData;
    KsepLogInfo(0LL, (__int64)"KSE: Query device [%ws, %ws]: found in cache %08x\n", a2, SourceString, v14);
  }
  return (unsigned int)RegistryDeviceData;
}
