/*
 * XREFs of ?MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z @ 0x140353960
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1402BE410 (DpiPdoDispatchPnp.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1404092C8 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140032BB8 (--0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140032C94 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x140032CC8 (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ??0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140034D20 (--0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140035774 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ??4MONITOR_REF_ACCESSOR@@QEAAAEAV0@AEBV0@@Z @ 0x140051934 (--4MONITOR_REF_ACCESSOR@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140183B00 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CB2B0 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CB7E4 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?_FlushPendingCreation@MONITOR_MGR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403537A4 (-_FlushPendingCreation@MONITOR_MGR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z @ 0x140353840 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEBAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x140353E40 (-_GetMonitorDiagInfo@DXGMONITOR@@QEBAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140354008 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x140355118 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 */

__int64 __fastcall MonitorNotifyDeviceNodeReady(PERESOURCE *this, unsigned int a2, struct _DEVICE_OBJECT *a3)
{
  __int64 v3; // r13
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  MONITOR_MGR *Blink; // r15
  int MonitorInstance; // eax
  DXGMONITOR *v15; // rdi
  int v16; // ebx
  DXGMONITOR *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r14d
  DXGMONITOR *v23; // rcx
  DXGMONITOR *v24; // rbx
  void *v25; // [rsp+30h] [rbp-D0h] BYREF
  DXGMONITOR *v26; // [rsp+38h] [rbp-C8h]
  void *v27; // [rsp+40h] [rbp-C0h] BYREF
  DXGMONITOR *v28; // [rsp+48h] [rbp-B8h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v29; // [rsp+50h] [rbp-B0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v30; // [rsp+58h] [rbp-A8h] BYREF
  DXGMONITOR *v31; // [rsp+60h] [rbp-A0h] BYREF
  void *v32; // [rsp+68h] [rbp-98h] BYREF
  DXGMONITOR *v33; // [rsp+70h] [rbp-90h]
  _OWORD v34[2]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v35[24]; // [rsp+98h] [rbp-68h] BYREF
  GUID ActivityId; // [rsp+B0h] [rbp-50h] BYREF
  void **v37; // [rsp+C0h] [rbp-40h] BYREF
  char *v38; // [rsp+C8h] [rbp-38h]
  _BYTE v39[96]; // [rsp+D0h] [rbp-30h] BYREF
  int v40; // [rsp+130h] [rbp+30h]
  void *retaddr; // [rsp+188h] [rbp+88h]

  v3 = a2;
  LOBYTE(v29) = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 8u, 0, &v30, (unsigned __int8 *)&v29);
  v6 = v30;
  v11 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  *(_QWORD *)(v11 + 24) = v3;
  *(_QWORD *)(v11 + 32) = this;
  WdLogGlobalForLineNumber = 1786;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1795;
  }
  if ( !this[390] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1796;
  }
  Blink = (MONITOR_MGR *)this[390][1].SystemResourcesList.Blink;
  if ( !Blink )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 1806;
    if ( (_BYTE)v29 )
      DisplayScenarioContextDissociate(&v30);
    return 3221225485LL;
  }
  v27 = retaddr;
  v28 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v27);
  v25 = retaddr;
  v26 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v25);
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(Blink, v3, 0, (struct MONITOR_REF_ACCESSOR *)&v27);
  v15 = v28;
  v16 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( v28 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1838;
    }
    if ( v16 != -1073741275 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1839;
    }
  }
  else
  {
    if ( !v28 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1821;
    }
    if ( *((_DWORD *)v15 + 70) == 1 )
    {
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v25);
      v17 = v15;
      v15 = 0LL;
      v25 = v27;
      v28 = 0LL;
      v26 = v17;
      goto LABEL_20;
    }
    MONITOR_REF_ACCESSOR::operator=((MONITOR_REF_ACCESSOR *)&v25, (__int64)v15 + 288);
  }
  v17 = v26;
LABEL_20:
  if ( !v17 )
  {
    WdLogSingleEntry1(7LL, v3);
    WdLogGlobalForLineNumber = 1917;
    goto LABEL_43;
  }
  if ( *(struct _DEVICE_OBJECT **)(*((_QWORD *)v17 + 25) + 8LL) != a3 )
  {
    WdLogSingleEntry1(7LL, v3);
    WdLogGlobalForLineNumber = 1856;
LABEL_43:
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v25);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v27);
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v29);
    return 3221226021LL;
  }
  v37 = &MonitorEventDeferral::`vftable';
  memset(v39, 0, sizeof(v39));
  v40 = 0;
  v38 = (char *)Blink + 8;
  v31 = v17;
  MonitorResourceLock::AcquireExclusive((PERESOURCE)((char *)v17 + 40));
  v18 = 2LL;
  v32 = retaddr;
  v19 = 2LL;
  do
  {
    v33 = v26;
    --v19;
  }
  while ( v19 );
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v32);
  v22 = DXGMONITOR::_OnMonitorDeviceNodeReady(v17, (struct DxgMonitor::IMonitorDeferredEventSource *)&v37, v20, v21);
  ExReleaseResourceLite((PERESOURCE)((char *)v17 + 40));
  KeLeaveCriticalRegion();
  v31 = 0LL;
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v32);
  if ( v31 )
  {
    ExReleaseResourceLite((PERESOURCE)((char *)v31 + 40));
    KeLeaveCriticalRegion();
  }
  MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)&v37, v6);
  MONITOR_MGR::_FlushPendingCreation(Blink, (const struct MONITOR_REF_ACCESSOR *)&v25, v6);
  if ( v22 >= 0 && v15 )
  {
    MONITOR_REF_LOCK_ACCESSOR::MONITOR_REF_LOCK_ACCESSOR(
      (MONITOR_REF_LOCK_ACCESSOR *)&v31,
      (const struct MONITOR_REF_ACCESSOR *)&v27);
    CONST_MONITOR_REF_LOCK_ACCESSOR::CONST_MONITOR_REF_LOCK_ACCESSOR(
      (CONST_MONITOR_REF_LOCK_ACCESSOR *)v35,
      (const struct MONITOR_REF_ACCESSOR *)&v25);
    DXGMONITOR::_CopyMonitorInformation(v31, (const struct MONITOR_REF_ACCESSOR *)&v25);
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v35);
    MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)&v31);
  }
  v23 = v26;
  v31 = v26;
  v24 = v26;
  memset(v34, 0, sizeof(v34));
  if ( v26 )
  {
    MonitorResourceLock::AcquireShared((PERESOURCE)((char *)v26 + 40));
    v23 = v26;
  }
  v32 = retaddr;
  do
  {
    v33 = v23;
    --v18;
  }
  while ( v18 );
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v32);
  DXGMONITOR::_GetMonitorDiagInfo(v24, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v34);
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v31);
  MONITOR_MGR::_LogMonitorPresentEvent(Blink, 7LL, (unsigned int)v3, (unsigned int)v22, v34);
  v37 = &MonitorEventDeferral::`vftable';
  if ( v40 && v38 )
    MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)&v37, 0LL);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v25);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v27);
  if ( (_BYTE)v29 )
    DisplayScenarioContextDissociate(&v30);
  return (unsigned int)v22;
}
