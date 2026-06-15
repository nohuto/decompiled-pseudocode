/*
 * XREFs of ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x18007EE20
 * Callers:
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor$35 @ 0x18015FF82 (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--dtor$35.c)
 *     _AtmosCheck::RegisterAppDeploymentNotifications_::_1_::dtor$8 @ 0x180161E3C (_AtmosCheck--RegisterAppDeploymentNotifications_--_1_--dtor$8.c)
 *     _util::InterfaceMap_IAudioStreamInfo_Sarm::CStreamResource_::Find_::_1_::dtor$0 @ 0x180162469 (_util--InterfaceMap_IAudioStreamInfo_Sarm--CStreamResource_--Find_--_1_--dtor$0.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$5 @ 0x1801624E5 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$5.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualAudioStream_CVirtualAudioStream_IAudioProcess___&_enum__AUDIO_STREAM_EXTENDED_CATEGORY_unsigned_short_const___&_enum___MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001_&__::_1_::dtor$1 @ 0x180163609 (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualAudioStream_CVirtualAudioStream_IAudioProces.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_RemapPolicyRule_IPolicyRule_IAudioProcess___&__DynamicRoutingRule___&__::_1_::dtor$2 @ 0x180163768 (_Microsoft--WRL--Details--MakeAndInitialize_RemapPolicyRule_IPolicyRule_IAudioProcess___-__Dynam.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CHybridPropertyStore_IPropertyStore_IMMDevice___&_unsigned_int_&__tagpropertykey_const___&__::_1_::dtor$1 @ 0x180164058 (_Microsoft--WRL--Details--MakeAndInitialize_CHybridPropertyStore_IPropertyStore_IMM_ea_180164058.c)
 *     _AtmosCheck::RegisterAppDeploymentNotifications_::_1_::dtor$4 @ 0x180164956 (_AtmosCheck--RegisterAppDeploymentNotifications_--_1_--dtor$4.c)
 *     _Microsoft::WRL::Details::Make_ResourceGroupInstance_unsigned___int64_&_EndpointInfo_&_unsigned_short_(&)[257]_unsigned_long_&__::_1_::dtor$0 @ 0x180165FB2 (_Microsoft--WRL--Details--Make_ResourceGroupInstance_unsigned___int64_-_EndpointInfo_-_unsigned_.c)
 *     _wil::MakeOrThrow_ResourceGroupInstance_unsigned___int64_&_EndpointInfo_&_unsigned_short_(&)[257]_unsigned_long_&__::_1_::dtor$0 @ 0x180166014 (_wil--MakeOrThrow_ResourceGroupInstance_unsigned___int64_-_EndpointInfo_-_unsigned_short_(-)[257.c)
 *     _CMonitorManager::AddMonitor_::_1_::dtor$0 @ 0x180167751 (_CMonitorManager--AddMonitor_--_1_--dtor$0.c)
 *     _AtmosCheck::RegisterForUserWatcherNotifications_::_1_::dtor$5 @ 0x180167C62 (_AtmosCheck--RegisterForUserWatcherNotifications_--_1_--dtor$5.c)
 *     _CExclusiveModeListener::OnHoloshellStateChange_::_1_::dtor$5 @ 0x180168C81 (_CExclusiveModeListener--OnHoloshellStateChange_--_1_--dtor$5.c)
 *     _CExclusiveModeListener::OnHoloshellStateChange_::_1_::dtor$6 @ 0x180168C93 (_CExclusiveModeListener--OnHoloshellStateChange_--_1_--dtor$6.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
