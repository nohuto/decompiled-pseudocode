/*
 * XREFs of ?_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ @ 0x1403A8580
 * Callers:
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1403A831C (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?MonitorIsUsingSimulatedMonitor@@YAJPEAXPEAE@Z @ 0x1403A84AC (-MonitorIsUsingSimulatedMonitor@@YAJPEAXPEAE@Z.c)
 * Callees:
 *     ??0?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z @ 0x14005F4BC (--0-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z.c)
 *     ??1?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ @ 0x14005F4E0 (--1-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ.c)
 */

char __fastcall MONITOR_MGR::_IsUsingSimulatedMonitor(MONITOR_MGR *this)
{
  char *v2; // r8
  MONITOR_MGR *v3; // rdx
  char *v4; // rax
  char v5; // bl
  char *v6; // rdx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)&v8, (__int64)this);
  v2 = (char *)this + 40;
  v3 = (MONITOR_MGR *)*((_QWORD *)this + 5);
  if ( v3 == (MONITOR_MGR *)((char *)this + 40) )
  {
    v4 = 0LL;
  }
  else
  {
    v4 = (char *)v3 - 152;
    if ( !v3 )
      v4 = 0LL;
  }
  v5 = 1;
  while ( v4 )
  {
    if ( *((_DWORD *)v4 + 70) != 1 )
      goto LABEL_9;
    v6 = (char *)*((_QWORD *)v4 + 19);
    if ( v6 == v2 )
    {
      v4 = 0LL;
    }
    else
    {
      v4 = v6 - 152;
      if ( !v6 )
        v4 = 0LL;
    }
  }
  v5 = 0;
LABEL_9:
  MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)&v8);
  return v5;
}
