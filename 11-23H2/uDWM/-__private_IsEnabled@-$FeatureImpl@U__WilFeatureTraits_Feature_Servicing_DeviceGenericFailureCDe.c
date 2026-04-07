/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DeviceGenericFailureCDesktopManagerException@@@details@wil@@QEAA_NXZ @ 0x18005F0A0
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180028E80 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DeviceGenericFailureCDesktopManagerException@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005EE38 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DeviceGenericF.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DeviceGenericFailureCDesktopManagerException@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005F01C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DeviceGenericFailureCDesktopMan.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DeviceGenericFailureCDesktopManagerException>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DeviceGenericFailureCDesktopManagerException>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DeviceGenericFailureCDesktopManagerException>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
