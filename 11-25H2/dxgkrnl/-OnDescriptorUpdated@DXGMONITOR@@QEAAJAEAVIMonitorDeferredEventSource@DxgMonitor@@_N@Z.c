/*
 * XREFs of ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403D545C
 * Callers:
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140268BF8 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403515CC (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z @ 0x140353840 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z.c)
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140356840 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x140032CC8 (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ??1?$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ @ 0x1400508E0 (--1-$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ @ 0x14026EBF4 (-_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ.c)
 *     ?CreateDefaultMonitorProfile@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x140272ECC (-CreateDefaultMonitorProfile@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 *     ?RetrieveIntegratedPanelNativeOverride@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x140272F94 (-RetrieveIntegratedPanelNativeOverride@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x1402740C8 (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 *     ?_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z @ 0x140351BD4 (-_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@MonitorModes@DxgMonitor@@AEAAXXZ @ 0x1403D55D4 (-_CleanupMonitorSourceModeAndFreqRanges@MonitorModes@DxgMonitor@@AEAAXXZ.c)
 *     ?ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z @ 0x1403D580C (-ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z.c)
 */

__int64 __fastcall DXGMONITOR::OnDescriptorUpdated(
        DXGMONITOR *this,
        struct DxgMonitor::IMonitorDeferredEventSource *a2)
{
  struct _ERESOURCE *v4; // rdi
  __int64 v5; // rax
  const struct DxgMonitor::IMonitorDescriptor *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rcx
  struct _ERESOURCE *v10; // [rsp+58h] [rbp+20h] BYREF

  WdLogSingleEntry1(7LL, this);
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 29);
  v5 = *((_QWORD *)this + 27);
  WdLogGlobalForLineNumber = 1089;
  v10 = v4;
  v6 = *(const struct DxgMonitor::IMonitorDescriptor **)(v5 + 160);
  if ( v4 )
    MonitorResourceLock::AcquireExclusive(v4);
  DxgMonitor::MonitorModes::_CleanupMonitorSourceModeAndFreqRanges((DxgMonitor::MonitorModes *)v4);
  if ( v6 )
  {
    v7 = (int)DxgMonitor::MonitorModes::ParseDescriptorModes((DxgMonitor::MonitorModes *)v4, v6);
    RESOURCE_LOCK<DxgMonitor::MonitorModes>::~RESOURCE_LOCK<DxgMonitor::MonitorModes>(&v10);
    if ( (int)v7 < 0 )
    {
      WdLogSingleEntry1(2LL, v7);
      WdLogGlobalForLineNumber = 1107;
      return (unsigned int)v7;
    }
    DxgMonitor::MonitorColorState::OnDescriptorUpdated(*((DxgMonitor::MonitorColorState **)this + 28), v6);
    DxgMonitor::MonitorUsageState::_EvaluateUsageState(*((DxgMonitor::MonitorUsageState **)this + 30), v6);
  }
  else if ( v4 )
  {
    ExReleaseResourceLite(v4);
    KeLeaveCriticalRegion();
  }
  LODWORD(v7) = 0;
  DXGMONITOR::_CheckPortraitFirstMonitorFromEDID(this);
  if ( (int)DxgMonitor::MonitorModes::RetrieveIntegratedPanelNativeOverride(*((struct _ERESOURCE **)this + 29)) < 0 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 48LL))(*((_QWORD *)this + 24));
  v8 = *((_QWORD *)this + 29);
  if ( !*(_DWORD *)(v8 + 168) && !*(_DWORD *)(v8 + 120) )
    DxgMonitor::MonitorModes::CreateDefaultMonitorProfile((struct _ERESOURCE *)v8);
  (**(void (__fastcall ***)(struct DxgMonitor::IMonitorDeferredEventSource *, _QWORD, __int64))a2)(
    a2,
    *((unsigned int *)this + 45),
    3LL);
  return (unsigned int)v7;
}
