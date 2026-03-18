/*
 * XREFs of Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage @ 0x1404FAA10
 * Callers:
 *     PopBootBatteryStatusWorker @ 0x140A6FF70 (PopBootBatteryStatusWorker.c)
 *     SshSessionManagerTracePostSleepNotification @ 0x140A70024 (SshSessionManagerTracePostSleepNotification.c)
 *     SshpSessionManagerSendControlEvent @ 0x140A70190 (SshpSessionManagerSendControlEvent.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053CAC4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053CB54 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_SleepStudySlimControlEtl__private_featureState;
  if ( (Feature_SleepStudySlimControlEtl__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_SleepStudySlimControlEtl__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      &Feature_SleepStudySlimControlEtl__private_descriptor,
      v1,
      3LL,
      1LL);
    return wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
             v1,
             3LL,
             &Feature_SleepStudySlimControlEtl__private_descriptor);
  }
  return result;
}
