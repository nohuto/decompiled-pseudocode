/*
 * XREFs of ?_GetUsb4TargetList@MONITOR_MGR@@QEAAJPEAK0@Z @ 0x140273B70
 * Callers:
 *     ?MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042DE1C (-MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x140032B30 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ??1?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@XZ @ 0x1400356FC (--1-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ??0?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z @ 0x14005FD74 (--0-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z.c)
 *     ??1?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ @ 0x14005FD98 (--1-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ.c)
 */

__int64 __fastcall MONITOR_MGR::_GetUsb4TargetList(MONITOR_MGR *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // r15d
  MONITOR_MGR *v7; // rax
  __int64 v8; // rbx
  MUTEX_LOCK *i; // rcx
  unsigned int v10; // ecx
  MONITOR_MGR *v11; // rax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  char v14; // [rsp+58h] [rbp+10h] BYREF

  v3 = *a2;
  *a2 = 0;
  MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)&v13, (__int64)this);
  v7 = (MONITOR_MGR *)*((_QWORD *)this + 5);
  if ( v7 == (MONITOR_MGR *)((char *)this + 40) )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = (__int64)v7 - 152;
    if ( !v7 )
      v8 = 0LL;
  }
  for ( i = (MUTEX_LOCK *)&v13; ; i = (MUTEX_LOCK *)&v14 )
  {
    MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>(i);
    if ( !v8 )
      break;
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v13, v8, 0);
    if ( *(_BYTE *)(*(_QWORD *)(v8 + 264) + 8LL) )
    {
      v10 = *a2;
      if ( *a2 >= v3 )
      {
        RESOURCE_LOCK<DXGMONITOR>::~RESOURCE_LOCK<DXGMONITOR>(&v13);
        return 3221225507LL;
      }
      *a3 = *(_DWORD *)(v8 + 180);
      *a2 = v10 + 1;
      ++a3;
    }
    RESOURCE_LOCK<DXGMONITOR>::~RESOURCE_LOCK<DXGMONITOR>(&v13);
    MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)&v14, (__int64)this);
    v11 = *(MONITOR_MGR **)(v8 + 152);
    if ( v11 == (MONITOR_MGR *)((char *)this + 40) )
    {
      v8 = 0LL;
    }
    else
    {
      v8 = (__int64)v11 - 152;
      if ( !v11 )
        v8 = 0LL;
    }
  }
  return 0LL;
}
