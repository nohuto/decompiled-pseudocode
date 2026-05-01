/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_58936295@@@details@wil@@QEAA_NXZ @ 0x18069A550
 * Callers:
 *     ?CreateShowShellViewOptions@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AUShowShellViewOptions@4UI@WindowsUdk@7@W4ShellView@49WindowsUdk@7@_KUPoint@Foundation@67@AEBUGestureAnimationData@Input@9WindowsUdk@7@@Z @ 0x18069A18C (-CreateShowShellViewOptions@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@W.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_58936295@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18069A28C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_58936295@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_58936295@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18069A4C8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_58936295@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_58936295>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_58936295>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_58936295>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
