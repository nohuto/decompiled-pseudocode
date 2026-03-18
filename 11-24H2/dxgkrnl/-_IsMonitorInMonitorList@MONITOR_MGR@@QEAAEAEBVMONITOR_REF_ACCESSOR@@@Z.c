/*
 * XREFs of ?_IsMonitorInMonitorList@MONITOR_MGR@@QEAAEAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14018727C
 * Callers:
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140273A10 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403C3534 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_.c)
 * Callees:
 *     ??0?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z @ 0x14005FD74 (--0-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z.c)
 *     ??1?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ @ 0x14005FD98 (--1-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ.c)
 */

char __fastcall MONITOR_MGR::_IsMonitorInMonitorList(MONITOR_MGR *this, const struct MONITOR_REF_ACCESSOR *a2)
{
  __int64 v4; // rdx
  _QWORD **v5; // rcx
  char v6; // bl
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  char v10; // [rsp+30h] [rbp+8h] BYREF

  MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)&v10, (__int64)this);
  v4 = *((_QWORD *)a2 + 1);
  v5 = (_QWORD **)((char *)this + 40);
  v6 = 0;
  if ( v4 )
  {
    v7 = *v5;
    if ( *v5 != v5 )
    {
      v8 = (_QWORD *)(v4 + 152);
      while ( v7 != v8 )
      {
        if ( v5 == v7 )
          goto LABEL_8;
        v7 = (_QWORD *)*v7;
      }
      v6 = 1;
    }
  }
LABEL_8:
  MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)&v10);
  return v6;
}
