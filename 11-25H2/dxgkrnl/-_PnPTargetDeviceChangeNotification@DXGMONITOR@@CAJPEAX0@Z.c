/*
 * XREFs of ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x14026F500
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14001EE2C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x140032C00 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400354D0 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@XZ @ 0x1400357A0 (--1-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x140035818 (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x140060F7C (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026F444 (-_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?HandleDeviceRemoveCancelled@MonitorPnpState@DxgMonitor@@QEAAXXZ @ 0x140272254 (-HandleDeviceRemoveCancelled@MonitorPnpState@DxgMonitor@@QEAAXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CB2B0 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x140355118 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1403EA6E0 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 */

__int64 __fastcall DXGMONITOR::_PnPTargetDeviceChangeNotification(
        char *NotificationStructure,
        struct _DEVICE_OBJECT *Context)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  int v10; // eax
  struct DXGADAPTER *v12; // rdi
  __int64 v13; // r15
  unsigned int v14; // r8d
  unsigned int v15; // r13d
  int v16; // eax
  MONITOR_MGR *v17; // r12
  __int64 v18; // rdi
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r14
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int8 v26; // [rsp+38h] [rbp-D0h]
  unsigned __int64 *v27; // [rsp+40h] [rbp-C8h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v28[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A8h] BYREF
  __int64 InputBuffer; // [rsp+68h] [rbp-A0h]
  struct DXGADAPTER *InputBuffer_8[2]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v33; // [rsp+80h] [rbp-88h]
  __int64 v34; // [rsp+90h] [rbp-78h]
  _BYTE v35[144]; // [rsp+98h] [rbp-70h] BYREF

  v2 = 0;
  LOBYTE(v28[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v28, 0LL, 3u, 0);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = Context;
  *(_QWORD *)(v9 + 32) = NotificationStructure;
  WdLogGlobalForLineNumber = 1920;
  if ( NotificationStructure && Context )
  {
    v34 = 0LL;
    *(_OWORD *)InputBuffer_8 = 0LL;
    v33 = 0LL;
    v10 = DxgkCallDriverIoControl(Context, 0x232407u, InputBuffer_8, 0x28u, InputBuffer_8, 0x28u, v26, v27);
    if ( v10 < 0 )
    {
      WdLogSingleEntry2(3LL, Context, v10);
      WdLogGlobalForLineNumber = 1962;
LABEL_5:
      CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v28);
      return 0LL;
    }
    v12 = InputBuffer_8[0];
    v13 = (unsigned int)v33;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, InputBuffer_8[0], 0LL);
    v15 = v14 + 1;
    v16 = COREADAPTERACCESS::AcquireExclusive((__int64)v35, v14 + 1, v14);
    if ( v16 < 0 )
    {
      if ( v16 != -1073741130 )
      {
        WdLogSingleEntry0(v15);
        WdLogGlobalForLineNumber = 1981;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1984;
      goto LABEL_10;
    }
    if ( !*((_QWORD *)v12 + 390) )
    {
      WdLogSingleEntry0(v15);
      WdLogGlobalForLineNumber = 1989;
    }
    v17 = *(MONITOR_MGR **)(*((_QWORD *)v12 + 390) + 112LL);
    if ( !v17 )
    {
      WdLogSingleEntry0(v15);
      WdLogGlobalForLineNumber = 1996;
    }
    MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)&v30, 0LL);
    if ( MONITOR_MGR::_GetMonitorInstance(v17, v13, v15, (struct MONITOR_REF_ACCESSOR *)&v30) < 0 )
    {
      WdLogSingleEntry1(2LL, v13);
      WdLogGlobalForLineNumber = 2003;
LABEL_17:
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v30);
LABEL_10:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
      goto LABEL_5;
    }
    v18 = InputBuffer;
    if ( !InputBuffer )
    {
      WdLogSingleEntry0(v15);
      WdLogGlobalForLineNumber = 2008;
    }
    if ( *(_DWORD *)(v18 + 280) != v15 )
    {
      WdLogSingleEntry0(v15);
      WdLogGlobalForLineNumber = 2009;
    }
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v29, v18, v15);
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(Context);
    if ( !DeviceAttachmentBaseRef )
    {
      WdLogSingleEntry0(v15);
      WdLogGlobalForLineNumber = 2032;
    }
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    if ( DeviceAttachmentBaseRef != *(PDEVICE_OBJECT *)(*(_QWORD *)(v18 + 200) + 8LL) )
    {
      WdLogSingleEntry1(2LL, v13);
      WdLogGlobalForLineNumber = 2038;
      RESOURCE_LOCK<DXGMONITOR>::~RESOURCE_LOCK<DXGMONITOR>(&v29);
      goto LABEL_17;
    }
    v22 = *(_QWORD *)(NotificationStructure + 4);
    v23 = *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 - v22;
    if ( *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 == v22 )
      v23 = *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4 - *(_QWORD *)(NotificationStructure + 12);
    if ( v23 )
    {
      v24 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 - v22;
      if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 == v22 )
        v24 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4 - *(_QWORD *)(NotificationStructure + 12);
      if ( v24 )
      {
        v25 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 - v22;
        if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 == v22 )
          v25 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4 - *(_QWORD *)(NotificationStructure + 12);
        if ( v25 )
        {
          v2 = -1073741811;
        }
        else
        {
          DXGMONITOR::_OnMonitorFunctionDriverDeparture((DxgMonitor::MonitorPnpState **)v18, 0LL, v20, v21);
          MONITOR_MGR::_LogMonitorPresentEvent(v17, 6LL, (unsigned int)v13, 0LL, 0LL);
        }
      }
      else
      {
        MONITOR_MGR::_LogMonitorPresentEvent(v17, 5LL, (unsigned int)v13, 0LL, 0LL);
        DxgMonitor::MonitorPnpState::HandleDeviceRemoveCancelled(*(DxgMonitor::MonitorPnpState **)(v18 + 200));
      }
    }
    else
    {
      MONITOR_MGR::_LogMonitorPresentEvent(v17, 4LL, (unsigned int)v13, 0LL, 0LL);
      wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
        (DxgkCompositionObject **)(*(_QWORD *)(v18 + 200) + 40LL),
        0LL);
    }
    RESOURCE_LOCK<DXGMONITOR>::~RESOURCE_LOCK<DXGMONITOR>(&v29);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v30);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v28);
    return v2;
  }
  else
  {
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v28);
    return 3221225485LL;
  }
}
