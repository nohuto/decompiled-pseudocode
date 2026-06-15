/*
 * XREFs of ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180032DC0
 * Callers:
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18000CF44 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x18001E254 (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 *     ?GetDeviceFormatHelper@CPolicyConfig@@AEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x180032CD8 (-GetDeviceFormatHelper@CPolicyConfig@@AEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x180033830 (-GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z @ 0x180034344 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x180034C00 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     ?GetCustomDeviceFormatsSupportedOnEndpoint@CPolicyConfig@@UEAAJPEBGPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x18006C4D0 (-GetCustomDeviceFormatsSupportedOnEndpoint@CPolicyConfig@@UEAAJPEBGPEAIPEAPEAPEAUtWAVEFORMATEX@@.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800776E0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180080980 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     AudioServerGetDevicePeriod @ 0x180082430 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetMixFormat @ 0x1800827D0 (AudioServerGetMixFormat.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x180082E80 (AudioServerGetSharedModeEnginePeriod.c)
 *     AudioServerIsFormatSupported @ 0x180083480 (AudioServerIsFormatSupported.c)
 *     AudioServerIsRawStreamSupported @ 0x180084DE0 (AudioServerIsRawStreamSupported.c)
 *     ?HasThirdPartySystemEffects@CPolicyConfig@@UEAAHPEBG@Z @ 0x18009E0B0 (-HasThirdPartySystemEffects@CPolicyConfig@@UEAAHPEBG@Z.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800B809C (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     ?ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z @ 0x1800BE720 (-ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z.c)
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z @ 0x1800BF97C (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800C1270 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     _lambda_66d1f1fb806334d7e1fc2b7285da9724_::operator() @ 0x1800C5E14 (_lambda_66d1f1fb806334d7e1fc2b7285da9724_--operator().c)
 *     ?SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z @ 0x1800C9A98 (-SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z.c)
 *     ?SetEchoCancellationRenderEndpoint@CAudioStream@@QEAAJPEBG@Z @ 0x1800C9E5C (-SetEchoCancellationRenderEndpoint@CAudioStream@@QEAAJPEBG@Z.c)
 *     ?CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800DC434 (-CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJAEA.c)
 *     ?RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z @ 0x1800DF8B8 (-RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800E0B04 (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     ?GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x180106140 (-GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x1801061C0 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 *     ?IsProcessingModeSupportedOnHostConnector@CPolicyConfig@@QEAAHPEBGU_GUID@@@Z @ 0x1801064B8 (-IsProcessingModeSupportedOnHostConnector@CPolicyConfig@@QEAAHPEBGU_GUID@@@Z.c)
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x1801066E0 (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x180106860 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x1801069F0 (-SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z.c)
 *     ?SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z @ 0x180106FD0 (-SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z.c)
 *     PolicyConfigGetMixFormat @ 0x180107B80 (PolicyConfigGetMixFormat.c)
 *     _lambda_e0af659f64b105a4e9b6b315aa2a08ae_::operator() @ 0x18010BCD0 (_lambda_e0af659f64b105a4e9b6b315aa2a08ae_--operator().c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180110120 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerIsPostVolumeLoopbackSupported @ 0x180110FE0 (AudioServerIsPostVolumeLoopbackSupported.c)
 *     _CVADServer::RuntimeClassInitialize_::_1_::dtor$1 @ 0x180168549 (_CVADServer--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _AudioEffectsWatcher::RuntimeClassInitialize_::_1_::dtor$2 @ 0x180169BD1 (_AudioEffectsWatcher--RuntimeClassInitialize_--_1_--dtor$2.c)
 *     _CPolicyConfig::GetDeviceFormatHelper_::_1_::dtor$0 @ 0x18016A906 (_CPolicyConfig--GetDeviceFormatHelper_--_1_--dtor$0.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_::_1_::dtor$13 @ 0x18016A94E (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_--_1_--dtor$13.c)
 *     _AudioEffectsWatcher::ReloadApos_::_1_::dtor$0 @ 0x18016AA02 (_AudioEffectsWatcher--ReloadApos_--_1_--dtor$0.c)
 *     __lambda_e0af659f64b105a4e9b6b315aa2a08ae_::operator()_::_1_::dtor$0 @ 0x18016C2C9 (__lambda_e0af659f64b105a4e9b6b315aa2a08ae_--operator()_--_1_--dtor$0.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$0 @ 0x18016D562 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$0.c)
 *     _CAudioResourceManager::ReevaluateStreamGroups_::_1_::dtor$3 @ 0x18016DB5A (_CAudioResourceManager--ReevaluateStreamGroups_--_1_--dtor$3.c)
 *     _CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor$7 @ 0x18016DC20 (_CAudioResourceManager--UpdateAuxiliaryInputForStreamGroup_--_1_--dtor$7.c)
 *     _CAudioStream::SetAudioEffect_::_1_::dtor$0 @ 0x18016E14D (_CAudioStream--SetAudioEffect_--_1_--dtor$0.c)
 *     _CBtAudioResourceManagerBase::CreateSecondaryProfileRenderSaDeviceWithDefaultParameters_::_1_::dtor$0 @ 0x18016E776 (_CBtAudioResourceManagerBase--CreateSecondaryProfileRenderSaDeviceWithDefaultParameters_--_1_--d.c)
 *     _CBtAudioResourceManagerBase::RefreshStreamsOnDevice_::_1_::dtor$2 @ 0x18016E9C2 (_CBtAudioResourceManagerBase--RefreshStreamsOnDevice_--_1_--dtor$2.c)
 *     _CBtAudioResourceManagerBase::RefreshStreamsOnDevice_::_1_::dtor$7 @ 0x18016E9E6 (_CBtAudioResourceManagerBase--RefreshStreamsOnDevice_--_1_--dtor$7.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor(
        EndpointCharacteristicsDescriptor *this)
{
  volatile signed __int32 *v2; // rbx

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
}
