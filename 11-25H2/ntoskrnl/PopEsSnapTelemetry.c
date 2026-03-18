/*
 * XREFs of PopEsSnapTelemetry @ 0x1406EC300
 * Callers:
 *     PopEsUpdateState @ 0x1404B8AA0 (PopEsUpdateState.c)
 *     PopEsEnterSleepShutdown @ 0x140AB3EFC (PopEsEnterSleepShutdown.c)
 * Callees:
 *     Feature_EnergySaver_GroupPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1404F243C (Feature_EnergySaver_GroupPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A294 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A324 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     PopTraceEsState @ 0x1405D1734 (PopTraceEsState.c)
 */

char __fastcall PopEsSnapTelemetry(__int64 a1)
{
  int v1; // esi
  __int64 v3; // r15
  int v4; // ebp
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rcx
  char result; // al
  int v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+30h] [rbp-28h]
  unsigned __int8 v13; // [rsp+60h] [rbp+8h]

  v1 = 0;
  v3 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( *(_BYTE *)(a1 + 1) )
    v1 = *(_DWORD *)(a1 + 12);
  if ( PopEsLastStateChangeTimeStamp )
  {
    if ( (Feature_EcoModeEnergySaver__private_featureState & 0x10) == 0 )
    {
      v13 = Feature_EcoModeEnergySaver__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_EcoModeEnergySaver__private_descriptor,
        Feature_EcoModeEnergySaver__private_featureState | 1,
        3);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v13,
        3,
        (__int64)&Feature_EcoModeEnergySaver__private_descriptor);
    }
    v4 = dword_140E6748C;
    v5 = v3 - PopEsLastStateChangeTimeStamp;
    v6 = v1 - PopEsLastBatteryCharge;
    if ( (unsigned int)Feature_EnergySaver_GroupPolicy__private_IsEnabledDeviceUsageNoInline() )
    {
      v9 = (unsigned int)PopEsModeGp;
      if ( PopEsReason != 32 )
        v9 = (unsigned int)PopEsMode;
      PopTraceEsState(v9, v5, v6, v8, v9, v11, v12, v4);
    }
    else
    {
      PopTraceEsState(v7, v5, v6, v8, PopEsMode, v11, v12, v4);
    }
  }
  PopEsAcOnline = *(_BYTE *)a1;
  PopEsLastBatteryThreshold = dword_140F0B750;
  result = byte_140F0B755;
  PopEsLastBatteryCharge = v1;
  PopEsLastUserAwaySetting = byte_140F0B755;
  PopEsLastStateChangeTimeStamp = v3;
  return result;
}
