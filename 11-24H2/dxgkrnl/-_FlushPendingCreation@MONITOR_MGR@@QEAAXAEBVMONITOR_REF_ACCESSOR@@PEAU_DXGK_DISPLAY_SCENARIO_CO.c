/*
 * XREFs of ?_FlushPendingCreation@MONITOR_MGR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028C214
 * Callers:
 *     ?MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z @ 0x14028C3D0 (-MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028E704 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENA.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

void __fastcall MONITOR_MGR::_FlushPendingCreation(
        MONITOR_MGR *this,
        const struct MONITOR_REF_ACCESSOR *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v5; // r8

  v5 = *((_QWORD *)a2 + 1);
  if ( *(_BYTE *)(v5 + 360) )
  {
    if ( (int)MONITOR_MGR::_HandleCreateMonitorStep2(
                this,
                *(_DWORD *)(v5 + 180),
                (const struct MONITOR_REF_ACCESSOR *)(v5 + 368),
                a2,
                a3) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 986;
    }
    if ( *(_BYTE *)(*((_QWORD *)a2 + 1) + 360LL) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 987;
    }
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)(*((_QWORD *)a2 + 1) + 368LL));
  }
}
