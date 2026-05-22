/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_InteractionModeRemoteSession@@@details@wil@@QEAA_NXZ @ 0x180112608
 * Callers:
 *     ?CalculateDevicePostureMode@DevicePostureHelpers@@YA?AW4DevicePostureMode@Input@Internal@UI@Windows@@W4DeviceConvertibility@1@@Z @ 0x180111630 (-CalculateDevicePostureMode@DevicePostureHelpers@@YA-AW4DevicePostureMode@Input@Internal@UI@Wind.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_InteractionModeRemoteSession@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180111D60 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_InteractionModeRemoteSes.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InteractionModeRemoteSession@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180112508 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InteractionModeRemoteSession@@@details@wi.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_InteractionModeRemoteSession>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InteractionModeRemoteSession>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InteractionModeRemoteSession>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
