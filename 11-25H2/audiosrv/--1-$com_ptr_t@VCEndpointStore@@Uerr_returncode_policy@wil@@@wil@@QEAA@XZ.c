/*
 * XREFs of ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002153C
 * Callers:
 *     GetAudioSessionManager @ 0x180012C30 (GetAudioSessionManager.c)
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x180012EB4 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x180013070 (-GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x1800132E0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x1800197F0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     ?ResetApoTelemetryPublishingState@CPolicyConfig@@UEAAXPEBG@Z @ 0x180020D10 (-ResetApoTelemetryPublishingState@CPolicyConfig@@UEAAXPEBG@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@SAXAEAV?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@PEAU01@@Z @ 0x1800213A4 (--$_Freenode@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wi.c)
 *     ??1?$forward_list@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800213D0 (--1-$forward_list@V-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V.c)
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x18002141C (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     ?GetWatcher@AudioModeEffectsWatcherFactory@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@PEAPEAUIAudioModeEffectsWatcher@@@Z @ 0x1800226F4 (-GetWatcher@AudioModeEffectsWatcherFactory@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@PE.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x180059BFC (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18007230C (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEBGPEAUIAudioStreamInfo@@@Z @ 0x180088C30 (-FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacte.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x18008B960 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     ?UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x18008D0EC (-UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audio.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_NPEAVCAudioSessionManager@@66PEAPEAUISaDeviceProxy@@@Z @ 0x18009FF94 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@P.c)
 *     ?GetConnectorTypeForStream@@YA?AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@HPEBUtWAVEFORMATEX@@PEAUIProcessSubmixProxy@@@Z @ 0x1800A3C60 (-GetConnectorTypeForStream@@YA-AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndp.c)
 *     ??1CAudioSessionManagerProxy@@QEAA@XZ @ 0x1800A6A70 (--1CAudioSessionManagerProxy@@QEAA@XZ.c)
 *     ?GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatcher@@@Z @ 0x1800B47C8 (-GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatche.c)
 *     _lambda_efe6a2a1125c0c889ee2664d28532957_::__lambda_efe6a2a1125c0c889ee2664d28532957_ @ 0x1800B72A4 (_lambda_efe6a2a1125c0c889ee2664d28532957_--__lambda_efe6a2a1125c0c889ee2664d28532957_.c)
 *     _lambda_a5b05a19d77442a7b86c350de8e12946_::operator() @ 0x1800B7A24 (_lambda_a5b05a19d77442a7b86c350de8e12946_--operator().c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG_N@Z @ 0x1800B86FC (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV-$ComPtr@UIStreamGr.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800B88DC (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B9CE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800BC790 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z @ 0x1800BF6A0 (-ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z.c)
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x1800BFA30 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z @ 0x1800C0C4C (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z.c)
 *     std::_Func_impl_no_alloc__lambda_efe6a2a1125c0c889ee2664d28532957__void_::_Delete_this @ 0x1800C1160 (std--_Func_impl_no_alloc__lambda_efe6a2a1125c0c889ee2664d28532957__void_--_Delete_this.c)
 *     ?AllowOffloadStreamCreation@CBtAudioResourceManagerBase@@UEAA_NXZ @ 0x1800D38A0 (-AllowOffloadStreamCreation@CBtAudioResourceManagerBase@@UEAA_NXZ.c)
 *     ?CreateExclusiveSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D39E4 (-CreateExclusiveSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacter.c)
 *     ?CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D3E40 (-CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristic.c)
 *     ?CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D42D0 (-CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDes.c)
 *     ?GetSaDeviceForOffloadStream@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@5PEAPEAUISaDeviceProxy@@@Z @ 0x1800D8A90 (-GetSaDeviceForOffloadStream@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescri.c)
 *     ?RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z @ 0x1800D9B1C (-RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z.c)
 *     ?ReleaseResources@CBtAudioResourceManagerBase@@UEAAJXZ @ 0x1800DA3F0 (-ReleaseResources@CBtAudioResourceManagerBase@@UEAAJXZ.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800DB3BC (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800DC130 (-RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups_Old@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800DC2E0 (-RestoreDisplacedPrimaryProfileStreamGroups_Old@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     ?UpdateBtAudioStreamContextIfNecessary@CBtAudioResourceManagerBase@@IEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800DD238 (-UpdateBtAudioStreamContextIfNecessary@CBtAudioResourceManagerBase@@IEAAXW4__MIDL___MIDL_itf_mmd.c)
 *     ?EndpointResourceValidity@CConstraintModelResourceManager@@AEAA_NPEAVCEndpointCharacteristics@@@Z @ 0x1800E84A4 (-EndpointResourceValidity@CConstraintModelResourceManager@@AEAA_NPEAVCEndpointCharacteristics@@@.c)
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@5PEAPEAUISaDeviceProxy@@@Z @ 0x1800F1DD0 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams.c)
 *     ?FindSaDeviceByResourceId@DeviceGraphStore@@YAJ_KPEAPEAUISaDeviceProxy@@@Z @ 0x1800F4E84 (-FindSaDeviceByResourceId@DeviceGraphStore@@YAJ_KPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x180100974 (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 *     ?LockEndpointForUse@CPolicyConfig@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x180101010 (-LockEndpointForUse@CPolicyConfig@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PE.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180109760 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetEndpointVpoContext @ 0x18010A020 (AudioServerGetEndpointVpoContext.c)
 *     AudioServerGetStreamVpoContext @ 0x18010A340 (AudioServerGetStreamVpoContext.c)
 *     _PublishApoTelemetry_::_1_::dtor$0 @ 0x18015EDA2 (_PublishApoTelemetry_--_1_--dtor$0.c)
 *     _CEndpointStoreCache::GetEndpointStore_::_1_::dtor$2 @ 0x18015EE00 (_CEndpointStoreCache--GetEndpointStore_--_1_--dtor$2.c)
 *     AudioServerGetStreamVpoContext$dtor$8 @ 0x18015F3F0 (AudioServerGetStreamVpoContext$dtor$8.c)
 *     AudioServerGetEndpointVpoContext$dtor$1 @ 0x18015FCE9 (AudioServerGetEndpointVpoContext$dtor$1.c)
 *     _CPolicyConfig::DisconnectHelper_::_1_::dtor$0 @ 0x180162001 (_CPolicyConfig--DisconnectHelper_--_1_--dtor$0.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$2 @ 0x180163495 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$2.c)
 *     _GetConnectorTypeForStream_::_1_::dtor$0 @ 0x180163657 (_GetConnectorTypeForStream_--_1_--dtor$0.c)
 *     _AudioEffectsWatcherFactory::GetWatcher_::_1_::dtor$0 @ 0x180163F4B (_AudioEffectsWatcherFactory--GetWatcher_--_1_--dtor$0.c)
 *     __lambda_a5b05a19d77442a7b86c350de8e12946_::operator()_::_1_::dtor$2 @ 0x1801640E8 (__lambda_a5b05a19d77442a7b86c350de8e12946_--operator()_--_1_--dtor$2.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$12 @ 0x1801641F6 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$12.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_::_1_::dtor$0 @ 0x180164370 (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_--_1_--dtor$0.c)
 *     _CBtAudioResourceManagerBase::CreateExclusiveSaDeviceOnRenderEndpoint_::_1_::dtor$3 @ 0x180164F21 (_CBtAudioResourceManagerBase--CreateExclusiveSaDeviceOnRenderEndpoint_--_1_--dtor$3.c)
 *     _CBtAudioResourceManagerBase::CreateSaDeviceOnRenderEndpoint_::_1_::dtor$1 @ 0x180164FFC (_CBtAudioResourceManagerBase--CreateSaDeviceOnRenderEndpoint_--_1_--dtor$1.c)
 *     _UseSupportedConnectorMode_::_1_::dtor$0 @ 0x18016500E (_UseSupportedConnectorMode_--_1_--dtor$0.c)
 *     _CBtAudioResourceManagerBase::RefreshStreamsOnDevice_::_1_::dtor$1 @ 0x1801652F6 (_CBtAudioResourceManagerBase--RefreshStreamsOnDevice_--_1_--dtor$1.c)
 *     _CBtAudioResourceManagerBase::RefreshStreamsOnDevice_::_1_::dtor$6 @ 0x18016531A (_CBtAudioResourceManagerBase--RefreshStreamsOnDevice_--_1_--dtor$6.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_Old_::_1_::dtor$0 @ 0x180165524 (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_Old_--_1_--dtor$0.c)
 *     _CConstraintModelResourceManager::EndpointResourceValidity_::_1_::dtor$0 @ 0x1801662D4 (_CConstraintModelResourceManager--EndpointResourceValidity_--_1_--dtor$0.c)
 *     _dynamic_atexit_destructor_for__g_endpointStoreCache__ @ 0x180169720 (_dynamic_atexit_destructor_for__g_endpointStoreCache__.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
