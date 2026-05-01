/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2@@@details@wil@@QEAA_NXZ @ 0x180478A5C
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x1801269E4 (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataPro.c)
 *     ?GetAppIdFromWindow@TouchKeyboardExperienceManager@@SA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUHWND__@@@Z @ 0x180251FA8 (-GetAppIdFromWindow@TouchKeyboardExperienceManager@@SA-AV-$unique_any_t@V-$unique_storage@U-$res.c)
 *     ?HandleForegroundChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_KPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180255970 (-HandleForegroundChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_KPEAW4ShellRequestType@Text@.c)
 *     ?NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJIW4KeyboardVisibilityChangeReason@2@_N1@Z @ 0x18047D48C (-NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJIW4KeyboardVisibilityChangeRea.c)
 *     ?OnInputPaneTryHideRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryHideRequestedEventArgs@45678@@Z @ 0x18047DEB0 (-OnInputPaneTryHideRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryShowRequestedEventArgs@45678@@Z @ 0x18047DF90 (-OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?OnPrimaryViewSystemLevelShowRequested@TabTipAdapter@KeyboardHosting@@QEAAJPEA_NAEBUhstring@winrt@@V?$optional@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@@Z @ 0x18047EB04 (-OnPrimaryViewSystemLevelShowRequested@TabTipAdapter@KeyboardHosting@@QEAAJPEA_NAEBUhstring@winr.c)
 *     ?_PushBool@CNotificationData@@CAXPEA_K_N@Z @ 0x1806844C4 (-_PushBool@CNotificationData@@CAXPEA_K_N@Z.c)
 *     ?s_PackKeyboardSetVisibleNotification@CNotificationData@@SAXPEAXW4SetVisibleSource@IhmNotification@@K_N2@Z @ 0x180684500 (-s_PackKeyboardSetVisibleNotification@CNotificationData@@SAXPEAXW4SetVisibleSource@IhmNotificati.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180471178 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediatelyV.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180473FD0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2@@@details@wil@@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
