/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_54865932@@@details@wil@@QEAA_NXZ @ 0x1803C1C1C
 * Callers:
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180245020 (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     ?SuspendAppInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18024761C (-SuspendAppInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ @ 0x1803B74D0 (-AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ.c)
 *     ?CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z @ 0x1803B7C0C (-CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z.c)
 *     ?DoKeysExistAndCanAccess@SearchSettingsHelper@SearchSettings@@SA_NXZ @ 0x1803B7FC0 (-DoKeysExistAndCanAccess@SearchSettingsHelper@SearchSettings@@SA_NXZ.c)
 *     ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@9@3V?$unique_ptr@VISearchAppActivator@@U?$default_delete@VISearchAppActivator@@@wistd@@@9@@Z @ 0x1803BF520 (-RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBUViewC.c)
 *     ?TryInstallDefaultWebSearchProviderWhenSearchHidden@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803C0FAC (-TryInstallDefaultWebSearchProviderWhenSearchHidden@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_54865932@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803B9058 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_54865932@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_54865932@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803BE9C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_54865932@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_54865932>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_54865932>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_54865932>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
