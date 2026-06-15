/*
 * XREFs of ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x18006CBC0
 * Callers:
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor$35 @ 0x1801690B9 (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--dtor$35.c)
 *     _AtmosCheck::RegisterAppDeploymentNotifications_::_1_::dtor$8 @ 0x180169D77 (_AtmosCheck--RegisterAppDeploymentNotifications_--_1_--dtor$8.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$5 @ 0x18016B986 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$5.c)
 *     _util::InterfaceMap_IAudioStreamInfo_Sarm::CStreamResource_::Find_::_1_::dtor$0 @ 0x18016BA81 (_util--InterfaceMap_IAudioStreamInfo_Sarm--CStreamResource_--Find_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_RemapPolicyRule_IPolicyRule_IAudioProcess___&__DynamicRoutingRule___&__::_1_::dtor$2 @ 0x18016CABB (_Microsoft--WRL--Details--MakeAndInitialize_RemapPolicyRule_IPolicyRule_IAudioProcess___-__Dynam.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CHybridPropertyStore_IPropertyStore_IMMDevice___&_unsigned_int_&__tagpropertykey_const___&__::_1_::dtor$1 @ 0x18016D454 (_Microsoft--WRL--Details--MakeAndInitialize_CHybridPropertyStore_IPropertyStore_IMM_ea_18016D454.c)
 *     _AtmosCheck::RegisterAppDeploymentNotifications_::_1_::dtor$4 @ 0x18016DE4E (_AtmosCheck--RegisterAppDeploymentNotifications_--_1_--dtor$4.c)
 *     _Microsoft::WRL::Details::Make_ResourceGroupInstance_unsigned___int64_&_EndpointInfo_&_unsigned_short_(&)[257]_unsigned_long_&__::_1_::dtor$0 @ 0x18016F63C (_Microsoft--WRL--Details--Make_ResourceGroupInstance_unsigned___int64_-_EndpointInfo_-_unsigned_.c)
 *     _wil::MakeOrThrow_ResourceGroupInstance_unsigned___int64_&_EndpointInfo_&_unsigned_short_(&)[257]_unsigned_long_&__::_1_::dtor$0 @ 0x18016F69E (_wil--MakeOrThrow_ResourceGroupInstance_unsigned___int64_-_EndpointInfo_-_unsigned_short_(-)[257.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualAudioStream_CVirtualAudioStream_IAudioProcess___&_enum__AUDIO_STREAM_EXTENDED_CATEGORY_unsigned_short_const___&_enum___MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001_&__::_1_::dtor$1 @ 0x18016FBB9 (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualAudioStream_CVirtualAudioStream_IAudioProces.c)
 *     _CMonitorManager::AddMonitor_::_1_::dtor$0 @ 0x180170CF3 (_CMonitorManager--AddMonitor_--_1_--dtor$0.c)
 *     _AtmosCheck::RegisterForUserWatcherNotifications_::_1_::dtor$5 @ 0x1801711BC (_AtmosCheck--RegisterForUserWatcherNotifications_--_1_--dtor$5.c)
 *     _CExclusiveModeListener::OnHoloshellStateChange_::_1_::dtor$5 @ 0x1801723BB (_CExclusiveModeListener--OnHoloshellStateChange_--_1_--dtor$5.c)
 *     _CExclusiveModeListener::OnHoloshellStateChange_::_1_::dtor$6 @ 0x1801723CD (_CExclusiveModeListener--OnHoloshellStateChange_--_1_--dtor$6.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
