/*
 * XREFs of ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x14028D834
 * Callers:
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x14028D3B4 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ??0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140032AE8 (--0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x140032BF8 (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x1400356D0 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ??0?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z @ 0x14005FD74 (--0-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z.c)
 *     ??1?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ @ 0x14005FD98 (--1-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ.c)
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAX_N@Z @ 0x14028DB28 (-_ChangeLIDStatus@DXGMONITOR@@QEAAX_N@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x14028DB88 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028DD10 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_ChangePowerStatus@DXGMONITOR@@QEAAX_N@Z @ 0x1403EC230 (-_ChangePowerStatus@DXGMONITOR@@QEAAX_N@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_EnableDisableMonitorInternal(
        __int64 a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        _BYTE *a7)
{
  __int64 v7; // rsi
  char v11; // r13
  __int64 v12; // rax
  __int64 v13; // rbx
  _BYTE *v14; // r15
  __int64 v15; // rax
  __int64 v17; // rax
  _BYTE v18[8]; // [rsp+30h] [rbp-48h] BYREF
  DXGMONITOR *v19[3]; // [rsp+38h] [rbp-40h] BYREF
  char v20; // [rsp+80h] [rbp+8h] BYREF

  v7 = a2;
  v11 = 0;
  if ( a4 - 1 > 1 && a4 != 8 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3031;
  }
  MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)&v20, a1);
  v12 = *(_QWORD *)(a1 + 40);
  if ( v12 == a1 + 40 )
  {
    v13 = 0LL;
  }
  else
  {
    v13 = v12 - 152;
    if ( !v12 )
      v13 = 0LL;
  }
  MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)&v20);
  if ( v13 )
  {
    v14 = a7;
    do
    {
      if ( (_DWORD)v7 == -1 || *(_DWORD *)(v13 + 180) == (_DWORD)v7 )
      {
        v11 = 1;
        MonitorResourceLock::AcquireExclusive((PERESOURCE)(v13 + 40));
        if ( *(_BYTE *)(*(_QWORD *)(v13 + 264) + 8LL) && v14 )
          *v14 = 1;
        if ( a4 == 1 )
        {
          DXGMONITOR::_ChangeLIDStatus((DXGMONITOR *)v13, a3 != 0);
        }
        else if ( a4 != 8 || *(_DWORD *)(*(_QWORD *)(v13 + 240) + 16LL) != 1 || a3 )
        {
          DXGMONITOR::_ChangePowerStatus((DXGMONITOR *)v13, a3 != 0);
        }
        ExReleaseResourceLite((PERESOURCE)(v13 + 40));
        KeLeaveCriticalRegion();
        if ( *(_DWORD *)(v13 + 280) != 1 )
        {
          v17 = *(_QWORD *)(v13 + 296);
          if ( v17 )
          {
            if ( *(_DWORD *)(v17 + 280) != 1 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 3098;
            }
            MONITOR_REF_LOCK_ACCESSOR::MONITOR_REF_LOCK_ACCESSOR(
              (MONITOR_REF_LOCK_ACCESSOR *)v19,
              (const struct MONITOR_REF_ACCESSOR *)(v13 + 288));
            if ( a4 == 1 )
              DXGMONITOR::_ChangeLIDStatus(v19[0], a3 != 0);
            else
              DXGMONITOR::_ChangePowerStatus(v19[0], a3 != 0);
            MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v19);
          }
        }
      }
      MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)v18, a1);
      v15 = *(_QWORD *)(v13 + 152);
      if ( v15 == a1 + 40 )
      {
        v13 = 0LL;
      }
      else
      {
        v13 = v15 - 152;
        if ( !v15 )
          v13 = 0LL;
      }
      MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)v18);
    }
    while ( v13 );
    if ( v11 )
      goto LABEL_17;
  }
  if ( (_DWORD)v7 == -1 || a4 == 2 || a4 == 8 )
  {
LABEL_17:
    MONITOR_MGR::_IssueMonitorEvent(a1 + 8, (unsigned int)v7, a4, a5, 0, a6);
    MONITOR_MGR::_LogMonitorPresentEvent(a1, (unsigned int)(a3 != 0) + 9, (unsigned int)v7, 0LL, 0LL);
  }
  else
  {
    WdLogSingleEntry2(2LL, v7, a1);
    WdLogGlobalForLineNumber = 3151;
  }
  return 0LL;
}
