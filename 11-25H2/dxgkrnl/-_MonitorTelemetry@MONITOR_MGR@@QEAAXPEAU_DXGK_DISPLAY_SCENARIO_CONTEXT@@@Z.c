/*
 * XREFs of ?_MonitorTelemetry@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403513D0
 * Callers:
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403F1450 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140032C94 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ??4MONITOR_REF_ACCESSOR@@QEAAAEAV0@AEBV0@@Z @ 0x140051934 (--4MONITOR_REF_ACCESSOR@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z @ 0x14005F4BC (--0-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z.c)
 *     ??1?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ @ 0x14005F4E0 (--1-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CB7E4 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140352330 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 */

void __fastcall MONITOR_MGR::_MonitorTelemetry(MONITOR_MGR *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  MONITOR_MGR *v4; // rax
  char *v5; // rbx
  char *v6; // rdi
  __int64 v7; // rax
  MONITOR_MGR *v8; // rax
  void *v9; // [rsp+50h] [rbp-9h] BYREF
  char *v10; // [rsp+58h] [rbp-1h]
  void *v11; // [rsp+60h] [rbp+7h] BYREF
  char *v12; // [rsp+68h] [rbp+Fh]
  char *v13; // [rsp+70h] [rbp+17h] BYREF
  _QWORD v14[3]; // [rsp+78h] [rbp+1Fh] BYREF
  void *retaddr; // [rsp+B8h] [rbp+5Fh]
  char v16; // [rsp+C0h] [rbp+67h] BYREF
  char v17; // [rsp+D0h] [rbp+77h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 3) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5043;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"_GetAdapter()->IsCoreResourceSharedOwner()",
      5043LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = retaddr;
  v10 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v9);
  MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)&v16, (__int64)this);
  v4 = (MONITOR_MGR *)*((_QWORD *)this + 5);
  if ( v4 == (MONITOR_MGR *)((char *)this + 40) )
  {
    v5 = 0LL;
  }
  else
  {
    v5 = (char *)v4 - 152;
    if ( !v4 )
      v5 = 0LL;
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v9);
  v10 = v5;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v9);
  MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)&v16);
  while ( v5 )
  {
    v11 = retaddr;
    v6 = v5;
    v12 = v5;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v11);
    if ( *((_DWORD *)v5 + 70) != 1 && *((_QWORD *)v5 + 37) )
    {
      MONITOR_REF_ACCESSOR::operator=((MONITOR_REF_ACCESSOR *)&v11, (__int64)(v5 + 288));
      v6 = v12;
    }
    v13 = v6;
    if ( v6 )
      MonitorResourceLock::AcquireShared((PERESOURCE)(v6 + 40));
    v14[0] = retaddr;
    v7 = 2LL;
    do
    {
      v14[1] = v6;
      --v7;
    }
    while ( v7 );
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v14);
    DXGMONITOR::TriggerMonitorTelemetry(v6 + 16, 2LL, a2);
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v13);
    MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)&v17, (__int64)this);
    v8 = (MONITOR_MGR *)*((_QWORD *)v5 + 19);
    if ( v8 == (MONITOR_MGR *)((char *)this + 40) )
    {
      v5 = 0LL;
    }
    else
    {
      v5 = (char *)v8 - 152;
      if ( !v8 )
        v5 = 0LL;
    }
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v9);
    v10 = v5;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v9);
    MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)&v17);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v11);
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v9);
}
