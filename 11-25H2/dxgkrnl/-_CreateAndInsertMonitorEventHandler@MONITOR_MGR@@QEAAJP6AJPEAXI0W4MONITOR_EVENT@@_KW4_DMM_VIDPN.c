/*
 * XREFs of ?_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z0PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x14026C2F4
 * Callers:
 *     ?MonitorRegisterMonitorEventCallback@@YAJPEAVADAPTER_DISPLAY@@P6AJPEAXI1W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z1PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x140267FF8 (-MonitorRegisterMonitorEventCallback@@YAJPEAVADAPTER_DISPLAY@@P6AJPEAXI1W4MONITOR_EVENT@@_KW4_DM.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ @ 0x14005F4E0 (--1-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ.c)
 *     ??0?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@AEAVMONITOR_MGR@@@Z @ 0x14008FEE0 (--0-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@AEAVMONITOR_MGR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateAndInsertMonitorEventHandler(
        MONITOR_MGR *this,
        int (__high *a2)(void *, unsigned int, void *, enum MONITOR_EVENT, unsigned __int64, enum _DMM_VIDPN_MONITOR_TYPE, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *),
        void *a3,
        struct HDXGMONITOREVENT__ **a4)
{
  __int64 v6; // rax
  MONITOR_MGR *v7; // rbx
  __int64 result; // rax
  MONITOR_MGR **v9; // rcx
  void *v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3225;
  }
  *a4 = 0LL;
  v6 = operator new(0x20uLL, 0x4D677844u, 256LL, (__int64)a4);
  v7 = (MONITOR_MGR *)v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 16) = VIDPN_MGR::_MonitorEventHandler;
    MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)&v10, (__int64)this);
    v9 = (MONITOR_MGR **)*((_QWORD *)this + 10);
    if ( *v9 != (MONITOR_MGR *)((char *)this + 72) )
      __fastfail(3u);
    *((_QWORD *)v7 + 1) = v9;
    *(_QWORD *)v7 = (char *)this + 72;
    *v9 = v7;
    *((_QWORD *)this + 10) = v7;
    *a4 = v7;
    MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)&v10);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 3238;
  }
  return result;
}
