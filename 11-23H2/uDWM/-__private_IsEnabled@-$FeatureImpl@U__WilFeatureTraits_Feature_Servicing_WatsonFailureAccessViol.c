/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WatsonFailureAccessViolationuDWM@@@details@wil@@QEAA_NXZ @ 0x180065734
 * Callers:
 *     ?OnHostWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180065C70 (-OnHostWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?Initialize@CapturedWindowSWRVisual@@AEAAJPEAUHWND__@@PEAUISecondaryWindowRepresentationChangedListener@@@Z @ 0x1800D0440 (-Initialize@CapturedWindowSWRVisual@@AEAAJPEAUHWND__@@PEAUISecondaryWindowRepresentationChangedL.c)
 *     ?UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800D3010 (-UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D32E0 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D54E0 (-_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@AEBU.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WatsonFailureAccessViolationuDWM@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180060D74 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WatsonFailureA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WatsonFailureAccessViolationuDWM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180064D90 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WatsonFailureAccessViolationuDW.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WatsonFailureAccessViolationuDWM>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WatsonFailureAccessViolationuDWM>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WatsonFailureAccessViolationuDWM>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
