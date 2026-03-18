/*
 * XREFs of ?_QueryMipiDsiCaps@MonitorMipiDsiState@DxgMonitor@@AEBAJKPEAXPEA_K@Z @ 0x1402780AC
 * Callers:
 *     ?OnIoctl@MonitorMipiDsiState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x140277940 (-OnIoctl@MonitorMipiDsiState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400670D8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14006735C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall DxgMonitor::MonitorMipiDsiState::_QueryMipiDsiCaps(
        DxgMonitor::MonitorMipiDsiState *this,
        unsigned int a2,
        _DWORD *a3,
        unsigned __int64 *a4)
{
  __int64 v4; // rdi
  __int64 result; // rax
  __int128 v9; // xmm0
  __int64 v10; // [rsp+48h] [rbp+20h]

  v4 = a2;
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 90;
  }
  *a4 = 0LL;
  v10 = (unsigned int)Feature_MipiDsi2__private_featureState;
  if ( (Feature_MipiDsi2__private_featureState & 0x10) == 0 )
  {
    LODWORD(v10) = Feature_MipiDsi2__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_MipiDsi2__private_descriptor, v10, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v10, 3, (__int64)&Feature_MipiDsi2__private_descriptor);
  }
  if ( (unsigned __int8)ExIsManufacturingModeEnabled() )
  {
    if ( (unsigned int)v4 >= 0x14 )
    {
      v9 = *(_OWORD *)((char *)this + 8);
      *a4 = 20LL;
      *(_OWORD *)a3 = v9;
      a3[4] = *((_DWORD *)this + 6);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry2(2LL, 20LL, v4);
      result = 3221225507LL;
      WdLogGlobalForLineNumber = 108;
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 101;
  }
  return result;
}
