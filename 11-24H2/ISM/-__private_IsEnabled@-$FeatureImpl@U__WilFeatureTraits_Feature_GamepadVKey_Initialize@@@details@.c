/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKey_Initialize@@@details@wil@@QEAA_NXZ @ 0x18017D974
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18017AB58 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKey_Initialize@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18017A1FC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKey_Initialize@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKey_Initialize@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18017B870 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKey_Initialize@@@details@wil@@QEA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadVKey_Initialize>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadVKey_Initialize>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadVKey_Initialize>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
