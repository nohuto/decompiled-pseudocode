/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAA_NXZ @ 0x1800DD974
 * Callers:
 *     ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x180066318 (-Dispose@CKsNotificationsMonitor@@QEAAXXZ.c)
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18008BB8C (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     ?SetRenderEndpoint@CBtAudioResourceManagerBase@@UEAAJPEAVCEndpointCharacteristics@@@Z @ 0x1800DD020 (-SetRenderEndpoint@CBtAudioResourceManagerBase@@UEAAJPEAVCEndpointCharacteristics@@@Z.c)
 *     _lambda_23a707cc6c78406526adb642245a01c2_::operator() @ 0x1800DFBE8 (_lambda_23a707cc6c78406526adb642245a01c2_--operator().c)
 *     _lambda_82b4d950fa5d9eeb82537f57bcb68a2f_::operator() @ 0x1800DFF80 (_lambda_82b4d950fa5d9eeb82537f57bcb68a2f_--operator().c)
 *     ?OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z @ 0x180104AE0 (-OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x180104B84 (-OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800D5CF8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DAE20 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_56664216>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_56664216>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_56664216>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
