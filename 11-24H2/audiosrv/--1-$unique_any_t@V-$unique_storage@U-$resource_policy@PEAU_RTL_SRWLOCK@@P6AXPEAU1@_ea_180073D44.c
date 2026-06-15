/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180073D44
 * Callers:
 *     _CEndpointStoreCache::GetEndpointStore_::_1_::dtor$1 @ 0x1801685F0 (_CEndpointStoreCache--GetEndpointStore_--_1_--dtor$1.c)
 *     _DynamicAudioEndpointManager::RemoveRule_::_1_::dtor$1 @ 0x18016E3A8 (_DynamicAudioEndpointManager--RemoveRule_--_1_--dtor$1.c)
 *     _CEndpointCharacteristicsCache::GetEndpointCharacteristics_sanitizedId_::_1_::dtor$3 @ 0x18016EA82 (_CEndpointCharacteristicsCache--GetEndpointCharacteristics_sanitizedId_--_1_--dtor$3.c)
 *     _TokenManager_CBluetoothAudioEndpointResourceManagerProvider_::AcquireToken_IBtAudioResourceManager____::_1_::dtor$2 @ 0x18016F9CA (_TokenManager_CBluetoothAudioEndpointResourceManagerProvider_--AcquireToken_IBtAudi_ea_18016F9CA.c)
 *     _CStreamConnectionManagerImpl::GetInstance_::_1_::dtor$0 @ 0x180170EA8 (_CStreamConnectionManagerImpl--GetInstance_--_1_--dtor$0.c)
 *     _CMonitorManager::CStreamConnectionImpl::SetStreamingState_::_1_::dtor$0 @ 0x180171022 (_CMonitorManager--CStreamConnectionImpl--SetStreamingState_--_1_--dtor$0.c)
 *     _DynamicAudioEndpointManager::AddRule_::_1_::dtor$1 @ 0x1801714A9 (_DynamicAudioEndpointManager--AddRule_--_1_--dtor$1.c)
 *     _DynamicAudioEndpointManager::GetRule_::_1_::dtor$3 @ 0x180171503 (_DynamicAudioEndpointManager--GetRule_--_1_--dtor$3.c)
 *     _DynamicAudioEndpointManager::SetDefaultAudioEndpoint_::_1_::dtor$0 @ 0x180171515 (_DynamicAudioEndpointManager--SetDefaultAudioEndpoint_--_1_--dtor$0.c)
 *     _DynamicAudioEndpointManager::UpdateRule_::_1_::dtor$0 @ 0x180171527 (_DynamicAudioEndpointManager--UpdateRule_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::IsSPDIFEndpoint_::_1_::dtor$0 @ 0x180171945 (_CEndpointCharacteristics--IsSPDIFEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        RTL_SRWLOCK **a1)
{
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(a1);
}
