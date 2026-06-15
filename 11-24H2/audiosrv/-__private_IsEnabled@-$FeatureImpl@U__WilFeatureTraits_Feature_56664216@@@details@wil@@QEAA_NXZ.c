/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAA_NXZ @ 0x1800E2450
 * Callers:
 *     ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x180059C78 (-Dispose@CKsNotificationsMonitor@@QEAAXXZ.c)
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18007FCC0 (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     ?SetRenderEndpoint@CBtAudioResourceManagerBase@@UEAAJPEAVCEndpointCharacteristics@@@Z @ 0x1800E1A10 (-SetRenderEndpoint@CBtAudioResourceManagerBase@@UEAAJPEAVCEndpointCharacteristics@@@Z.c)
 *     _lambda_23a707cc6c78406526adb642245a01c2_::operator() @ 0x1800E45D8 (_lambda_23a707cc6c78406526adb642245a01c2_--operator().c)
 *     _lambda_82b4d950fa5d9eeb82537f57bcb68a2f_::operator() @ 0x1800E4970 (_lambda_82b4d950fa5d9eeb82537f57bcb68a2f_--operator().c)
 *     ?OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z @ 0x18010AC30 (-OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18010ACD4 (-OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800CCCA0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CF148 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_56664216>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_56664216>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_56664216>::ReportUsage(a1, v5 & 1, 3u, v3);
  return v2;
}
