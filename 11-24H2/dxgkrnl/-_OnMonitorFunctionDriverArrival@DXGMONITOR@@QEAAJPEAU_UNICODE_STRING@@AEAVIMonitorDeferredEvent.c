/*
 * XREFs of ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140289EA4
 * Callers:
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1402740A0 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140055340 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140058224 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x140189F18 (-OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 *     DxgkNotifyMonitorChange @ 0x14018AC20 (DxgkNotifyMonitorChange.c)
 *     ??$WriteData@K@MonitorDataStore@DxgMonitor@@AEAAXPEAXPEBGK@Z @ 0x14027E040 (--$WriteData@K@MonitorDataStore@DxgMonitor@@AEAAXPEAXPEBGK@Z.c)
 *     ?RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJPEAX1@Z@Z @ 0x14028A158 (-RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJP.c)
 *     ?_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z @ 0x14028A4AC (-_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z.c)
 *     ?OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z @ 0x14028A57C (-OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z.c)
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028A668 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x14028ABC0 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028ACA0 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 *     ?IsOemPanelDriverPresent@MonitorPnpState@DxgMonitor@@QEBA_NXZ @ 0x14028B8F0 (-IsOemPanelDriverPresent@MonitorPnpState@DxgMonitor@@QEBA_NXZ.c)
 *     ?RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x14028BA08 (-RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403CD4E8 (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 *     ??$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z @ 0x1403D2404 (--$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z.c)
 */

__int64 __fastcall DXGMONITOR::_OnMonitorFunctionDriverArrival(
        DXGMONITOR *this,
        PCUNICODE_STRING SourceString,
        struct DxgMonitor::IMonitorDeferredEventSource *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  DxgMonitor::MonitorDescriptorState *v7; // rcx
  bool v8; // r8
  int (*v9)(void *, void *); // r8
  bool IsOemPanelDriverPresent; // al
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v11; // r8
  char v12; // cl
  __int64 v13; // rax
  int v14; // r15d
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdi
  int (__fastcall *v18)(__int64, _QWORD, void **); // rbx
  __int64 v19; // rcx
  char v20; // al
  void *v22; // [rsp+60h] [rbp+30h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v23; // [rsp+78h] [rbp+48h] BYREF

  v23 = a4;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, SourceString, a3, a4) + 24) = this;
  WdLogGlobalForLineNumber = 1372;
  if ( (*((_BYTE *)this + 176) & 1) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1381;
  }
  if ( !*((_QWORD *)this + 25) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1382;
  }
  if ( *((_DWORD *)this + 70) != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1383;
  }
  v7 = (DxgMonitor::MonitorDescriptorState *)*((_QWORD *)this + 27);
  LOBYTE(v22) = 0;
  DxgMonitor::MonitorDescriptorState::OnDeviceNodeReady(v7, (bool *)&v22);
  if ( (_BYTE)v22 )
    DXGMONITOR::OnDescriptorUpdated(this, a3, v8);
  DxgMonitor::MonitorModes::RetrieveMonitorFrequencyRangeFromRegistry(*((PERESOURCE *)this + 29));
  DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(this);
  DxgMonitor::MonitorPnpState::RegisterPnPTargetDeviceNotification(
    *((DxgMonitor::MonitorPnpState **)this + 25),
    SourceString,
    v9);
  IsOemPanelDriverPresent = DxgMonitor::MonitorPnpState::IsOemPanelDriverPresent(*((DxgMonitor::MonitorPnpState **)this
                                                                                 + 25));
  v11 = v23;
  v12 = (16 * IsOemPanelDriverPresent) | *((_BYTE *)this + 177) & 0xEF;
  v13 = *((_QWORD *)this + 21);
  *((_BYTE *)this + 177) = v12;
  DXGMONITOR::TriggerMonitorTelemetry((char *)this + 16, *(_BYTE *)(v13 + 21) == 0, v11);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 80LL))(*((_QWORD *)this + 21)) )
  {
    v14 = *((_DWORD *)this + 116);
    v15 = *((_QWORD *)this + 26);
    LODWORD(v22) = v14;
    if ( (unsigned __int8)DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(
                            v15,
                            1LL,
                            L"PreferredScaleFactor",
                            &v22) )
      v14 = (int)v22;
    if ( v14 && *((_DWORD *)this + 116) != v14 )
    {
      v16 = *((_QWORD *)this + 26);
      v22 = 0LL;
      *((_DWORD *)this + 116) = v14;
      v17 = *(_QWORD *)(v16 + 16);
      v18 = *(int (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v17 + 8LL);
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        &v22,
        0LL);
      if ( v18(v17, 0LL, &v22) >= 0 )
        DxgMonitor::MonitorDataStore::WriteData<unsigned long>(v19, v22, L"PreferredScaleFactor", v14);
      wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v22);
      (**(void (__fastcall ***)(struct DxgMonitor::IMonitorDeferredEventSource *, _QWORD, __int64, _QWORD, _DWORD))a3)(
        a3,
        *((unsigned int *)this + 45),
        9LL,
        *((unsigned int *)this + 116),
        *((_DWORD *)this + 70));
    }
  }
  v20 = DxgMonitor::MonitorUsageState::_EvaluateUsageState(
          *((DxgMonitor::MonitorUsageState **)this + 30),
          *(const struct DxgMonitor::IMonitorDescriptor **)(*((_QWORD *)this + 27) + 160LL));
  DXGMONITOR::OnUsageUpdated(this, a3, v20);
  DxgMonitor::MonitorColorState::OnFunctionDriverArrival(*((DxgMonitor::MonitorColorState **)this + 28), v23);
  DxgkNotifyMonitorChange((__int128 *)v23);
  if ( v23 )
    DisplayScenarioContextHolding(&v23);
  (**(void (__fastcall ***)(struct DxgMonitor::IMonitorDeferredEventSource *, _QWORD, __int64, __int64, _DWORD))a3)(
    a3,
    *((unsigned int *)this + 45),
    12LL,
    1LL,
    *((_DWORD *)this + 70));
  return 0LL;
}
