/*
 * XREFs of ?GetNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x140068538
 * Callers:
 *     ?RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140069040 (-RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z.c)
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBUListValue@DeviceRegistrations@CpuManager@@@Z @ 0x140069A20 (-SetAt@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTraits@PEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::GetNode(
        __int64 a1,
        unsigned int *a2,
        int *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  unsigned int v5; // eax
  __int64 v8; // r8
  __int64 i; // rdx

  v5 = *a2;
  *a4 = *a2;
  *a3 = v5 % *(_DWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 )
  {
    v8 = 0LL;
    *a5 = 0LL;
    for ( i = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)*a3); i; i = *(_QWORD *)(i + 24) )
    {
      if ( *(_DWORD *)(i + 32) == *a4 && *(_QWORD *)i == *(_QWORD *)a2 )
      {
        *a5 = v8;
        return i;
      }
      v8 = i;
    }
  }
  return 0LL;
}
