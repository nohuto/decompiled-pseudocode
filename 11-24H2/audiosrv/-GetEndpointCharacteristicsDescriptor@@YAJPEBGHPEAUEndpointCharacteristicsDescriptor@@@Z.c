/*
 * XREFs of ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180059D68
 * Callers:
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18000CF44 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800776E0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180080980 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     AudioServerGetDevicePeriod @ 0x180082430 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetMixFormat @ 0x1800827D0 (AudioServerGetMixFormat.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x180082E80 (AudioServerGetSharedModeEnginePeriod.c)
 *     AudioServerIsRawStreamSupported @ 0x180084DE0 (AudioServerIsRawStreamSupported.c)
 *     _lambda_27af74114ee4e9d8e8865818d8d3377d_::operator() @ 0x1800B6AA0 (_lambda_27af74114ee4e9d8e8865818d8d3377d_--operator().c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800B809C (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     ?ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z @ 0x1800BE720 (-ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800C1270 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     _lambda_66d1f1fb806334d7e1fc2b7285da9724_::operator() @ 0x1800C5E14 (_lambda_66d1f1fb806334d7e1fc2b7285da9724_--operator().c)
 *     ?SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z @ 0x1800C9A98 (-SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z.c)
 *     ?SetEchoCancellationRenderEndpoint@CAudioStream@@QEAAJPEBG@Z @ 0x1800C9E5C (-SetEchoCancellationRenderEndpoint@CAudioStream@@QEAAJPEBG@Z.c)
 *     ?CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800DC434 (-CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJAEA.c)
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
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GetEndpointCharacteristicsDescriptor(
        const unsigned __int16 *a1,
        unsigned int a2,
        struct EndpointCharacteristicsDescriptor *a3)
{
  return (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, struct EndpointCharacteristicsDescriptor *))(*(_QWORD *)g_pEndpointCharacteristicsCache + 40LL))(
           g_pEndpointCharacteristicsCache,
           a1,
           a2,
           0LL,
           a3);
}
