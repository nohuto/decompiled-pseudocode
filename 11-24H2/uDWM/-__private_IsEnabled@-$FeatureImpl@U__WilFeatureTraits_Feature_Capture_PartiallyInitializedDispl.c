/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_PartiallyInitializedDisplayEntry@@@details@wil@@QEAA_NXZ @ 0x1800D01BC
 * Callers:
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800CE0F8 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPr.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_PartiallyInitializedDisplayEntry@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800CBB50 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_PartiallyInitial.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_PartiallyInitializedDisplayEntry@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CC348 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_PartiallyInitializedDisplayEntry@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_PartiallyInitializedDisplayEntry>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_PartiallyInitializedDisplayEntry>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_PartiallyInitializedDisplayEntry>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
