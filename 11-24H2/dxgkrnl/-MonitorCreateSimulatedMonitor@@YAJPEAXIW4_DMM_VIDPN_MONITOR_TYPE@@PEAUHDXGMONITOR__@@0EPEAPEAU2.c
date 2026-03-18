/*
 * XREFs of ?MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026D7CC
 * Callers:
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401C3738 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1401C6560 (DxgkHandleForceProjectionMonitor.c)
 *     ?MonitorDRTTest@@YAJPEAXPEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026D9A4 (-MonitorDRTTest@@YAJPEAXPEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140308290 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x140035774 (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140273C7C (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACC.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x14028DB88 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1402E2950 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 */

__int64 __fastcall MonitorCreateSimulatedMonitor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rbp
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // r14
  int IsTargetForceable; // eax
  unsigned int SimulatedMonitor; // ebx
  struct DXGMONITOR *v17; // rdx
  _BYTE v18[16]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v19[16]; // [rsp+40h] [rbp-28h] BYREF
  char v20; // [rsp+78h] [rbp+10h] BYREF

  v8 = (int)a3;
  v10 = (unsigned int)a2;
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v11[3] = v8;
  v11[4] = v10;
  v11[5] = a1;
  WdLogGlobalForLineNumber = 997;
  if ( !a1 || (_DWORD)v10 == -1 || (_DWORD)v8 == 1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1018;
  }
  v12 = *(_QWORD *)(a1 + 3120);
  if ( !v12 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 1022;
    return 3221225485LL;
  }
  v14 = *(_QWORD *)(v12 + 112);
  if ( !v14 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 1035;
    return 3221225485LL;
  }
  if ( a6 )
    goto LABEL_17;
  v20 = 0;
  IsTargetForceable = DmmIsTargetForceable(a1, (unsigned int)v10, &v20, (unsigned int)v8);
  SimulatedMonitor = IsTargetForceable;
  if ( IsTargetForceable < 0 )
  {
    WdLogSingleEntry2(2LL, v10, IsTargetForceable);
    WdLogGlobalForLineNumber = 1052;
    return SimulatedMonitor;
  }
  if ( v20 )
  {
LABEL_17:
    MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v19, 0LL);
    MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v18, v17);
    SimulatedMonitor = MONITOR_MGR::_HandleCreateSimulatedMonitor(
                         v14,
                         (unsigned int)v10,
                         (unsigned int)v8,
                         v19,
                         v18,
                         a8);
    MONITOR_MGR::_LogMonitorPresentEvent(v14, 1073741825LL, (unsigned int)v10, SimulatedMonitor, 0LL);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v18);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v19);
    return SimulatedMonitor;
  }
  WdLogSingleEntry1(3LL, v10);
  result = 3221225659LL;
  WdLogGlobalForLineNumber = 1062;
  return result;
}
