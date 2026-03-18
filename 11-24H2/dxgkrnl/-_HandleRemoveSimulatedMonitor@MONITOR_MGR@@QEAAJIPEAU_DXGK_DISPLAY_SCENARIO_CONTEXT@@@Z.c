/*
 * XREFs of ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140274608
 * Callers:
 *     ?MonitorDestroySimulatedMonitor@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026DB84 (-MonitorDestroySimulatedMonitor@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x140035774 (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ??$?9V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@0@$$T@Z @ 0x140051E68 (--$-9V-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@det.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1402738DC (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140273A10 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x140275C00 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14028C108 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14028D218 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028DD10 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402E1840 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleRemoveSimulatedMonitor(
        MONITOR_MGR *this,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v3; // rsi
  int MonitorInstance; // ebx
  __int64 v7; // rbx
  int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  _BYTE v14[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h]

  v3 = a2;
  if ( a2 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1491;
  }
  MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v14, 0LL);
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v3, 0, (struct MONITOR_REF_ACCESSOR *)v14);
  if ( MonitorInstance < 0 )
  {
    if ( v15 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1598;
    }
    if ( MonitorInstance != -1073741275 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1599;
    }
    WdLogSingleEntry2(2LL, v3, this);
    WdLogGlobalForLineNumber = 1601;
  }
  else
  {
    v7 = v15;
    if ( !v15 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1508;
    }
    v8 = *(_DWORD *)(v7 + 280);
    if ( v8 == 1 )
    {
      WdLogSingleEntry1(2LL, v3);
      WdLogGlobalForLineNumber = 1517;
      MonitorInstance = -1073741275;
    }
    else
    {
      MONITOR_MGR::_RemoveMonitorFromList(this, (const struct MONITOR_REF_ACCESSOR *)v14);
      v9 = *(_QWORD *)(v7 + 296);
      if ( v9 )
      {
        if ( *(_DWORD *)(v9 + 280) != 1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1541;
        }
        MONITOR_MGR::_InsertMonitorToList(this, (const struct MONITOR_REF_ACCESSOR *)(v7 + 288));
        if ( MONITOR_MGR::_UsingCCDNameForTTM
          || wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>((_QWORD *)(*(_QWORD *)(v7 + 200) + 40LL)) )
        {
          DXGMONITOR::_CreateTtmDevice(*(DXGMONITOR **)(v7 + 296));
        }
      }
      if ( *(_QWORD *)(v7 + 296) )
      {
        v10 = 2LL;
      }
      else
      {
        v8 = *(_DWORD *)(v7 + 280);
        v10 = 3LL;
      }
      MONITOR_MGR::_IssueMonitorEvent((char *)this + 8, *(unsigned int *)(v7 + 180), 0LL, v10, v8, a3);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)(v7 + 288));
      if ( *(_DWORD *)(v7 + 280) == 2 )
        MONITOR_MGR::_DeleteTargetFromPersistencyRegistry(this, (unsigned int)v3, v11, v12);
      MonitorInstance = MONITOR_MGR::_DestroySimulatedMonitor(this, (const struct MONITOR_REF_ACCESSOR *)v14);
    }
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v14);
  return (unsigned int)MonitorInstance;
}
