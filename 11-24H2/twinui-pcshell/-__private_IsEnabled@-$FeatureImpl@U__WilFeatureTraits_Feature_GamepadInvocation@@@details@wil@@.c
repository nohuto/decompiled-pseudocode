/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180478964
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutomaticGamepadInvocation@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18047154C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutomaticGamepadInvocat.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180470E00 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@deta.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180473E2C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@QEAAX_NW.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadInvocation>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadInvocation>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadInvocation>::ReportUsage((int *)a1, v5 & 1, 0, v3);
  return v2;
}
