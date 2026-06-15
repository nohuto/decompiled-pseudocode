/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14004B664
 * Callers:
 *     _Windows::Media::Devices::AudioDeviceModulesManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1400930B8 (_Windows--Media--Devices--AudioDeviceModulesManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::InitializeEvents_::_1_::dtor$3 @ 0x140095449 (_Windows--Media--Devices--Internal--AudioDeviceBrokerDevice--InitializeEvents_--_1_--dtor$3.c)
 *     _Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged_::_1_::dtor$0 @ 0x1400955B9 (_Windows--Media--Devices--AudioDeviceModulesManager--OnModuleChanged_--_1_--dtor$0.c)
 *     _CBridgeSourceEndpoint::AddBridgeSourceEndpointConsumer_::_1_::dtor$0 @ 0x14009625F (_CBridgeSourceEndpoint--AddBridgeSourceEndpointConsumer_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        RTL_SRWLOCK **a1)
{
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(a1);
}
