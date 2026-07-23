/*
 * XREFs of SdbpCheckPackageAttributes @ 0x1408047C0
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x1406970F8 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbGetTagFromTagID @ 0x140947B70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpCheckPackageAttributes(int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  unsigned __int8 v11; // [rsp+20h] [rbp-18h]

  if ( ((unsigned __int16)SdbGetTagFromTagID(a3, a5, a3, a4) == 28758
     || (unsigned __int16)SdbGetTagFromTagID(a3, a5, v8, v9) == 28761)
    && (Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState & 0x10) == 0 )
  {
    v11 = Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_Servicing_MercuryNewSdbTagsForBackup__private_descriptor,
      Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v11,
      3,
      (__int64)&Feature_Servicing_MercuryNewSdbTagsForBackup__private_descriptor);
  }
  result = SdbpCheckApplicationTypeAttributes(a1, a3, a5, *(_QWORD **)(a6 + 88));
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
