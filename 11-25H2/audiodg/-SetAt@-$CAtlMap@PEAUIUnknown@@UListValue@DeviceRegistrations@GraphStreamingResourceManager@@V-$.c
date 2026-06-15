/*
 * XREFs of ?SetAt@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBUListValue@DeviceRegistrations@GraphStreamingResourceManager@@@Z @ 0x1400133D8
 * Callers:
 *     ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140013200 (-RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegis.c)
 * Callees:
 *     ?CreateNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@AEAAPEAVCNode@12@AEBQEAUIUnknown@@II@Z @ 0x140013464 (-CreateNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager.c)
 */

__int64 __fastcall ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::SetAt(
        __int64 a1,
        int *a2,
        __int64 a3)
{
  int v5; // r9d
  __int64 v6; // rdx
  __int64 i; // r8

  v5 = *a2;
  v6 = (unsigned int)*a2 % *(_DWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)a1 + 8 * v6); i; i = *(_QWORD *)(i + 32) )
    {
      if ( *(_DWORD *)(i + 40) == v5 && *(_QWORD *)i == *(_QWORD *)a2 )
      {
        *(_OWORD *)(i + 8) = *(_OWORD *)a3;
        *(_QWORD *)(i + 24) = *(_QWORD *)(a3 + 16);
        return i;
      }
    }
  }
  i = ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::CreateNode(
        a1,
        a2,
        (unsigned int)v6);
  *(_OWORD *)(i + 8) = *(_OWORD *)a3;
  *(_QWORD *)(i + 24) = *(_QWORD *)(a3 + 16);
  return i;
}
