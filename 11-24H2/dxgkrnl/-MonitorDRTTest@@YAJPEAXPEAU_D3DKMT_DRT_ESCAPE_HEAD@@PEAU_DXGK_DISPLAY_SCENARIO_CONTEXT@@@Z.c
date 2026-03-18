/*
 * XREFs of ?MonitorDRTTest@@YAJPEAXPEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026D9A4
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140416310 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x140257F5C (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 *     ?MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026D7CC (-MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2.c)
 *     ?MonitorDestroySimulatedMonitor@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026DB84 (-MonitorDestroySimulatedMonitor@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1402737B8 (-_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z.c)
 */

__int64 __fastcall MonitorDRTTest(
        DXGADAPTER *a1,
        struct _D3DKMT_DRT_ESCAPE_HEAD *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  unsigned int v7; // eax
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // ebx
  unsigned int SimulatedMonitor; // eax
  __int64 v13; // r9
  MONITOR_MGR *v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-28h]
  __int64 v16; // [rsp+30h] [rbp-18h]

  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a1;
  WdLogGlobalForLineNumber = 4947;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v7 = *((_DWORD *)a2 + 1);
  if ( v7 < 0x20 )
  {
    WdLogSingleEntry2(3LL, a2, v7);
    WdLogGlobalForLineNumber = 4963;
    return 3221225485LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4981;
  }
  v9 = *((_QWORD *)a1 + 390);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, a1);
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 4985;
    return result;
  }
  v10 = *((unsigned int *)a2 + 3);
  switch ( (_DWORD)v10 )
  {
    case 0:
      v14 = *(MONITOR_MGR **)(v9 + 112);
      if ( !v14 )
      {
        WdLogSingleEntry1(2LL, a1);
        WdLogGlobalForLineNumber = 5003;
        return 3221225485LL;
      }
      return (unsigned int)MONITOR_MGR::_DRTGetTargetInformation(v14, a2);
    case 1:
      if ( (int)DmmEnableModeResetOnMonitorEvent((PERESOURCE *)a1, 0) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5025;
      }
      SimulatedMonitor = MonitorCreateSimulatedMonitor(
                           (__int64)a1,
                           *((unsigned int *)a2 + 4),
                           *((unsigned int *)a2 + 5),
                           v13,
                           v15,
                           0,
                           v16,
                           (__int64)a3);
      goto LABEL_20;
    case 2:
      if ( (int)DmmEnableModeResetOnMonitorEvent((PERESOURCE *)a1, 0) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5059;
      }
      SimulatedMonitor = MonitorDestroySimulatedMonitor(a1, *((_DWORD *)a2 + 4), a3);
LABEL_20:
      v11 = SimulatedMonitor;
      DmmEnableModeResetOnMonitorEvent((PERESOURCE *)a1, 1);
      return v11;
  }
  WdLogSingleEntry2(3LL, v10, a2);
  WdLogGlobalForLineNumber = 5082;
  return (unsigned int)-1073741811;
}
