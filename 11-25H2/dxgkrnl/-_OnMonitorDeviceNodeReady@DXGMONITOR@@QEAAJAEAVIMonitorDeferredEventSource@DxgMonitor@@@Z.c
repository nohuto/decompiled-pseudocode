/*
 * XREFs of ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z @ 0x140353840
 * Callers:
 *     ?MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z @ 0x140353960 (-MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?OnDeviceNodeReady@MonitorUsb4State@DxgMonitor@@QEAAXAEAVMonitorPnpState@2@@Z @ 0x14018956C (-OnDeviceNodeReady@MonitorUsb4State@DxgMonitor@@QEAAXAEAVMonitorPnpState@2@@Z.c)
 *     ?OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z @ 0x140351CA4 (-OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x140352258 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x1403530A4 (-RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 *     ?UpdatePnPDeviceProperties@MonitorPnpState@DxgMonitor@@AEAAJXZ @ 0x1403536A8 (-UpdatePnPDeviceProperties@MonitorPnpState@DxgMonitor@@AEAAJXZ.c)
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403D545C (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 */

__int64 __fastcall DXGMONITOR::_OnMonitorDeviceNodeReady(
        DXGMONITOR *this,
        struct DxgMonitor::IMonitorDeferredEventSource *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  DxgMonitor::MonitorPnpState *v7; // rcx
  struct _ERESOURCE *v8; // rcx
  __int64 v9; // rdx
  bool v10; // r8
  bool v12; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  v6 = *((_QWORD *)this + 25);
  WdLogGlobalForLineNumber = 1547;
  if ( !*(_BYTE *)(v6 + 16) )
  {
    if ( (*((_BYTE *)this + 176) & 1) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1566;
    }
    if ( !*(_QWORD *)(*((_QWORD *)this + 25) + 8LL) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1567;
    }
    if ( *((_DWORD *)this + 70) != 1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1568;
    }
    v7 = (DxgMonitor::MonitorPnpState *)*((_QWORD *)this + 25);
    *((_BYTE *)v7 + 16) = 1;
    DxgMonitor::MonitorPnpState::UpdatePnPDeviceProperties(v7);
    DxgMonitor::MonitorUsb4State::OnDeviceNodeReady(
      *((DxgMonitor::MonitorUsb4State **)this + 33),
      *((struct DxgMonitor::MonitorPnpState **)this + 25));
    v8 = (struct _ERESOURCE *)*((_QWORD *)this + 27);
    v12 = 0;
    DxgMonitor::MonitorDescriptorState::OnDeviceNodeReady(v8, &v12);
    if ( v12 )
      DXGMONITOR::OnDescriptorUpdated(this, a2, v10);
    DxgMonitor::MonitorModes::RetrieveMonitorFrequencyRangeFromRegistry(*((struct _ERESOURCE **)this + 29), v9);
    DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(this);
  }
  return 0LL;
}
