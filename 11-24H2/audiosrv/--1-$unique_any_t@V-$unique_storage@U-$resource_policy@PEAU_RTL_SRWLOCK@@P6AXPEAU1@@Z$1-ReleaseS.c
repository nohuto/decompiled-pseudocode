/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180054958
 * Callers:
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY05_NK@Z @ 0x18006B7BC (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY05_NK@Z.c)
 *     ?HandleGetMasterVolumeLevelScalar@BluetoothVolumeAndMute@BluetoothControls@@QEAAJPEAM@Z @ 0x1800D4A28 (-HandleGetMasterVolumeLevelScalar@BluetoothVolumeAndMute@BluetoothControls@@QEAAJPEAM@Z.c)
 *     ?HandleGetMute@BluetoothVolumeAndMute@BluetoothControls@@QEAAJPEAH@Z @ 0x1800D4AEC (-HandleGetMute@BluetoothVolumeAndMute@BluetoothControls@@QEAAJPEAH@Z.c)
 *     ?IsApproximatelyAtScalarVolume@BluetoothVolume@BluetoothControls@@AEAA_NM@Z @ 0x1800D5244 (-IsApproximatelyAtScalarVolume@BluetoothVolume@BluetoothControls@@AEAA_NM@Z.c)
 *     ?SetMute@BluetoothMute@BluetoothControls@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x1800D7E70 (-SetMute@BluetoothMute@BluetoothControls@@UEAAJHPEBU_GUID@@PEAH@Z.c)
 *     ?TryGetTargetedMuteControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D83DC (-TryGetTargetedMuteControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV-$com_ptr_t@VIMute.c)
 *     ?TryGetTargetedVolumeControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D846C (-TryGetTargetedVolumeControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV-$com_ptr_t@VIVo.c)
 *     ?NotifyBidirectionalModeChanged@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800DF10C (-NotifyBidirectionalModeChanged@CBtAudioResourceManagerBase@@IEAAXXZ.c)
 *     ?NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z @ 0x1800DF1FC (-NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z.c)
 *     ??$AcquireToken@PEAUIBtAudioResourceManager@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAJAEBQEAUIBtAudioResourceManager@@_NPEAPEAUIUnknown@@PEA_N@Z @ 0x1800F047C (--$AcquireToken@PEAUIBtAudioResourceManager@@@-$TokenManager@VCBluetoothAudioEndpointResourceMan.c)
 *     ??$ForEachActiveToken@V_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@TokenEnumerator@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@QEBAX$$QEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@Z @ 0x1800F0A24 (--$ForEachActiveToken@V_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@TokenEnumerator@-$TokenManage.c)
 *     ?FreeTokensForContext@CBluetoothAudioEndpointResourceManagerProvider@@QEAAXPEAUIBtAudioResourceManager@@AEBVTokenEnumerator@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@@Z @ 0x1800F1F34 (-FreeTokensForContext@CBluetoothAudioEndpointResourceManagerProvider@@QEAAXPEAUIBtAudioResourceM.c)
 *     ?PreTokenAcquisitionCallback@CBluetoothAudioEndpointResourceManagerProvider@@QEAAXPEAUIBtAudioResourceManager@@AEBVTokenEnumerator@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@PEA_N@Z @ 0x1800F215C (-PreTokenAcquisitionCallback@CBluetoothAudioEndpointResourceManagerProvider@@QEAAXPEAUIBtAudioRe.c)
 *     ?FindFirstEndpoint@CEndpointStoreCache@@QEAA?AV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$function@$$A6A_NAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x1800FD1FC (-FindFirstEndpoint@CEndpointStoreCache@@QEAA-AV-$com_ptr_t@VCEndpointStore@@Uerr_returncode_poli.c)
 *     ?ForEachActiveEndpoint@CEndpointCharacteristicsCache@@UEAAJ$$QEAV?$function@$$A6AJPEAVCEndpointCharacteristics@@@Z@std@@@Z @ 0x180134090 (-ForEachActiveEndpoint@CEndpointCharacteristicsCache@@UEAAJ$$QEAV-$function@$$A6AJPEAVCEndpointC.c)
 *     ?GetEndpointCharacteristics_sanitizedId@CEndpointCharacteristicsCache@@AEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@HHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18013466C (-GetEndpointCharacteristics_sanitizedId@CEndpointCharacteristicsCache@@AEAAJAEAV-$basic_string@G.c)
 *     _DynamicAudioEndpointManager::RefreshPublishedDefaults_::_1_::dtor$1 @ 0x18016C2A5 (_DynamicAudioEndpointManager--RefreshPublishedDefaults_--_1_--dtor$1.c)
 *     _BluetoothControls::BluetoothVolume::IsApproximatelyAtScalarVolume_::_1_::dtor$0 @ 0x18016E3CC (_BluetoothControls--BluetoothVolume--IsApproximatelyAtScalarVolume_--_1_--dtor$0.c)
 *     _CBtAudioResourceManagerBase::NotifyBidirectionalModeChanged_::_1_::dtor$1 @ 0x18016E97A (_CBtAudioResourceManagerBase--NotifyBidirectionalModeChanged_--_1_--dtor$1.c)
 *     _CBtAudioResourceManagerBase::NotifyStreamChange_::_1_::dtor$1 @ 0x18016E99E (_CBtAudioResourceManagerBase--NotifyStreamChange_--_1_--dtor$1.c)
 *     _TokenManager_CBluetoothAudioEndpointResourceManagerProvider_::AcquireToken_IBtAudioResourceManager____::_1_::dtor$0 @ 0x18016F9B8 (_TokenManager_CBluetoothAudioEndpointResourceManagerProvider_--AcquireToken_IBtAudioResourceMana.c)
 *     _TokenManager_CBluetoothAudioEndpointResourceManagerProvider_::TokenEnumerator::ForEachActiveToken__lambda_7e14a330c860f44adc21b4f588a4bc9b____::_1_::dtor$0 @ 0x18016FA2D (_TokenManager_CBluetoothAudioEndpointResourceManagerProvider_--TokenEnumerator--ForEachActiveTok.c)
 *     _DynamicAudioEndpointManager::GetDefaultAudioEndpoint_::_1_::dtor$0 @ 0x18016FB20 (_DynamicAudioEndpointManager--GetDefaultAudioEndpoint_--_1_--dtor$0.c)
 *     _CEndpointCharacteristicsCache::GetEndpointCharacteristics_sanitizedId_::_1_::dtor$1 @ 0x18016FB32 (_CEndpointCharacteristicsCache--GetEndpointCharacteristics_sanitizedId_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockShared(v1);
}
