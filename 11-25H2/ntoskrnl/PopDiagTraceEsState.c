/*
 * XREFs of PopDiagTraceEsState @ 0x1405D030C
 * Callers:
 *     PopEsUpdateState @ 0x1404B8AA0 (PopEsUpdateState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A294 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A324 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceEsState(__int64 a1)
{
  unsigned __int8 v2; // [rsp+40h] [rbp-48h]
  int v3; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-38h] BYREF
  int *v5; // [rsp+60h] [rbp-28h]
  int v6; // [rsp+68h] [rbp-20h]
  int v7; // [rsp+6Ch] [rbp-1Ch]

  v3 = PopEsReason;
  if ( (Feature_EcoModeEnergySaver__private_featureState & 0x10) == 0 )
  {
    v2 = Feature_EcoModeEnergySaver__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_EcoModeEnergySaver__private_descriptor,
      Feature_EcoModeEnergySaver__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v2,
      3,
      (__int64)&Feature_EcoModeEnergySaver__private_descriptor);
  }
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ENERGY_SAVER_STATE_V2) )
    {
      UserData.Reserved = 0;
      v7 = 0;
      UserData.Ptr = a1 + 4;
      UserData.Size = 4;
      v5 = &v3;
      v6 = 4;
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_ENERGY_SAVER_STATE_V2, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
