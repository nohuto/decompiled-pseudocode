/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIServiceProviderWrapper@@UIServiceProvider@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIAudioProcessingObjectLoggingService@@UIAudioProcessingObjectRTQueueService@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIServiceProviderWrapper@@UIServiceProvider@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIAudioProcessingObjectLoggingService@@UIAudioProcessingObjectRTQueueService@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x140036E64
 * Callers:
 *     ?QueryService@CAPOServiceProvider@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x140036CC0 (-QueryService@CAPOServiceProvider@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOServiceProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140036DD0 (-QueryInterface@CAPOServiceProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIServiceProviderWrapper@@UIServiceProvider@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIAudioProcessingObjectLoggingService@@UIAudioProcessingObjectRTQueueService@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400498F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainIn.c)
 * Callees:
 *     ?CanCastTo@?$ChainInterfaces@UIServiceProviderWrapper@@UIServiceProvider@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140036F58 (-CanCastTo@-$ChainInterfaces@UIServiceProviderWrapper@@UIServiceProvider@@VNil@Details@WRL@Micro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IServiceProviderWrapper,IServiceProvider,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioProcessingObjectLoggingService,IAudioProcessingObjectRTQueueService>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rdx
  __int64 v4; // rcx
  int CanCastTo; // ebx
  _QWORD *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx

  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    CanCastTo = Microsoft::WRL::ChainInterfaces<IServiceProviderWrapper,IServiceProvider,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo();
    if ( CanCastTo < 0 )
    {
      v7 = v4 + 8;
      if ( *v3 == 1770979591
        && v3[1] == *(_DWORD *)&GUID_698f0107_1745_4708_95a5_d84478a62a65.Data2
        && v3[2] == *(_DWORD *)GUID_698f0107_1745_4708_95a5_d84478a62a65.Data4
        && v3[3] == *(_DWORD *)&GUID_698f0107_1745_4708_95a5_d84478a62a65.Data4[4] )
      {
        *v6 = v7;
        CanCastTo = 0;
        goto LABEL_7;
      }
      v8 = v7 + 8;
      if ( *v3 == -1395237329
        && v3[1] == *(_DWORD *)&GUID_acd65e2f_955b_4b57_b9bf_ac297bb752c9.Data2
        && v3[2] == *(_DWORD *)GUID_acd65e2f_955b_4b57_b9bf_ac297bb752c9.Data4
        && v3[3] == *(_DWORD *)&GUID_acd65e2f_955b_4b57_b9bf_ac297bb752c9.Data4[4] )
      {
        *v6 = v8;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = -2147467262;
      }
    }
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
LABEL_7:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 8LL))(*v6);
    return (unsigned int)CanCastTo;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
