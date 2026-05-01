/*
 * XREFs of Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledPreCheck @ 0x180096EB4
 * Callers:
 *     SdbpCheckAttribute @ 0x1800971E0 (SdbpCheckAttribute.c)
 *     SdbpCheckFromStringVersion @ 0x180097444 (SdbpCheckFromStringVersion.c)
 *     SdbpCheckUptoStringVersion @ 0x1800975B4 (SdbpCheckUptoStringVersion.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x180099364 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckBackupApplicationAttributes @ 0x180099670 (SdbpCheckBackupApplicationAttributes.c)
 *     SdbpCheckPackageAttributes @ 0x18009ADE0 (SdbpCheckPackageAttributes.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x180078FE8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x180079348 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledPreCheck()
{
  unsigned __int8 v1; // [rsp+30h] [rbp+8h]

  if ( (Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState & 0x10) == 0 )
  {
    v1 = Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_Servicing_MercuryNewSdbTagsForBackup__private_descriptor,
      Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v1,
      3,
      (__int64)&Feature_Servicing_MercuryNewSdbTagsForBackup__private_descriptor);
  }
  return 1LL;
}
