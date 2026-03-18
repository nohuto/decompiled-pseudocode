/*
 * XREFs of ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026CD1C
 * Callers:
 *     ?MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402668CC (-MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026C3D4 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x140035818 (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x14026C1AC (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14026CAB0 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@@Z @ 0x14026DA10 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x14026ECA0 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14026FDA8 (-_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CB2B0 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x1403547A8 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x140354884 (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403552A0 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x1403562AC (-_InsertMonitorToList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x140357744 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140402270 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreateSimulatedMonitor(
        MONITOR_MGR *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        MONITOR_REF_ACCESSOR *a5,
        __int64 a6)
{
  struct DXGMONITOR *v10; // rdx
  int MonitorInstance; // edi
  DXGMONITOR *v12; // rdi
  int v13; // r14d
  __int64 v14; // rsi
  int EmergencySimulatedMonitor; // eax
  _BYTE *v16; // r9
  __int64 v17; // rdx
  DXGMONITOR *v18; // rdi
  DXGMONITOR *v19; // r13
  char v20; // dl
  char v21; // r8
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r9
  _BYTE v26[8]; // [rsp+30h] [rbp-30h] BYREF
  DXGMONITOR *v27; // [rsp+38h] [rbp-28h]
  _BYTE v28[8]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+48h] [rbp-18h]
  __int64 v30; // [rsp+50h] [rbp-10h] BYREF
  DXGMONITOR *v31; // [rsp+58h] [rbp-8h]

  if ( a2 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1282;
  }
  if ( a3 == 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1283;
  }
  MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v28, 0LL);
  MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v26, v10);
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(a1, a2, 0, (struct MONITOR_REF_ACCESSOR *)v26);
  if ( MonitorInstance < 0 )
  {
    if ( v27 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1339;
    }
    if ( MonitorInstance != -1073741275 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1340;
    }
    EmergencySimulatedMonitor = MONITOR_MGR::_GetEmergencySimulatedMonitor(a1, (struct MONITOR_REF_ACCESSOR *)v28);
    if ( EmergencySimulatedMonitor < 0 )
    {
      if ( EmergencySimulatedMonitor != -1073741275 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1354;
      }
      v14 = v29;
      if ( v29 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1355;
      }
    }
    else
    {
      v14 = v29;
      if ( !v29 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1350;
      }
    }
  }
  else
  {
    v12 = v27;
    if ( !v27 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1297;
    }
    if ( a3 == 5 )
    {
      v13 = -1071774323;
      goto LABEL_47;
    }
    if ( *((_DWORD *)v12 + 70) != 1 )
    {
      v13 = MONITOR_MGR::_MigrateSimulatedMonitor(a1, a2, a3, a4, a5);
      if ( v13 >= 0 )
      {
        if ( !*((_QWORD *)a5 + 1) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1316;
        }
        MONITOR_MGR::_IssueMonitorEvent((char *)a1 + 8, a2, 0LL, 3LL, a3, a6);
      }
      goto LABEL_47;
    }
    MONITOR_MGR::_RemoveMonitorFromList(a1, (const struct MONITOR_REF_ACCESSOR *)v26);
    v14 = v29;
  }
  MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)&v30, 0LL);
  v16 = v26;
  if ( *(_QWORD *)(a4 + 8) != v17 )
    v16 = (_BYTE *)a4;
  v13 = MONITOR_MGR::_CreateSimulatedMonitor(a1, a2, a3, v16, &v30, a6);
  if ( v13 >= 0 )
  {
    v18 = v31;
    if ( !v31 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1374;
    }
    v19 = v27;
    if ( v27 )
    {
      if ( *((_DWORD *)v27 + 70) != 1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1378;
      }
      v20 = *((_BYTE *)v18 + 176) ^ (*((_BYTE *)v19 + 176) ^ *((_BYTE *)v18 + 176)) & 2;
      *((_BYTE *)v18 + 176) = v20;
      v21 = v20 ^ (*((_BYTE *)v19 + 176) ^ v20) & 4;
      *((_BYTE *)v18 + 176) = v21;
      *((_BYTE *)v18 + 176) = v21 ^ (*((_BYTE *)v19 + 176) ^ v21) & 0x20;
      DXGMONITOR::_SetAttachedPhysicalMonitor(v18, (const struct MONITOR_REF_ACCESSOR *)v26);
      DXGMONITOR::_DestroyTtmDevice(v19);
    }
    if ( v14 )
      MONITOR_MGR::_RemoveMonitorFromList(a1, (const struct MONITOR_REF_ACCESSOR *)v28);
    MONITOR_MGR::_InsertMonitorToList(a1, (const struct MONITOR_REF_ACCESSOR *)&v30);
    if ( a3 == 2 )
      v13 = MONITOR_MGR::_AddTargetIntoPersistencyRegistry(a1, a2, v22, v23);
    if ( *((_QWORD *)v18 + 37) )
      v24 = *(_DWORD *)(*((_QWORD *)v18 + 30) + 16LL) != 0 ? 4LL : 1LL;
    else
      v24 = 3LL;
    MONITOR_MGR::_IssueMonitorEvent((char *)a1 + 8, *((unsigned int *)v18 + 45), 0LL, v24, *((_DWORD *)v18 + 70), a6);
    if ( v14 )
    {
      MONITOR_MGR::_IssueMonitorEvent(
        (char *)a1 + 8,
        *(unsigned int *)(v14 + 180),
        0LL,
        2LL,
        *(_DWORD *)(v14 + 280),
        a6);
      MONITOR_MGR::_DestroySimulatedMonitor(a1, (const struct MONITOR_REF_ACCESSOR *)v28);
    }
    DXGMONITOR::_CreateTtmDevice(v18);
    MONITOR_REF_ACCESSOR::Release(a5);
    v31 = 0LL;
    *(_QWORD *)a5 = v30;
    *((_QWORD *)a5 + 1) = v18;
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v30);
LABEL_47:
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v26);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v28);
  return (unsigned int)v13;
}
