/*
 * XREFs of ?MonitorDestroySimulatedMonitor@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026DB84
 * Callers:
 *     DxgkHandleForceProjectionMonitor @ 0x1401C6560 (DxgkHandleForceProjectionMonitor.c)
 *     ?MonitorDRTTest@@YAJPEAXPEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026D9A4 (-MonitorDRTTest@@YAJPEAXPEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140274608 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x14028DB88 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 */

__int64 __fastcall MonitorDestroySimulatedMonitor(
        PERESOURCE *this,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  PERESOURCE v8; // rax
  struct _LIST_ENTRY *Blink; // rsi
  unsigned int v11; // ebx

  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = this;
  WdLogGlobalForLineNumber = 1149;
  if ( !this || (_DWORD)v5 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1167;
  }
  v8 = this[390];
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 1171;
    return 3221225485LL;
  }
  Blink = v8[1].SystemResourcesList.Blink;
  if ( !Blink )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 1184;
    return 3221225485LL;
  }
  v11 = MONITOR_MGR::_HandleRemoveSimulatedMonitor((MONITOR_MGR *)v8[1].SystemResourcesList.Blink, v5, a3);
  MONITOR_MGR::_LogMonitorPresentEvent(Blink, 1073741826LL, (unsigned int)v5, v11, 0LL);
  return v11;
}
