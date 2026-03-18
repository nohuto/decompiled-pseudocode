/*
 * XREFs of ?_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x14008FF48
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403541B0 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall MONITOR_MGR::_EnterMonitorPendingState(MONITOR_MGR *this)
{
  __int64 v2; // rdx
  int v3; // ecx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 3) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 878;
  }
  v2 = *((_QWORD *)this + 86);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 20);
    *(_DWORD *)(v2 + 20) = v3 + 1;
    if ( !v3 )
      KeClearEvent((PRKEVENT)(*((_QWORD *)this + 86) + 24LL));
  }
}
