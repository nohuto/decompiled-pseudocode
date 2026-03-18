/*
 * XREFs of ?OnInitialized@MonitorMipiDsiState@DxgMonitor@@QEAAJXZ @ 0x140401698
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140356840 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x14002F83C (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x140034DA0 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400670D8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14006735C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MonitorMipiDsiState::OnInitialized(DxgMonitor::MonitorMipiDsiState *this)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // [rsp+38h] [rbp+10h]
  char v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = (unsigned int)Feature_MipiDsi2__private_featureState;
  if ( (Feature_MipiDsi2__private_featureState & 0x10) == 0 )
  {
    LODWORD(v6) = Feature_MipiDsi2__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_MipiDsi2__private_descriptor, v6, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, 3, (__int64)&Feature_MipiDsi2__private_descriptor);
  }
  if ( !(unsigned __int8)ExIsManufacturingModeEnabled() )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 29;
    return 3221225659LL;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3) < 0xC002 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 36;
    return 3221225659LL;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this) )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 43;
    return 3221225659LL;
  }
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v7, (DxgMonitor::MonitorMipiDsiState *)((char *)this + 32));
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
  v5 = (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 72LL))(v4, (char *)this + 8);
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v7);
  if ( (int)v5 < 0 )
  {
    WdLogSingleEntry1(3LL, v5);
    WdLogGlobalForLineNumber = 54;
  }
  return (unsigned int)v5;
}
