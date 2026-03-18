/*
 * XREFs of ?_ReleaseAllPoFxResources@MONITOR_MGR@@QEAAXXZ @ 0x14027503C
 * Callers:
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x14019360C (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x140032B30 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ??1?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@XZ @ 0x1400356FC (--1-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x140035774 (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ?Assign@MONITOR_REF_ACCESSOR@@QEAAXPEAVDXGMONITOR@@@Z @ 0x140038288 (-Assign@MONITOR_REF_ACCESSOR@@QEAAXPEAVDXGMONITOR@@@Z.c)
 *     ??0?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z @ 0x14005FD74 (--0-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z.c)
 *     ??1?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ @ 0x14005FD98 (--1-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z @ 0x14042E7C4 (-DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z.c)
 */

void __fastcall MONITOR_MGR::_ReleaseAllPoFxResources(MONITOR_MGR *this)
{
  MONITOR_MGR *v2; // rax
  struct DXGMONITOR *v3; // rdx
  MUTEX_LOCK *i; // rcx
  __int64 v5; // rdi
  DxgMonitor::MonitorUsb4State *v6; // rcx
  MONITOR_MGR *v7; // rax
  struct DXGMONITOR *v8; // rdx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  char v12; // [rsp+58h] [rbp+10h] BYREF

  MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v9, 0LL);
  MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)&v11, (__int64)this);
  v2 = (MONITOR_MGR *)*((_QWORD *)this + 5);
  if ( v2 == (MONITOR_MGR *)((char *)this + 40) )
  {
    v3 = 0LL;
  }
  else
  {
    v3 = (MONITOR_MGR *)((char *)v2 - 152);
    if ( !v2 )
      v3 = 0LL;
  }
  MONITOR_REF_ACCESSOR::Assign((MONITOR_REF_ACCESSOR *)v9, v3);
  for ( i = (MUTEX_LOCK *)&v11; ; i = (MUTEX_LOCK *)&v12 )
  {
    MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>(i);
    v5 = v10;
    if ( !v10 )
      break;
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v11, v10, 1);
    v6 = *(DxgMonitor::MonitorUsb4State **)(v5 + 264);
    if ( *((_BYTE *)v6 + 8) )
      DxgMonitor::MonitorUsb4State::DestroyPowerConnectionWithUsb4Stack(v6, 0);
    RESOURCE_LOCK<DXGMONITOR>::~RESOURCE_LOCK<DXGMONITOR>(&v11);
    MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)&v12, (__int64)this);
    v7 = *(MONITOR_MGR **)(v5 + 152);
    if ( v7 == (MONITOR_MGR *)((char *)this + 40) )
    {
      v8 = 0LL;
    }
    else
    {
      v8 = (MONITOR_MGR *)((char *)v7 - 152);
      if ( !v7 )
        v8 = 0LL;
    }
    MONITOR_REF_ACCESSOR::Assign((MONITOR_REF_ACCESSOR *)v9, v8);
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v9);
}
