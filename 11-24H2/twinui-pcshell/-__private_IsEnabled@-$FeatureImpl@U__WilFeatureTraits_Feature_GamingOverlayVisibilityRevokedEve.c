/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayVisibilityRevokedEventHandling@@@details@wil@@QEAA_NXZ @ 0x18035FF00
 * Callers:
 *     ?OverrideNavigationLevelForView@UwpWindowEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x1801D8250 (-OverrideNavigationLevelForView@UwpWindowEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInter.c)
 *     ?OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180356A04 (-OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?OnWindowChangedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180356DF0 (-OnWindowChangedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInter.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayVisibilityRevokedEventHandling@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18034E308 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayVisibilityR.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayVisibilityRevokedEventHandling@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803593C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayVisibilityRevokedEventHandli.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayVisibilityRevokedEventHandling>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayVisibilityRevokedEventHandling>::GetCachedFeatureEnabledState(
    a1,
    &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayVisibilityRevokedEventHandling>::ReportUsage(
    (int *)a1,
    v4 & 1);
  return v2;
}
