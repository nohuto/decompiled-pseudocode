/*
 * XREFs of ?_IsMonitorDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1402EBB14
 * Callers:
 *     ?MonitorIsConnectedMonitorDisabled@@YAJPEAUHDXGMONITOR__@@PEAE@Z @ 0x1402EBA8C (-MonitorIsConnectedMonitorDisabled@@YAJPEAUHDXGMONITOR__@@PEAE@Z.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x140354944 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     <none>
 */

char __fastcall DXGMONITOR::_IsMonitorDisabled(DXGMONITOR *this)
{
  char v1; // al
  char v2; // cl
  __int64 v3; // rax

  v1 = *((_BYTE *)this + 176);
  if ( (v1 & 0x20) != 0 )
    return 1;
  if ( (v1 & 6) == 6 )
    return 1;
  v3 = *((_QWORD *)this + 33);
  v2 = 0;
  if ( *(_BYTE *)(v3 + 56) )
    return 1;
  return v2;
}
