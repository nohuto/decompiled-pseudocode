/*
 * XREFs of ?_InsertMonitorToList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14028C108
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140273C7C (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACC.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140274608 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028CC20 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028E074 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_.c)
 * Callees:
 *     ??0?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z @ 0x14005FD74 (--0-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z.c)
 *     ??1?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ @ 0x14005FD98 (--1-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ.c)
 */

__int64 __fastcall MONITOR_MGR::_InsertMonitorToList(MONITOR_MGR *this, const struct MONITOR_REF_ACCESSOR *a2)
{
  char *v4; // rdx
  char *i; // rax
  char *v6; // rcx
  __int64 v7; // rax
  char **v8; // rcx
  char *v9; // rax
  char v11; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_QWORD *)a2 + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2469;
  }
  MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)&v11, (__int64)this);
  v4 = (char *)this + 40;
  for ( i = (char *)*((_QWORD *)this + 5); ; i = (char *)*((_QWORD *)v6 + 19) )
  {
    if ( i == v4 )
    {
      v6 = 0LL;
    }
    else
    {
      v6 = i - 152;
      if ( !i )
        v6 = 0LL;
    }
    v7 = *((_QWORD *)a2 + 1);
    if ( !v6 )
      break;
    if ( *(_DWORD *)(v7 + 180) == *((_DWORD *)v6 + 45) )
    {
      WdLogSingleEntry1(2LL, *((unsigned int *)v6 + 45));
      WdLogGlobalForLineNumber = 2484;
      MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)&v11);
      return 3223192344LL;
    }
  }
  v8 = (char **)*((_QWORD *)this + 6);
  v9 = (char *)(v7 + 152);
  if ( *v8 != v4 )
    __fastfail(3u);
  *((_QWORD *)v9 + 1) = v8;
  *(_QWORD *)v9 = v4;
  *v8 = v9;
  *((_QWORD *)this + 6) = v9;
  ++*((_DWORD *)this + 8);
  MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)&v11);
  return 0LL;
}
