/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HangOnCoreKeyboardHandler@@@details@wil@@QEAA_NXZ @ 0x18048320C
 * Callers:
 *     ?OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@45678@@Z @ 0x180254EE0 (-OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardMa.c)
 *     ??0TabTipAdapter@KeyboardHosting@@QEAA@PEAUIInputExperienceHost@Text@Shell@Internal@Windows@@PEAUIShellKeyboardHostingPolicy@3456@PEAUIDesktopKeyboardHostingPolicy@1456@PEAUIInputInjectionValidityHelper@1456@@Z @ 0x18029B1EC (--0TabTipAdapter@KeyboardHosting@@QEAA@PEAUIInputExperienceHost@Text@Shell@Internal@Windows@@PEA.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HangOnCoreKeyboardHandler@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18047C884 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HangOnCoreKeyboardHandle.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HangOnCoreKeyboardHandler@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180480A64 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HangOnCoreKeyboardHandler@@@details@wil@@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangOnCoreKeyboardHandler>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangOnCoreKeyboardHandler>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangOnCoreKeyboardHandler>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
