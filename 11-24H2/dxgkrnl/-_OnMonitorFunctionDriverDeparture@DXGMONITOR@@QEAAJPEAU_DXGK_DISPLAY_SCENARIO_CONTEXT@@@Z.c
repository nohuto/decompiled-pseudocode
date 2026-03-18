/*
 * XREFs of ?_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402763A4
 * Callers:
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x140276460 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     ?UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ @ 0x140187948 (-UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_OnMonitorFunctionDriverDeparture(
        DxgMonitor::MonitorPnpState **this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  bool v8; // zf

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  v8 = ((_BYTE)this[22] & 1) == 0;
  WdLogGlobalForLineNumber = 1500;
  if ( v8 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1509;
  }
  if ( !*((_QWORD *)this[25] + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1510;
  }
  if ( *((_DWORD *)this + 70) != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1511;
  }
  return DxgMonitor::MonitorPnpState::UnregisterPnPTargetDeviceNotification(this[25], v5, v6, v7);
}
