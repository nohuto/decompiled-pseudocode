/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@wil@@QEAA_NXZ @ 0x1801325D8
 * Callers:
 *     ?OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z @ 0x180024180 (-OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z.c)
 *     ?OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ @ 0x180087DA0 (-OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ.c)
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180089A00 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnTargetWithFocusChanged@ControllerProcessor@@UEAAJPEAUIInputTarget@@0@Z @ 0x180089C60 (-OnTargetWithFocusChanged@ControllerProcessor@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?CanNavigationModeBeEnabled@ControllerNavigationManager@@SAHXZ @ 0x18017480C (-CanNavigationModeBeEnabled@ControllerNavigationManager@@SAHXZ.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180179368 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?NavigationEnableGlobally@ControllerProcessor@@QEAAJXZ @ 0x180179BAC (-NavigationEnableGlobally@ControllerProcessor@@QEAAJXZ.c)
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x18017A0BC (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 *     ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x18017B084 (-TurnNavigationOn@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x18017B210 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 *     ?UpdateFocusedProcessId@ControllerProcessor@@AEAAXPEAUIInputTarget@@@Z @ 0x18017B368 (-UpdateFocusedProcessId@ControllerProcessor@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180130B5C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationG.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180131D58 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
