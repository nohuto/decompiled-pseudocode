/*
 * XREFs of ?_MonitorOnOffTelemetry@MONITOR_MGR@@QEAAXAEBU_GUID@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1403C3988
 * Callers:
 *     ?LogMonitorOnOffTelemetry@@YAJAEBU_GUID@@PEAVDXGADAPTER@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1403C3800 (-LogMonitorOnOffTelemetry@@YAJAEBU_GUID@@PEAVDXGADAPTER@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x140032BF8 (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ??0?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z @ 0x14005FD74 (--0-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z.c)
 *     ??1?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ @ 0x14005FD98 (--1-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402E1D74 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1403C3B90 (-LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 */

void __fastcall MONITOR_MGR::_MonitorOnOffTelemetry(__int64 a1, __int64 a2, char a3)
{
  _QWORD **v6; // r14
  __int64 v7; // rax
  _QWORD **v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r9
  void *v11; // rsi
  _QWORD **v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  _QWORD **v15; // rax
  void *v16; // [rsp+20h] [rbp-40h] BYREF
  _QWORD **v17; // [rsp+28h] [rbp-38h]
  void *v18; // [rsp+30h] [rbp-30h] BYREF
  _QWORD **v19; // [rsp+38h] [rbp-28h]
  _QWORD **v20; // [rsp+40h] [rbp-20h]
  _QWORD v21[3]; // [rsp+48h] [rbp-18h] BYREF
  void *retaddr; // [rsp+98h] [rbp+38h]
  char v23; // [rsp+A0h] [rbp+40h] BYREF
  char v24; // [rsp+B8h] [rbp+58h] BYREF

  v16 = retaddr;
  v17 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v16);
  MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)&v23, a1);
  v6 = (_QWORD **)(a1 + 40);
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 == a1 + 40 )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = (_QWORD **)(v7 - 152);
    if ( !v7 )
      v8 = 0LL;
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v16);
  v17 = v8;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v16);
  MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)&v23);
  while ( v8 )
  {
    v20 = v8;
    MonitorResourceLock::AcquireExclusive((PERESOURCE)(v8 + 5));
    v21[0] = retaddr;
    v9 = 2LL;
    do
    {
      v21[1] = v8;
      --v9;
    }
    while ( v9 );
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v21);
    LOBYTE(v10) = a3;
    DXGMONITOR::LogMonitorObjectOnOffState(v8, a2, 0LL, v10);
    ExReleaseResourceLite((PERESOURCE)(v8 + 5));
    KeLeaveCriticalRegion();
    v20 = 0LL;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v21);
    if ( v20 )
    {
      ExReleaseResourceLite((PERESOURCE)(v20 + 5));
      KeLeaveCriticalRegion();
    }
    v11 = retaddr;
    v12 = 0LL;
    v18 = retaddr;
    v19 = 0LL;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v18);
    MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)&v24, a1);
    v13 = *v6;
    if ( *v6 != v6 )
    {
      v14 = v8 + 19;
      while ( v13 != v14 )
      {
        if ( v6 == v13 )
          goto LABEL_14;
        v13 = (_QWORD *)*v13;
      }
      v15 = (_QWORD **)*v14;
      if ( (_QWORD **)*v14 != v6 )
      {
        v12 = v15 - 19;
        if ( !v15 )
          v12 = 0LL;
      }
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v18);
      v19 = v12;
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v18);
      v11 = v18;
    }
LABEL_14:
    MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)&v24);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v16);
    v16 = v11;
    v8 = v12;
    v19 = 0LL;
    v17 = v12;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v18);
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v16);
}
