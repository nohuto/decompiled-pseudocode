/*
 * XREFs of ?MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026804C
 * Callers:
 *     DpiPdoRemovePdo @ 0x1403C99AC (DpiPdoRemovePdo.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1404092C8 (DpiPdoHandleChildConnectionChange.c)
 *     DxgkPowerOnOffMonitor @ 0x140427DC4 (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x140355118 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403563B8 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     _anonymous_namespace_::DetermineIfNeedToChangeActivity @ 0x140409FD0 (_anonymous_namespace_--DetermineIfNeedToChangeActivity.c)
 */

__int64 __fastcall MonitorRemovePhysicalMonitor(
        char *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v5; // rsi
  unsigned __int8 v6; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // rbp
  unsigned int v13; // ebx

  v5 = (unsigned int)a2;
  v6 = a3;
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a1;
  WdLogGlobalForLineNumber = 714;
  if ( !a1 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  if ( a5 )
  {
    *((_DWORD *)a5 + 6) = v5;
    v9 = *(_QWORD *)(a1 + 412);
    *((_DWORD *)a5 + 7) = 0;
    *(_QWORD *)((char *)a5 + 36) = v9;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 739;
  }
  v10 = *((_QWORD *)a1 + 390);
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 743;
    return 3221225485LL;
  }
  v12 = *(_QWORD *)(v10 + 112);
  if ( !v12 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 756;
    return 3221225485LL;
  }
  v13 = MONITOR_MGR::_HandleRemovePhysicalMonitor(*(MONITOR_MGR **)(v10 + 112), v5, v6, a5);
  MONITOR_MGR::_LogMonitorPresentEvent(v12, 2LL, (unsigned int)v5, v13, 0LL);
  anonymous_namespace_::DetermineIfNeedToChangeActivity(a1, v5);
  return v13;
}
