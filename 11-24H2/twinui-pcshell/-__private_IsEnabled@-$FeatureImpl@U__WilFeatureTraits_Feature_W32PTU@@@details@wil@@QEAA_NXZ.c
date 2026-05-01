/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W32PTU@@@details@wil@@QEAA_NXZ @ 0x1805EC6F8
 * Callers:
 *     ?PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1805E7AB0 (-PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITE.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_W32PTU@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805E5F34 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_W32PTU@@@details@wil@@AE.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W32PTU@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805E8034 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W32PTU@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_W32PTU>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W32PTU>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W32PTU>::ReportUsage((int *)a1, v4 & 1);
  return v2;
}
