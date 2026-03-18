/*
 * XREFs of PopPowerAggregatorHandleActiveIntent @ 0x140A376A0
 * Callers:
 *     <none>
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x140490DC8 (SSHSupportIsPlatformAoAc.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053CAC4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053CB54 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceMonitorOnWithLidClosed @ 0x140A377B8 (PopDiagTraceMonitorOnWithLidClosed.c)
 *     PopIsInputSuppressionEngaged @ 0x140A37828 (PopIsInputSuppressionEngaged.c)
 */

__int64 __fastcall PopPowerAggregatorHandleActiveIntent(__int64 a1, __int64 a2)
{
  int v2; // r8d
  unsigned int v3; // ebx
  int v6; // r8d
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int8 v11; // [rsp+50h] [rbp+8h]

  v2 = *(_DWORD *)(a1 + 16);
  v3 = 0;
  if ( v2 )
  {
    v6 = v2 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( !v7 )
      {
LABEL_8:
        *(_DWORD *)a2 = 0;
        return v3;
      }
      if ( v7 != 2 )
        return (unsigned int)-1073700861;
LABEL_7:
      PopDiagTraceMonitorOnWithLidClosed(*(unsigned int *)(a2 + 8), 0LL);
      ZwUpdateWnfStateData((__int64)&WNF_PO_MODERN_STANDBY_EXIT_INITIATED, a2 + 16);
      goto LABEL_8;
    }
    if ( !SSHSupportIsPlatformAoAc() || !*(_BYTE *)(v9 + 41) )
    {
      if ( !(unsigned __int8)PopIsInputSuppressionEngaged(*(unsigned int *)(v8 + 8)) )
        goto LABEL_7;
      if ( (Feature_AggressiveInputSuppression__private_featureState & 0x10) == 0 )
      {
        v11 = Feature_AggressiveInputSuppression__private_featureState | 1;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_AggressiveInputSuppression__private_descriptor,
          Feature_AggressiveInputSuppression__private_featureState | 1,
          3);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v11,
          3,
          (__int64)&Feature_AggressiveInputSuppression__private_descriptor);
      }
      LOBYTE(v10) = 1;
      PopDiagTraceMonitorOnWithLidClosed(*(unsigned int *)(a2 + 8), v10);
    }
    return (unsigned int)-1073741823;
  }
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 32);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 48);
  return v3;
}
