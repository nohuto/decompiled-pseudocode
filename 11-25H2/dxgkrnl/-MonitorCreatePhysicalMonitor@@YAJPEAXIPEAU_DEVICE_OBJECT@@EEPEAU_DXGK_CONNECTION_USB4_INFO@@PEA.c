/*
 * XREFs of ?MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402666F4
 * Callers:
 *     DpiPdoAddPdo @ 0x1403C8AA0 (DpiPdoAddPdo.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1404092C8 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ??0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140034D20 (--0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x140035818 (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CB2B0 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEBAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x140353E40 (-_GetMonitorDiagInfo@DXGMONITOR@@QEBAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403541B0 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x140355118 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     _anonymous_namespace_::DetermineIfNeedToChangeActivity @ 0x140409FD0 (_anonymous_namespace_--DetermineIfNeedToChangeActivity.c)
 */

__int64 __fastcall MonitorCreatePhysicalMonitor(
        char *a1,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4,
        char a5,
        struct _DXGK_CONNECTION_USB4_INFO *a6,
        unsigned __int8 *a7,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a8)
{
  unsigned __int8 v8; // r12
  __int64 v9; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  MONITOR_MGR *v15; // r14
  unsigned int PhysicalMonitor; // esi
  _BYTE v17[8]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v18; // [rsp+50h] [rbp-21h]
  DXGMONITOR *v19[3]; // [rsp+58h] [rbp-19h] BYREF
  _OWORD v20[2]; // [rsp+70h] [rbp-1h] BYREF

  v8 = a4;
  v9 = (unsigned int)a2;
  v12 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v12 + 24) = v9;
  *(_QWORD *)(v12 + 32) = a1;
  WdLogGlobalForLineNumber = 596;
  if ( !a1 || !a3 || (_DWORD)v9 == -1 )
    return 3221225485LL;
  if ( a8 )
  {
    *((_DWORD *)a8 + 6) = v9;
    *(_QWORD *)((char *)a8 + 36) = *(_QWORD *)(a1 + 412);
    *((_DWORD *)a8 + 7) = 1;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 621;
  }
  v13 = *((_QWORD *)a1 + 390);
  if ( !v13 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 625;
    return 3221225485LL;
  }
  v15 = *(MONITOR_MGR **)(v13 + 112);
  if ( !v15 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 638;
    return 3221225485LL;
  }
  PhysicalMonitor = MONITOR_MGR::_HandleCreatePhysicalMonitor(v15, v9, a3, v8, a5, a6, a8);
  memset(v20, 0, sizeof(v20));
  MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v17, 0LL);
  if ( MONITOR_MGR::_GetMonitorInstance(v15, v9, 1u, (struct MONITOR_REF_ACCESSOR *)v17) >= 0 )
  {
    if ( v18 )
    {
      CONST_MONITOR_REF_LOCK_ACCESSOR::CONST_MONITOR_REF_LOCK_ACCESSOR(
        (CONST_MONITOR_REF_LOCK_ACCESSOR *)v19,
        (const struct MONITOR_REF_ACCESSOR *)v17);
      DXGMONITOR::_GetMonitorDiagInfo(v19[0], (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v20);
      CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v19);
    }
  }
  MONITOR_MGR::_LogMonitorPresentEvent(v15, 1LL, (unsigned int)v9, PhysicalMonitor, v20);
  anonymous_namespace_::DetermineIfNeedToChangeActivity(a1, v9);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v17);
  return PhysicalMonitor;
}
