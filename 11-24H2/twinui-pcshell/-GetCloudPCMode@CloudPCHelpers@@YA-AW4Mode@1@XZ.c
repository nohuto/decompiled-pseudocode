/*
 * XREFs of ?GetCloudPCMode@CloudPCHelpers@@YA?AW4Mode@1@XZ @ 0x18023DC68
 * Callers:
 *     ?RegisterHotkeys@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1801E3B30 (-RegisterHotkeys@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?IsCloudPCComponentEnabled@@YA_NXZ @ 0x180248E30 (-IsCloudPCComponentEnabled@@YA_NXZ.c)
 *     ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x18025BF10 (-SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ??0RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802CA8E0 (--0RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetBootToCloudModeType@CloudPCHelpers@@YA?AW4BootModeType@1@XZ @ 0x1806403AC (-GetBootToCloudModeType@CloudPCHelpers@@YA-AW4BootModeType@1@XZ.c)
 *     ??$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAUValueSetReader@Details@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1806446D4 (--$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAU.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ @ 0x18035233C (-IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ @ 0x18035FE04 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ.c)
 */

__int64 CloudPCHelpers::GetCloudPCMode()
{
  CloudPCHelpers *v0; // rcx
  int PolicyInt; // eax
  unsigned int v3; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_EPDA>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_EPDA>::GetImpl'::`2'::impl)
    && CloudPCHelpers::IsPhysicalDeviceAccessConfigured(v0) )
  {
    return 0LL;
  }
  v3 = 0;
  PolicyInt = PolicyManager_GetPolicyInt(L"CloudDesktop", L"BootToCloudMode", &v3);
  if ( PolicyInt < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB0,
      (int)"OnecoreUAP\\Internal\\Shell\\Inc\\private\\cloudpccommon.h",
      (const char *)(unsigned int)PolicyInt);
  return v3;
}
