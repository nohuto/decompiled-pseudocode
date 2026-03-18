/*
 * XREFs of ?MonitorRegisterMonitorEventCallback@@YAJPEAVADAPTER_DISPLAY@@P6AJPEAXI1W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z1PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x140267FF8
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1403845FC (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ?_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z0PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x14026C2F4 (-_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN.c)
 */

__int64 __fastcall MonitorRegisterMonitorEventCallback(
        struct ADAPTER_DISPLAY *a1,
        int (__high *a2)(void *, unsigned int, void *, enum MONITOR_EVENT, unsigned __int64, enum _DMM_VIDPN_MONITOR_TYPE, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *),
        void *a3,
        struct HDXGMONITOREVENT__ **a4)
{
  if ( !a1 || !a4 )
    return 3221225485LL;
  *a4 = 0LL;
  if ( !*((_QWORD *)a1 + 14) )
  {
    WdLogSingleEntry1(2LL, *((_QWORD *)a1 + 2));
    WdLogGlobalForLineNumber = 4360;
    return 3221225485LL;
  }
  return MONITOR_MGR::_CreateAndInsertMonitorEventHandler(*((MONITOR_MGR **)a1 + 14), a2, a3, a4);
}
