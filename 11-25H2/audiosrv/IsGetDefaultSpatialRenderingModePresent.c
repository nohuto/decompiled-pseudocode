/*
 * XREFs of IsGetDefaultSpatialRenderingModePresent @ 0x1800AB328
 * Callers:
 *     ?AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ @ 0x180049F7C (-AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180062D54 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x18006E584 (-AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPE.c)
 *     IsSpatialOnlyFormat @ 0x18007754C (IsSpatialOnlyFormat.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011710___ @ 0x18007C818 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011.c)
 *     ?IsLegacyVssRelevant@CSpatialAudioTech@@UEBA_NXZ @ 0x18007CB00 (-IsLegacyVssRelevant@CSpatialAudioTech@@UEBA_NXZ.c)
 *     ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x1800A5154 (-RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66W4_BridgeStreamProperties@@6KPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x1800BE314 (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 *     ??$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Z @ 0x180117AA8 (--$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUI.c)
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180121D20 (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180121F14 (-ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1801220F8 (-ConfigureDolbyAtmosTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxHdmi@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1801222EC (-ConfigureDtsxHdmi@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180122460 (-ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1801225E8 (-ConfigureDtsxTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180122898 (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abada77___ @ 0x180126088 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abad.c)
 *     ?EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXXZ @ 0x180132680 (-EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXXZ.c)
 *     ?InitializeGlobals@CSpatialProperties@@AEAAJPEBU_tlgProvider_t@@@Z @ 0x180134F04 (-InitializeGlobals@CSpatialProperties@@AEAAJPEBU_tlgProvider_t@@@Z.c)
 *     ?IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1801392C0 (-IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMAT.c)
 *     ?IsTechnologySupported@CSpatialAudioDtsxHdmi@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180139620 (-IsTechnologySupported@CSpatialAudioDtsxHdmi@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800AB756 (ApiSetQueryApiSetPresence_0.c)
 */

char __fastcall IsGetDefaultSpatialRenderingModePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1801CF010 == 1 )
    return 1;
  if ( dword_1801CF010 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"FH", &v1) < 0 )
    return 0;
  result = v1;
  dword_1801CF010 = 2 - (v1 != 0);
  return result;
}
