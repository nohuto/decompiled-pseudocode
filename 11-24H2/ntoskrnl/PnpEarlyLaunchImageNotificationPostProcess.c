/*
 * XREFs of PnpEarlyLaunchImageNotificationPostProcess @ 0x140C24A60
 * Callers:
 *     <none>
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x1402F0484 (PnpDiagnosticTraceObject.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 */

void __fastcall PnpEarlyLaunchImageNotificationPostProcess(__int64 a1, __int64 a2, int *a3, int *a4, __int64 a5)
{
  __int64 v7; // rdx
  unsigned __int8 v8; // [rsp+50h] [rbp+28h]

  PnpDiagnosticTraceObject(&KMPnPEvt_EarlyLaunch_LoadNotification_Stop, (unsigned __int16 *)(a5 + 8));
  v7 = *a3;
  if ( *((_DWORD *)PnpClassificationRank + v7) > *((_DWORD *)PnpClassificationRank + *a4) )
    *a4 = v7;
  RtlFreeAnsiString((PUNICODE_STRING)(a3 + 2));
  RtlFreeAnsiString((PUNICODE_STRING)(a3 + 14));
  RtlFreeAnsiString((PUNICODE_STRING)(a3 + 10));
  if ( (Feature_ElamNotificationFreeRegistryPath__private_featureState & 0x10) == 0 )
  {
    v8 = Feature_ElamNotificationFreeRegistryPath__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_ElamNotificationFreeRegistryPath__private_descriptor,
      Feature_ElamNotificationFreeRegistryPath__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v8,
      3,
      (__int64)&Feature_ElamNotificationFreeRegistryPath__private_descriptor);
  }
  RtlFreeAnsiString((PUNICODE_STRING)(a3 + 6));
}
