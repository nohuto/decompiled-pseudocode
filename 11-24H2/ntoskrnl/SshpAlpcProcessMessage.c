/*
 * XREFs of SshpAlpcProcessMessage @ 0x140768288
 * Callers:
 *     SshpAlpcProcessAlpcMessage @ 0x14076802C (SshpAlpcProcessAlpcMessage.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1406A8570 (ZwAlpcSendWaitReceivePort.c)
 *     SshpSessionManagerOpenControlTrace @ 0x140766E60 (SshpSessionManagerOpenControlTrace.c)
 */

__int64 __fastcall SshpAlpcProcessMessage(PPORT_MESSAGE SendMessageA, __int64 a2)
{
  unsigned int v3; // ebx
  unsigned int Length; // ecx
  unsigned __int8 v6; // [rsp+50h] [rbp+8h]
  unsigned __int8 v7; // [rsp+50h] [rbp+8h]

  v3 = 0;
  Length = SendMessageA[1].u1.Length;
  if ( !Length )
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
  if ( Length != 1 )
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
  LODWORD(SendMessageA[1].DoNotUseThisField) = SshpSessionManagerOpenControlTrace(
                                                 (__int64)SendMessageA[1].ClientId.UniqueProcess,
                                                 a2);
  ZwAlpcSendWaitReceivePort(PortHandle, 0x10000u, SendMessageA, 0LL, 0LL, 0LL, 0LL, 0LL);
  return v3;
}
