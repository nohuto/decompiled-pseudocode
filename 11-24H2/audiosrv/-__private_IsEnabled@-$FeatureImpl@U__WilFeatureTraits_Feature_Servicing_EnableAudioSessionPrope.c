/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableAudioSessionPropertyStoreRefresh@@@details@wil@@QEAA_NXZ @ 0x1800C3030
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180012380 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800776E0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableAudioSessionPropertyStoreRefresh@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800C1990 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableAudioSes.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableAudioSessionPropertyStoreRefresh@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C2964 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableAudioSessionPropertyStore.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableAudioSessionPropertyStoreRefresh>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableAudioSessionPropertyStoreRefresh>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableAudioSessionPropertyStoreRefresh>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
