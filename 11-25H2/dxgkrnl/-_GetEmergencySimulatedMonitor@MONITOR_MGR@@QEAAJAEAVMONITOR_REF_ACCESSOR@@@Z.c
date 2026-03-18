/*
 * XREFs of ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x140354884
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026CD1C (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACC.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403541B0 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 * Callees:
 *     ?Assign@MONITOR_REF_ACCESSOR@@QEAAXPEAVDXGMONITOR@@@Z @ 0x1400385FC (-Assign@MONITOR_REF_ACCESSOR@@QEAAXPEAVDXGMONITOR@@@Z.c)
 *     ??0?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z @ 0x14005F4BC (--0-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z.c)
 *     ??1?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ @ 0x14005F4E0 (--1-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_GetEmergencySimulatedMonitor(MONITOR_MGR *this, struct MONITOR_REF_ACCESSOR *a2)
{
  char *v4; // rcx
  unsigned int v5; // edi
  char *i; // rax
  char *v7; // rbx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)&v9, (__int64)this);
  v4 = (char *)this + 40;
  v5 = 0;
  for ( i = (char *)*((_QWORD *)this + 5); ; i = (char *)*((_QWORD *)v7 + 19) )
  {
    if ( i == v4 )
    {
      v7 = 0LL;
    }
    else
    {
      v7 = i - 152;
      if ( !i )
        v7 = 0LL;
    }
    if ( !v7 )
    {
      MONITOR_REF_ACCESSOR::Release(a2);
      v5 = -1073741275;
      goto LABEL_9;
    }
    if ( *((_DWORD *)v7 + 70) == 5 )
      break;
  }
  if ( *((_QWORD *)v7 + 37) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2609;
  }
  MONITOR_REF_ACCESSOR::Assign(a2, (struct DXGMONITOR *)v7);
LABEL_9:
  MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)&v9);
  return v5;
}
