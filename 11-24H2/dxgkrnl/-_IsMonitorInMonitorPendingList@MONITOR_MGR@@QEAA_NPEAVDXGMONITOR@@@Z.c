/*
 * XREFs of ?_IsMonitorInMonitorPendingList@MONITOR_MGR@@QEAA_NPEAVDXGMONITOR@@@Z @ 0x14005FCA8
 * Callers:
 *     ??1DXGMONITOR@@UEAA@XZ @ 0x1403F9048 (--1DXGMONITOR@@UEAA@XZ.c)
 * Callees:
 *     ??0?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z @ 0x14005FD74 (--0-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z.c)
 *     ??1?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ @ 0x14005FD98 (--1-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ.c)
 */

char __fastcall MONITOR_MGR::_IsMonitorInMonitorPendingList(MONITOR_MGR *this, struct DXGMONITOR *a2)
{
  char **v4; // rcx
  char v5; // bl
  char *v6; // rax
  char *v7; // rdi
  char v9; // [rsp+30h] [rbp+8h] BYREF

  MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>(&v9, this);
  v4 = (char **)((char *)this + 56);
  v5 = 0;
  if ( a2 )
  {
    v6 = *v4;
    if ( *v4 != (char *)v4 )
    {
      v7 = (char *)a2 + 152;
      while ( v6 != v7 )
      {
        if ( v4 == (char **)v6 )
          goto LABEL_8;
        v6 = *(char **)v6;
      }
      v5 = 1;
    }
  }
LABEL_8:
  MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>(&v9);
  return v5;
}
