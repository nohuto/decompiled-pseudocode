/*
 * XREFs of ??1MONITOR_MGR@@UEAA@XZ @ 0x140272CE4
 * Callers:
 *     ??_EMONITOR_MGR@@UEAAPEAXI@Z @ 0x140091160 (--_EMONITOR_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@AEBV0@@Z @ 0x140032C2C (--0MONITOR_REF_ACCESSOR@@QEAA@AEBV0@@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003551C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x140035774 (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1400515F8 (-_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14005D990 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@VUSB4_POWERON_WORK_QUEUE@@U?$default_delete@VUSB4_POWERON_WORK_QUEUE@@@wistd@@@wistd@@QEAAXPEAVUSB4_POWERON_WORK_QUEUE@@@Z @ 0x14009148C (-reset@-$unique_ptr@VUSB4_POWERON_WORK_QUEUE@@U-$default_delete@VUSB4_POWERON_WORK_QUEUE@@@wistd.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140273A10 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403C3534 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_.c)
 */

void __fastcall MONITOR_MGR::~MONITOR_MGR(MONITOR_MGR *this)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD **v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  struct DXGMONITOR *v10; // rdx
  MONITOR_REF_ACCESSOR *v11; // rdx
  _QWORD **v12; // rsi
  _QWORD *v13; // rdi
  _QWORD *v14; // rax
  struct _KEVENT *v15; // rcx
  _BYTE v16[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v17; // [rsp+28h] [rbp-28h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v18[2]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v19[16]; // [rsp+40h] [rbp-10h] BYREF

  *(_QWORD *)this = &MONITOR_MGR::`vftable'{for `DxgMonitor::IMonitorAdapterInterface'};
  LOBYTE(v18[0]) = 0;
  *((_QWORD *)this + 1) = &MONITOR_MGR::`vftable'{for `DxgMonitor::IMonitorEventSource'};
  CDisplayScenarioContextScope::ContextScopeConstructor(v18, 0LL, 0x18u, 0);
  v2 = v18[1];
  v7 = (_QWORD **)((char *)this + 40);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v4, v3, v5, v6) + 24) = this;
  WdLogGlobalForLineNumber = 187;
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == v7 )
      break;
    if ( (_QWORD **)v8[1] != v7 || (v9 = (_QWORD *)*v8, *(_QWORD **)(*v8 + 8LL) != v8) )
LABEL_18:
      __fastfail(3u);
    *v7 = v9;
    v10 = (struct DXGMONITOR *)(v8 - 19);
    v9[1] = v7;
    if ( !v8 )
      v10 = 0LL;
    MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v16, v10);
    if ( *(_DWORD *)(v17 + 280) == 1 )
    {
      MONITOR_MGR::_DestroyPhysicalMonitor(this, (const struct MONITOR_REF_ACCESSOR *)v16, v2);
    }
    else
    {
      if ( *(_QWORD *)(v17 + 296) )
      {
        MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR(
          (MONITOR_REF_ACCESSOR *)v19,
          (const struct MONITOR_REF_ACCESSOR *)(v17 + 288));
        MONITOR_REF_ACCESSOR::Release(v11);
        MONITOR_MGR::_DestroyPhysicalMonitor(this, (const struct MONITOR_REF_ACCESSOR *)v19, v2);
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v19);
      }
      MONITOR_MGR::_DestroySimulatedMonitor(this, (const struct MONITOR_REF_ACCESSOR *)v16);
    }
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v16);
  }
  v12 = (_QWORD **)((char *)this + 72);
  while ( 1 )
  {
    v13 = *v12;
    if ( *v12 == v12 )
      break;
    if ( (_QWORD **)v13[1] != v12 )
      goto LABEL_18;
    v14 = (_QWORD *)*v13;
    if ( *(_QWORD **)(*v13 + 8LL) != v13 )
      goto LABEL_18;
    *v12 = v14;
    v14[1] = v12;
    WdLogSingleEntry2(2LL, v13[2], v13[3]);
    WdLogGlobalForLineNumber = 255;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v13);
  }
  v15 = (struct _KEVENT *)*((_QWORD *)this + 86);
  if ( v15 )
  {
    KeSetEvent(v15 + 1, 0, 0);
    MONITOR_MGR::_ReleaseMonitorPendingEvent(*((struct _MONITOR_PENDING_EVENT **)this + 86));
    *((_QWORD *)this + 86) = 0LL;
  }
  if ( *((MONITOR_MGR **)this + 7) != (MONITOR_MGR *)((char *)this + 56) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 299;
  }
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v18);
  DXGFASTMUTEX::~DXGFASTMUTEX((MONITOR_MGR *)((char *)this + 152));
  DXGFASTMUTEX::~DXGFASTMUTEX((MONITOR_MGR *)((char *)this + 104));
  wistd::unique_ptr<USB4_POWERON_WORK_QUEUE,wistd::default_delete<USB4_POWERON_WORK_QUEUE>>::reset(
    (USB4_POWERON_WORK_QUEUE **)this + 12,
    0LL);
}
