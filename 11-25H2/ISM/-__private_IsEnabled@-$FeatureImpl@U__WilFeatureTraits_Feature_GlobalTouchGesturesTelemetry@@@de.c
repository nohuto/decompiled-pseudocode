/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GlobalTouchGesturesTelemetry@@@details@wil@@QEAA_NXZ @ 0x180158E5C
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180088DB0 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GlobalTouchGesturesTelemetry@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180157588 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GlobalTouchGesturesTelem.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GlobalTouchGesturesTelemetry@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18015841C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GlobalTouchGesturesTelemetry@@@details@wi.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_GlobalTouchGesturesTelemetry>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GlobalTouchGesturesTelemetry>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GlobalTouchGesturesTelemetry>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
