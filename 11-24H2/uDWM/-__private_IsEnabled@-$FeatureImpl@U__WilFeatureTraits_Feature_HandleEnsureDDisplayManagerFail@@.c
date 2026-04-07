/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail@@@details@wil@@QEAA_NXZ @ 0x1800BB8E8
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18008D05C (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18008E5C8 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800B9708 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HandleEnsureDDisplayMana.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BB364 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail@@@details.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
