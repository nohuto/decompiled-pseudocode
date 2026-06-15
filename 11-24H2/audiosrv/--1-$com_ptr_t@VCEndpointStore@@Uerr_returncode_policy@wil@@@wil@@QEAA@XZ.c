/*
 * XREFs of ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029ADC
 * Callers:
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18000DA40 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18000DC00 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x180013A10 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     ?ResetApoTelemetryPublishingState@CPolicyConfig@@UEAAXPEBG@Z @ 0x1800292C0 (-ResetApoTelemetryPublishingState@CPolicyConfig@@UEAAXPEBG@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@SAXAEAV?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@PEAU01@@Z @ 0x180029944 (--$_Freenode@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wi.c)
 *     ??1?$forward_list@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180029970 (--1-$forward_list@V-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V.c)
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x1800299BC (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     ?GetWatcher@AudioModeEffectsWatcherFactory@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@PEAPEAUIAudioModeEffectsWatcher@@@Z @ 0x18002AC74 (-GetWatcher@AudioModeEffectsWatcherFactory@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@PE.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18004BD6C (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800625BC (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEBGPEAUIAudioStreamInfo@@@Z @ 0x180076C20 (-FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacte.c)
 *     GetAudioSessionManager @ 0x18007A7D0 (GetAudioSessionManager.c)
 *     ?UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x1800815EC (-UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audio.c)
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x1800878B0 (-GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_NPEAVCAudioSessionManager@@66PEAPEAUISaDeviceProxy@@@Z @ 0x18009C858 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@P.c)
 *     ?GetConnectorTypeForStream@@YA?AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@HPEBUtWAVEFORMATEX@@PEAUIProcessSubmixProxy@@@Z @ 0x1800A0070 (-GetConnectorTypeForStream@@YA-AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndp.c)
 *     ??1CAudioSessionManagerProxy@@QEAA@XZ @ 0x1800A2E98 (--1CAudioSessionManagerProxy@@QEAA@XZ.c)
 *     ?GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatcher@@@Z @ 0x1800B3388 (-GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatche.c)
 *     _lambda_58be061a777e3803beb2fa2cac2678e0_::__lambda_58be061a777e3803beb2fa2cac2678e0_ @ 0x1800B66C4 (_lambda_58be061a777e3803beb2fa2cac2678e0_--__lambda_58be061a777e3803beb2fa2cac2678e0_.c)
 *     _lambda_73ada75428367bd29c5c2dda60bd7903_::operator() @ 0x1800B72B0 (_lambda_73ada75428367bd29c5c2dda60bd7903_--operator().c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG_N@Z @ 0x1800B7EBC (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV-$ComPtr@UIStreamGr.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800B809C (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B94A0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800BBFB0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z @ 0x1800BE720 (-ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z.c)
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x1800BEAB0 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z @ 0x1800BF97C (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z.c)
 *     std::_Func_impl_no_alloc__lambda_58be061a777e3803beb2fa2cac2678e0__void_::_Delete_this @ 0x1800BFD40 (std--_Func_impl_no_alloc__lambda_58be061a777e3803beb2fa2cac2678e0__void_--_Delete_this.c)
 *     ?AllowOffloadStreamCreation@CBtAudioResourceManagerBase@@UEAA_NXZ @ 0x1800DB1E0 (-AllowOffloadStreamCreation@CBtAudioResourceManagerBase@@UEAA_NXZ.c)
 *     ?CreateExclusiveSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800DB324 (-CreateExclusiveSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacter.c)
 *     ?CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800DB780 (-CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristic.c)
 *     ?CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800DBBE0 (-CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDes.c)
 *     ?GetSaDeviceForOffloadStream@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@5PEAPEAUISaDeviceProxy@@@Z @ 0x1800DE560 (-GetSaDeviceForOffloadStream@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescri.c)
 *     ?RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z @ 0x1800DF8B8 (-RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z.c)
 *     ?ReleaseResources@CBtAudioResourceManagerBase@@UEAAJXZ @ 0x1800E0260 (-ReleaseResources@CBtAudioResourceManagerBase@@UEAAJXZ.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800E0B04 (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800E1888 (-RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     ?UpdateBtAudioStreamContextIfNecessary@CBtAudioResourceManagerBase@@IEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E1C98 (-UpdateBtAudioStreamContextIfNecessary@CBtAudioResourceManagerBase@@IEAAXW4__MIDL___MIDL_itf_mmd.c)
 *     ?EndpointResourceValidity@CConstraintModelResourceManager@@AEAA_NPEAVCEndpointCharacteristics@@@Z @ 0x1800EC8F4 (-EndpointResourceValidity@CConstraintModelResourceManager@@AEAA_NPEAVCEndpointCharacteristics@@@.c)
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@5PEAPEAUISaDeviceProxy@@@Z @ 0x1800F6E00 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams.c)
 *     ?FindSaDeviceByResourceId@DeviceGraphStore@@YAJ_KPEAPEAUISaDeviceProxy@@@Z @ 0x1800F9EE4 (-FindSaDeviceByResourceId@DeviceGraphStore@@YAJ_KPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x180105EE4 (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 *     ?LockEndpointForUse@CPolicyConfig@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x180106600 (-LockEndpointForUse@CPolicyConfig@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PE.c)
 *     ?SetEndpointVisibilityImpl@CPolicyConfig@@QEAAJPEBGHK@Z @ 0x180106D08 (-SetEndpointVisibilityImpl@CPolicyConfig@@QEAAJPEBGHK@Z.c)
 *     ?GetStreamVpoContext@CVADServer@@UEAAJPEAKPEAPEAX@Z @ 0x18010CB30 (-GetStreamVpoContext@CVADServer@@UEAAJPEAKPEAPEAX@Z.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180110120 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetEndpointVpoContext @ 0x180110A90 (AudioServerGetEndpointVpoContext.c)
 *     _lambda_f8e4fcbe2b76ea049fc019bd31ddd87a_::operator() @ 0x180116688 (_lambda_f8e4fcbe2b76ea049fc019bd31ddd87a_--operator().c)
 *     _PublishApoTelemetry_::_1_::dtor$0 @ 0x1801685B6 (_PublishApoTelemetry_--_1_--dtor$0.c)
 *     _CEndpointStoreCache::GetEndpointStore_::_1_::dtor$2 @ 0x180168610 (_CEndpointStoreCache--GetEndpointStore_--_1_--dtor$2.c)
 *     _CVADServer::InitializePolicy_::_1_::dtor$2 @ 0x180168C60 (_CVADServer--InitializePolicy_--_1_--dtor$2.c)
 *     __lambda_f8e4fcbe2b76ea049fc019bd31ddd87a_::operator()_::_1_::dtor$0 @ 0x18016A4A7 (__lambda_f8e4fcbe2b76ea049fc019bd31ddd87a_--operator()_--_1_--dtor$0.c)
 *     _CPolicyConfig::DisconnectHelper_::_1_::dtor$0 @ 0x18016B188 (_CPolicyConfig--DisconnectHelper_--_1_--dtor$0.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$2 @ 0x18016C789 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$2.c)
 *     _GetConnectorTypeForStream_::_1_::dtor$0 @ 0x18016C9AA (_GetConnectorTypeForStream_--_1_--dtor$0.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$6 @ 0x18016D2E1 (_CAudioResourceManager--DestroyStream_--_1_--dtor$6.c)
 *     __lambda_73ada75428367bd29c5c2dda60bd7903_::operator()_::_1_::dtor$2 @ 0x18016D4E4 (__lambda_73ada75428367bd29c5c2dda60bd7903_--operator()_--_1_--dtor$2.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$12 @ 0x18016D63A (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$12.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_::_1_::dtor$0 @ 0x18016D7B4 (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_--_1_--dtor$0.c)
 *     _CBtAudioResourceManagerBase::CreateExclusiveSaDeviceOnRenderEndpoint_::_1_::dtor$3 @ 0x18016E611 (_CBtAudioResourceManagerBase--CreateExclusiveSaDeviceOnRenderEndpoint_--_1_--dtor$3.c)
 *     _CBtAudioResourceManagerBase::CreateSaDeviceOnRenderEndpoint_::_1_::dtor$1 @ 0x18016E6EC (_CBtAudioResourceManagerBase--CreateSaDeviceOnRenderEndpoint_--_1_--dtor$1.c)
 *     _UseSupportedConnectorMode_::_1_::dtor$0 @ 0x18016E6FE (_UseSupportedConnectorMode_--_1_--dtor$0.c)
 *     _CBtAudioResourceManagerBase::RefreshStreamsOnDevice_::_1_::dtor$1 @ 0x18016E9B0 (_CBtAudioResourceManagerBase--RefreshStreamsOnDevice_--_1_--dtor$1.c)
 *     _CBtAudioResourceManagerBase::RefreshStreamsOnDevice_::_1_::dtor$6 @ 0x18016E9D4 (_CBtAudioResourceManagerBase--RefreshStreamsOnDevice_--_1_--dtor$6.c)
 *     _CConstraintModelResourceManager::EndpointResourceValidity_::_1_::dtor$0 @ 0x18016F95E (_CConstraintModelResourceManager--EndpointResourceValidity_--_1_--dtor$0.c)
 *     _dynamic_atexit_destructor_for__g_endpointStoreCache__ @ 0x180172FE0 (_dynamic_atexit_destructor_for__g_endpointStoreCache__.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // r8
  signed __int32 v2; // edx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    do
      v2 = *((_DWORD *)v1 + 3);
    while ( v2 != 0x7FFFFFFF && v2 != _InterlockedCompareExchange(v1 + 3, v2 - 1, v2) );
    result = (unsigned int)(v2 - 1);
    if ( v2 == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                    + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
