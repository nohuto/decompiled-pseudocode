/*
 * XREFs of SshpAlpcProcessMessage @ 0x1407586A8
 * Callers:
 *     SshpAlpcProcessAlpcMessage @ 0x14075844C (SshpAlpcProcessAlpcMessage.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A294 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A324 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14069C300 (ZwAlpcSendWaitReceivePort.c)
 *     SshpSessionManagerOpenControlTrace @ 0x140757A40 (SshpSessionManagerOpenControlTrace.c)
 */

__int64 __fastcall SshpAlpcProcessMessage(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  int v4; // ecx
  unsigned __int8 v6; // [rsp+50h] [rbp+8h]
  unsigned __int8 v7; // [rsp+50h] [rbp+8h]

  v3 = 0;
  v4 = *(_DWORD *)(a1 + 40);
  if ( !v4 )
  {
    if ( (Feature_SleepStudySlimControlEtl__private_featureState & 0x10) == 0 )
    {
      v7 = Feature_SleepStudySlimControlEtl__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_SleepStudySlimControlEtl__private_descriptor,
        Feature_SleepStudySlimControlEtl__private_featureState | 1,
        3);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v7,
        3,
        (__int64)&Feature_SleepStudySlimControlEtl__private_descriptor);
    }
    return (unsigned int)-1073741637;
  }
  if ( v4 != 1 )
    return (unsigned int)-1073741637;
  if ( (Feature_SleepStudySlimControlEtl__private_featureState & 0x10) == 0 )
  {
    v6 = Feature_SleepStudySlimControlEtl__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_SleepStudySlimControlEtl__private_descriptor,
      Feature_SleepStudySlimControlEtl__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v6,
      3,
      (__int64)&Feature_SleepStudySlimControlEtl__private_descriptor);
  }
  *(_DWORD *)(a1 + 48) = SshpSessionManagerOpenControlTrace(*(_QWORD *)(a1 + 48), a2);
  ZwAlpcSendWaitReceivePort((__int64)qword_140F05790, 0x10000LL);
  return v3;
}
