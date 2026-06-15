/*
 * XREFs of ?CanCastTo@?$ChainInterfaces@UIServiceProviderWrapper@@UIServiceProvider@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140036F58
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIServiceProviderWrapper@@UIServiceProvider@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIAudioProcessingObjectLoggingService@@UIAudioProcessingObjectRTQueueService@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIServiceProviderWrapper@@UIServiceProvider@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIAudioProcessingObjectLoggingService@@UIAudioProcessingObjectRTQueueService@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x140036E64 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterfac.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ChainInterfaces<IServiceProviderWrapper,IServiceProvider,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( (*a2 != 970609541
     || a2[1] != *(_DWORD *)&GUID_39da5385_7953_438c_826a_96222274b3b8.Data2
     || a2[2] != *(_DWORD *)GUID_39da5385_7953_438c_826a_96222274b3b8.Data4
     || a2[3] != *(_DWORD *)&GUID_39da5385_7953_438c_826a_96222274b3b8.Data4[4])
    && (*a2 != 1834041537
     || a2[1] != *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
     || a2[2] != *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
     || a2[3] != *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4]) )
  {
    return 2147500034LL;
  }
  *a3 = a1;
  return 0LL;
}
