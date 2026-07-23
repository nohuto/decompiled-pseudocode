/*
 * XREFs of Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportUsageFallback @ 0x1405BC9EC
 * Callers:
 *     Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportDeviceUsage @ 0x1403A4B08 (Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportDeviceUsage.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void __fastcall Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportUsageFallback(char a1, int a2)
{
  unsigned __int8 v3; // [rsp+30h] [rbp+8h]

  v3 = a1 | 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_Servicing_IdealProcessorEventOutsideLocks__private_descriptor,
    a1 | 1,
    a2);
  if ( (unsigned int)(a2 - 3) <= 1 )
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v3,
      a2,
      (__int64)&Feature_Servicing_IdealProcessorEventOutsideLocks__private_descriptor);
}
