/*
 * XREFs of PopEsUpdateState @ 0x1404B8AA0
 * Callers:
 *     PopEsWorker @ 0x140AAAEB0 (PopEsWorker.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A294 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A324 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     PopDiagTraceEsState @ 0x1405D030C (PopDiagTraceEsState.c)
 *     PopEsSnapTelemetry @ 0x1406EC300 (PopEsSnapTelemetry.c)
 *     PopEsPublishStateV2 @ 0x140750CF8 (PopEsPublishStateV2.c)
 *     PopCurrentPowerState @ 0x140A22CB0 (PopCurrentPowerState.c)
 *     PopEsEvaluateNextStateV2 @ 0x140AC3FC4 (PopEsEvaluateNextStateV2.c)
 */

__int64 __fastcall PopEsUpdateState(char a1)
{
  char v1; // r14
  char v3; // di
  char v4; // r15
  int v5; // r12d
  int v6; // esi
  __int64 result; // rax
  int v8; // ebx
  KIRQL v9; // si
  __int64 v10; // rcx
  _OWORD v11[2]; // [rsp+20h] [rbp-20h] BYREF
  int v12; // [rsp+80h] [rbp+40h] BYREF
  __int64 v13; // [rsp+88h] [rbp+48h]

  v1 = 0;
  v12 = 0;
  v3 = 0;
  memset(v11, 0, sizeof(v11));
  v4 = 1;
  PopCurrentPowerState(v11);
  v5 = PopEsReason;
  v13 = (unsigned int)Feature_EcoModeEnergySaver__private_featureState;
  if ( (Feature_EcoModeEnergySaver__private_featureState & 0x10) == 0 )
  {
    LODWORD(v13) = Feature_EcoModeEnergySaver__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_EcoModeEnergySaver__private_descriptor, v13, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v13,
      3LL,
      &Feature_EcoModeEnergySaver__private_descriptor);
  }
  v6 = dword_140E6748C;
  result = PopEsEvaluateNextStateV2(v11, &v12);
  v8 = result;
  if ( v12 != v5 )
    v1 = 1;
  v13 = (unsigned int)Feature_EcoModeEnergySaver__private_featureState;
  if ( (Feature_EcoModeEnergySaver__private_featureState & 0x10) == 0 )
  {
    LODWORD(v13) = Feature_EcoModeEnergySaver__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_EcoModeEnergySaver__private_descriptor, v13, 3LL);
    result = wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
               v13,
               3LL,
               &Feature_EcoModeEnergySaver__private_descriptor);
  }
  if ( v8 != v6 )
  {
    if ( (result = 128LL, v3 = 1, v8 == 128) && !v6 || !v8 && v6 == 128 )
      v4 = 0;
  }
  if ( a1 || v3 || v1 )
  {
    PopEsSnapTelemetry(v11);
    v9 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
    PopEsReason = v12;
    v13 = (unsigned int)Feature_EcoModeEnergySaver__private_featureState;
    if ( (Feature_EcoModeEnergySaver__private_featureState & 0x10) == 0 )
    {
      LODWORD(v13) = Feature_EcoModeEnergySaver__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(&Feature_EcoModeEnergySaver__private_descriptor, v13, 3LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v13,
        3LL,
        &Feature_EcoModeEnergySaver__private_descriptor);
    }
    dword_140E6748C = v8;
    if ( PopCsResiliencyStats[0] && (v3 || v1) )
      ++dword_140F0A70C;
    KeReleaseSpinLock(&PopCsResiliencyStatsLock, v9);
    if ( v3 )
    {
      v13 = (unsigned int)Feature_EcoModeEnergySaver__private_featureState;
      if ( (Feature_EcoModeEnergySaver__private_featureState & 0x10) == 0 )
      {
        LODWORD(v13) = Feature_EcoModeEnergySaver__private_featureState | 1;
        wil_details_FeatureReporting_ReportUsageToService(&Feature_EcoModeEnergySaver__private_descriptor, v13, 3LL);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v13,
          3LL,
          &Feature_EcoModeEnergySaver__private_descriptor);
      }
      LOBYTE(v10) = v4;
      PopEsPublishStateV2(v10);
    }
    return PopDiagTraceEsState(&PopEsState);
  }
  return result;
}
