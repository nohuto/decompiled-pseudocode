/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180086E38
 * Callers:
 *     _CEndpointStoreCache::GetEndpointStore_::_1_::dtor$1 @ 0x18015EDE0 (_CEndpointStoreCache--GetEndpointStore_--_1_--dtor$1.c)
 *     _CEndpointCharacteristicsCache::GetEndpointCharacteristics_::_1_::dtor$4 @ 0x18015F020 (_CEndpointCharacteristicsCache--GetEndpointCharacteristics_--_1_--dtor$4.c)
 *     _CBluetoothAudioEndpointResourceManagerProvider::TryGetResourceManagerService_::_1_::dtor$0 @ 0x1801653C8 (_CBluetoothAudioEndpointResourceManagerProvider--TryGetResourceManagerService_--_1_--dtor$0.c)
 *     _TokenManager_CBluetoothAudioEndpointResourceManagerProvider_::AcquireToken_IBtAudioResourceManager____::_1_::dtor$2 @ 0x180166352 (_TokenManager_CBluetoothAudioEndpointResourceManagerProvider_--AcquireToken_IBtAudi_ea_180166352.c)
 *     _CStreamConnectionManagerImpl::GetInstance_::_1_::dtor$0 @ 0x180167906 (_CStreamConnectionManagerImpl--GetInstance_--_1_--dtor$0.c)
 *     _CMonitorManager::CStreamConnectionImpl::SetStreamingState_::_1_::dtor$0 @ 0x180167AB6 (_CMonitorManager--CStreamConnectionImpl--SetStreamingState_--_1_--dtor$0.c)
 *     _DynamicAudioEndpointManager::AddRule_::_1_::dtor$1 @ 0x180167F3D (_DynamicAudioEndpointManager--AddRule_--_1_--dtor$1.c)
 *     _DynamicAudioEndpointManager::GetRule_::_1_::dtor$3 @ 0x180167F97 (_DynamicAudioEndpointManager--GetRule_--_1_--dtor$3.c)
 *     _DynamicAudioEndpointManager::RemoveRule_::_1_::dtor$1 @ 0x180167FA9 (_DynamicAudioEndpointManager--RemoveRule_--_1_--dtor$1.c)
 *     _DynamicAudioEndpointManager::SetDefaultAudioEndpoint_::_1_::dtor$0 @ 0x180167FBB (_DynamicAudioEndpointManager--SetDefaultAudioEndpoint_--_1_--dtor$0.c)
 *     _DynamicAudioEndpointManager::UpdateRule_::_1_::dtor$0 @ 0x180167FCD (_DynamicAudioEndpointManager--UpdateRule_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::IsSPDIFEndpoint_::_1_::dtor$0 @ 0x180168280 (_CEndpointCharacteristics--IsSPDIFEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        RTL_SRWLOCK **a1)
{
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(a1);
}
