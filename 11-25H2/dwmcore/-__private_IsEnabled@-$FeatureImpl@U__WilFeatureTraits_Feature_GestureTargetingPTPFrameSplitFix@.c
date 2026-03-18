/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GestureTargetingPTPFrameSplitFix@@@details@wil@@QEAA_NXZ @ 0x18024DF20
 * Callers:
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJPEAVCManipulationFrame@@AEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x18024DAE4 (-GetPointerTarget@CGestureTargetingManager@@SAJPEAVCManipulationFrame@@AEBUtagPOINTER_INFO@@PEBU.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GestureTargetingPTPFrameSplitFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18024DF5C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GestureTargetingPTPFrame.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GestureTargetingPTPFrameSplitFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18024E160 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GestureTargetingPTPFrameSplitFix@@@detail.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_GestureTargetingPTPFrameSplitFix>::__private_IsEnabled(
        __int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GestureTargetingPTPFrameSplitFix>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  LOBYTE(v3) = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GestureTargetingPTPFrameSplitFix>::ReportUsage(a1, v3);
  return v2;
}
