/*
 * XREFs of ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028CB0C
 * Callers:
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028E704 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENA.c)
 *     ?MonitorCleanUpFromSimulatedMonitor@@YAXPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140306AD8 (-MonitorCleanUpFromSimulatedMonitor@@YAXPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140032BC4 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ??0?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z @ 0x14005FD74 (--0-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z.c)
 *     ??1?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ @ 0x14005FD98 (--1-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x14028D3B4 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

void __fastcall MONITOR_MGR::_CleanUpFromSimulatedMonitor(MONITOR_MGR *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  int v4; // ebp
  MONITOR_MGR *v5; // rax
  char *v6; // rdi
  __int64 v7; // r8
  int v8; // edx
  MONITOR_MGR *v9; // rax
  char v10; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)&v10, (__int64)this);
  v5 = (MONITOR_MGR *)*((_QWORD *)this + 5);
  if ( v5 == (MONITOR_MGR *)((char *)this + 40) )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = (char *)v5 - 152;
    if ( !v5 )
      v6 = 0LL;
  }
  MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)&v10);
  if ( !v6 )
    goto LABEL_14;
  do
  {
    MonitorResourceLock::AcquireShared((PERESOURCE)(v6 + 40));
    v8 = v4 + 1;
    if ( *((_DWORD *)v6 + 71) != 5 )
      v8 = v4;
    v4 = v8;
    ExReleaseResourceLite((PERESOURCE)(v6 + 40));
    KeLeaveCriticalRegion();
    MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)&v10, (__int64)this);
    v9 = (MONITOR_MGR *)*((_QWORD *)v6 + 19);
    if ( v9 == (MONITOR_MGR *)((char *)this + 40) )
    {
      v6 = 0LL;
    }
    else
    {
      v6 = (char *)v9 - 152;
      if ( !v9 )
        v6 = 0LL;
    }
    MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)&v10);
  }
  while ( v6 );
  if ( !v4 )
  {
LABEL_14:
    LOBYTE(v7) = 1;
    MONITOR_MGR::_EnableDisableMonitor(this, 0xFFFFFFFFLL, v7, 8LL, 0LL, a2, 0LL);
  }
}
