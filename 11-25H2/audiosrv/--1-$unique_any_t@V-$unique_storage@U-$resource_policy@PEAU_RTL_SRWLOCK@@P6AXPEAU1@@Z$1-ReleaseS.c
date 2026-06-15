/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18006209C
 * Callers:
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY05_NK@Z @ 0x1800699CC (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY05_NK@Z.c)
 *     ?IsApproximatelyAtScalarVolume@BluetoothVolume@BluetoothControls@@AEAA_NM@Z @ 0x1800D0D80 (-IsApproximatelyAtScalarVolume@BluetoothVolume@BluetoothControls@@AEAA_NM@Z.c)
 *     ?SetMute@BluetoothMute@BluetoothControls@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x1800D1D20 (-SetMute@BluetoothMute@BluetoothControls@@UEAAJHPEBU_GUID@@PEAH@Z.c)
 *     ?NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z @ 0x1800D94FC (-NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z.c)
 *     ??$AcquireToken@PEAUIBtAudioResourceManager@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAJAEBQEAUIBtAudioResourceManager@@_NPEAPEAUIUnknown@@PEA_N@Z @ 0x1800EB4CC (--$AcquireToken@PEAUIBtAudioResourceManager@@@-$TokenManager@VCBluetoothAudioEndpointResourceMan.c)
 *     ??$ForEachActiveToken@V_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@TokenEnumerator@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@QEBAX$$QEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@Z @ 0x1800EBA74 (--$ForEachActiveToken@V_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@TokenEnumerator@-$TokenManage.c)
 *     ?FreeTokensForContext@CBluetoothAudioEndpointResourceManagerProvider@@QEAAXPEAUIBtAudioResourceManager@@AEBVTokenEnumerator@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@@Z @ 0x1800ECED4 (-FreeTokensForContext@CBluetoothAudioEndpointResourceManagerProvider@@QEAAXPEAUIBtAudioResourceM.c)
 *     ?PreTokenAcquisitionCallback@CBluetoothAudioEndpointResourceManagerProvider@@QEAAXPEAUIBtAudioResourceManager@@AEBVTokenEnumerator@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@PEA_N@Z @ 0x1800ED0FC (-PreTokenAcquisitionCallback@CBluetoothAudioEndpointResourceManagerProvider@@QEAAXPEAUIBtAudioRe.c)
 *     ?FindFirstEndpoint@CEndpointStoreCache@@QEAA?AV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$function@$$A6A_NAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x1800F9F7C (-FindFirstEndpoint@CEndpointStoreCache@@QEAA-AV-$com_ptr_t@VCEndpointStore@@Uerr_returncode_poli.c)
 *     ?ForEachActiveEndpoint@CEndpointCharacteristicsCache@@UEAAJ$$QEAV?$function@$$A6AJPEAVCEndpointCharacteristics@@@Z@std@@@Z @ 0x18012BE20 (-ForEachActiveEndpoint@CEndpointCharacteristicsCache@@UEAAJ$$QEAV-$function@$$A6AJPEAVCEndpointC.c)
 *     _DynamicAudioEndpointManager::GetDefaultAudioEndpoint_::_1_::dtor$0 @ 0x18015ED30 (_DynamicAudioEndpointManager--GetDefaultAudioEndpoint_--_1_--dtor$0.c)
 *     _CEndpointCharacteristicsCache::GetEndpointCharacteristics_::_1_::dtor$1 @ 0x18015F000 (_CEndpointCharacteristicsCache--GetEndpointCharacteristics_--_1_--dtor$1.c)
 *     _BluetoothControls::BluetoothVolume::IsApproximatelyAtScalarVolume_::_1_::dtor$0 @ 0x180164DD5 (_BluetoothControls--BluetoothVolume--IsApproximatelyAtScalarVolume_--_1_--dtor$0.c)
 *     _CBtAudioResourceManagerBase::NotifyStreamChange_::_1_::dtor$1 @ 0x1801652E4 (_CBtAudioResourceManagerBase--NotifyStreamChange_--_1_--dtor$1.c)
 *     _TokenManager_CBluetoothAudioEndpointResourceManagerProvider_::AcquireToken_IBtAudioResourceManager____::_1_::dtor$0 @ 0x180166340 (_TokenManager_CBluetoothAudioEndpointResourceManagerProvider_--AcquireToken_IBtAudioResourceMana.c)
 *     _TokenManager_CBluetoothAudioEndpointResourceManagerProvider_::TokenEnumerator::ForEachActiveToken__lambda_7e14a330c860f44adc21b4f588a4bc9b____::_1_::dtor$0 @ 0x1801663B5 (_TokenManager_CBluetoothAudioEndpointResourceManagerProvider_--TokenEnumerator--ForEachActiveTok.c)
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
