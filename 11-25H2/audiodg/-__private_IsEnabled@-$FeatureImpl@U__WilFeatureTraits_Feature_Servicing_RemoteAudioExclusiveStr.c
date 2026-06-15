/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RemoteAudioExclusiveStreamFix@@@details@wil@@QEAA_NXZ @ 0x140071F00
 * Callers:
 *     ?CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14006F660 (-CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DE.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RemoteAudioExclusiveStreamFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x14007000C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RemoteAudioExc.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RemoteAudioExclusiveStreamFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1400718D4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RemoteAudioExclusiveStreamFix@@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_RemoteAudioExclusiveStreamFix>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_RemoteAudioExclusiveStreamFix>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_RemoteAudioExclusiveStreamFix>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
