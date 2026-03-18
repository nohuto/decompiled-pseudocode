/*
 * XREFs of ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140355C94
 * Callers:
 *     ?_FlushPendingCreation@MONITOR_MGR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403537A4 (-_FlushPendingCreation@MONITOR_MGR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403541B0 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403566BC (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_.c)
 * Callees:
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x140035818 (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ?_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x14008FFBC (-_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14026CAB0 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x14026ECA0 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CB2B0 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14035409C (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403552A0 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403566BC (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreateMonitorStep2(
        MONITOR_MGR *this,
        int a2,
        const struct MONITOR_REF_ACCESSOR *a3,
        const struct MONITOR_REF_ACCESSOR *a4,
        GUID *a5)
{
  __int64 v9; // rax
  bool v10; // r15
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // edx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  DXGMONITOR *v22; // rcx
  _BYTE v24[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGMONITOR *v25; // [rsp+38h] [rbp-20h]

  if ( a2 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 809;
  }
  v9 = *((_QWORD *)a3 + 1);
  v10 = 0;
  if ( v9 )
  {
    v11 = *(_DWORD *)(v9 + 280);
    if ( *(_DWORD *)(v9 + 180) == a2 )
    {
      v10 = v11 == 5;
    }
    else if ( v11 != 5 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 822;
    }
  }
  v12 = *((_QWORD *)a4 + 1);
  if ( v12 )
  {
    v13 = *((_QWORD *)a3 + 1);
    if ( v13 )
    {
      v14 = 1LL;
      if ( *(_DWORD *)(v13 + 180) == a2 )
        v14 = 3LL;
    }
    else
    {
      v14 = (-(__int64)(*(_DWORD *)(*(_QWORD *)(v12 + 240) + 16LL) != 0) & 3) + 1;
    }
    MONITOR_MGR::_IssueMonitorEvent((__int64)this + 8, *(_DWORD *)(v12 + 180), 0, v14, *(_DWORD *)(v12 + 280), a5);
    v15 = *((_QWORD *)a4 + 1);
    if ( *(_BYTE *)(v15 + 360) )
    {
      *(_BYTE *)(v15 + 360) = 0;
      MONITOR_MGR::_LeaveMonitorPendingState(this);
    }
  }
  v16 = *((_QWORD *)a3 + 1);
  if ( v16 )
  {
    v17 = *(_DWORD *)(v16 + 180);
    if ( v17 != a2 )
      MONITOR_MGR::_IssueMonitorEvent((__int64)this + 8, v17, 0, 2LL, *(_DWORD *)(v16 + 280), a5);
    if ( *(_DWORD *)(*((_QWORD *)a3 + 1) + 280LL) == 1 )
      v18 = MONITOR_MGR::_DestroyPhysicalMonitor(this, a3, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a5);
    else
      v18 = MONITOR_MGR::_DestroySimulatedMonitor(this, a3);
    if ( v18 < 0 )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)a3 + 1), v18);
      WdLogGlobalForLineNumber = 932;
    }
  }
  if ( *((_QWORD *)a4 + 1) )
  {
    MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v24, 0LL);
    if ( (int)MONITOR_MGR::_GetMonitorInstance(
                this,
                *(_DWORD *)(*((_QWORD *)a4 + 1) + 180LL),
                0,
                (struct MONITOR_REF_ACCESSOR *)v24) >= 0 )
    {
      v22 = (DXGMONITOR *)*((_QWORD *)a4 + 1);
      if ( v25 == v22 && MONITOR_MGR::_UsingCCDNameForTTM )
        DXGMONITOR::_CreateTtmDevice(v22, v19, v20, v21);
    }
    if ( v10 && (*(_BYTE *)(*((_QWORD *)a4 + 1) + 176LL) & 2) != 0 )
      MONITOR_MGR::_CleanUpFromSimulatedMonitor(this, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a5);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v24);
  }
  return 0LL;
}
