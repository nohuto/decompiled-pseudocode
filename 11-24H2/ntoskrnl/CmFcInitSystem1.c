/*
 * XREFs of CmFcInitSystem1 @ 0x140C4C340
 * Callers:
 *     CmInitSystem0 @ 0x140C4A528 (CmInitSystem0.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x1404606D0 (KeRegisterBugCheckReasonCallback.c)
 *     RtlArmFeatureUsageProviderFlushNotification @ 0x1404F2A10 (RtlArmFeatureUsageProviderFlushNotification.c)
 *     Feature_CmFcCallback__private_IsEnabledDeviceUsageNoInline @ 0x140666738 (Feature_CmFcCallback__private_IsEnabledDeviceUsageNoInline.c)
 *     CmFcDebugUpdateSystemInfo @ 0x140667398 (CmFcDebugUpdateSystemInfo.c)
 *     wil_details_RegisterFeatureStagingChangeNotification @ 0x1407D666C (wil_details_RegisterFeatureStagingChangeNotification.c)
 *     wil_details_RegisterFeatureUsageProvider @ 0x1407D66A0 (wil_details_RegisterFeatureUsageProvider.c)
 *     wil_details_ShouldRegisterFeatureStagingChangeNotification @ 0x1407D6714 (wil_details_ShouldRegisterFeatureStagingChangeNotification.c)
 */

char CmFcInitSystem1()
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx

  if ( (unsigned int)wil_details_ShouldRegisterFeatureStagingChangeNotification() )
    wil_details_RegisterFeatureStagingChangeNotification();
  if ( !(unsigned int)wil_details_RegisterFeatureUsageProvider() && g_wil_details_featureUsageCached )
    RtlArmFeatureUsageProviderFlushNotification(g_wil_details_featureUsageProvider, 1LL);
  IsEnabledDeviceUsageNoInline = Feature_CmFcCallback__private_IsEnabledDeviceUsageNoInline();
  if ( IsEnabledDeviceUsageNoInline )
  {
    CmFcDebugUpdateSystemInfo(v2, v1);
    stru_140E62520.State = 0;
    LOBYTE(IsEnabledDeviceUsageNoInline) = KeRegisterBugCheckReasonCallback(
                                             &stru_140E62520,
                                             (PKBUGCHECK_REASON_CALLBACK_ROUTINE)CmFcpSecondaryMultiPartDumpDataCallback,
                                             KbCallbackSecondaryMultiPartDumpData,
                                             aCmfc);
  }
  return IsEnabledDeviceUsageNoInline;
}
