/*
 * XREFs of ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1402740A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14000F84C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x140032B30 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003551C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@XZ @ 0x1400356FC (--1-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x140035774 (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DxgkGetDeviceObjectPointerSessionAware @ 0x1400580DC (DxgkGetDeviceObjectPointerSessionAware.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     memcmp @ 0x1400A2520 (memcmp.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140289EA4 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028CA78 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x14028DB88 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402E1840 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1403E3E00 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x1403F29D8 (--1MonitorEventDeferral@@UEAA@XZ.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleMonitorPnPNotification(_QWORD *NotificationStructure, PVOID Context)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  UNICODE_STRING *v14; // rsi
  int DeviceObjectPointerSessionAware; // eax
  int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // r8
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // r8
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r12
  struct DXGADAPTER *v23; // rdi
  __int64 v24; // r15
  int v25; // eax
  int v26; // eax
  MONITOR_MGR *v27; // rdi
  char *v28; // rax
  int MonitorInstance; // eax
  DXGMONITOR *v30; // rbx
  __int64 v31; // rdx
  unsigned int v32; // eax
  unsigned __int8 v34; // [rsp+38h] [rbp-D0h]
  unsigned __int64 *v35; // [rsp+40h] [rbp-C8h]
  _QWORD v36[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-B0h]
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+70h] [rbp-98h] BYREF
  __int64 v41; // [rsp+78h] [rbp-90h] BYREF
  DXGMONITOR *v42; // [rsp+80h] [rbp-88h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v43[2]; // [rsp+88h] [rbp-80h] BYREF
  struct DXGADAPTER *InputBuffer[2]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v45[4]; // [rsp+A8h] [rbp-60h]
  __int64 v46; // [rsp+B8h] [rbp-50h]
  _QWORD v47[14]; // [rsp+C8h] [rbp-40h] BYREF
  int v48; // [rsp+138h] [rbp+30h]
  _BYTE v49[144]; // [rsp+148h] [rbp+40h] BYREF

  LOBYTE(v43[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v43, 0LL, 2u, 0);
  LODWORD(v36[0]) = -1;
  v5 = v43[1];
  v36[1] = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    LOBYTE(v37) = 1;
    LODWORD(v36[0]) = 7061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v3, (__int64)&EventProfilerEnter, v4, 7061);
  }
  else
  {
    LOBYTE(v37) = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)v36, 7061);
  WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  WdLogGlobalForLineNumber = 4198;
  if ( !NotificationStructure )
    goto LABEL_10;
  v10 = *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 - *(_QWORD *)((char *)NotificationStructure + 20);
  if ( *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 == *(_QWORD *)((char *)NotificationStructure + 20) )
    v10 = *(_QWORD *)GUID_DEVINTERFACE_MONITOR_DRIVER.Data4 - *(_QWORD *)((char *)NotificationStructure + 28);
  if ( v10 )
  {
    WdLogSingleEntry1(2LL, (char *)NotificationStructure + 20);
    WdLogGlobalForLineNumber = 4217;
LABEL_10:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v36);
    if ( (_BYTE)v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v36[0]);
    LODWORD(v13) = -1073741811;
    goto LABEL_55;
  }
  v14 = (UNICODE_STRING *)NotificationStructure[5];
  DeviceObject = 0LL;
  Object = 0LL;
  DeviceObjectPointerSessionAware = DxgkGetDeviceObjectPointerSessionAware(v14, 0LL, &Object, &DeviceObject);
  v16 = DeviceObjectPointerSessionAware;
  LODWORD(v13) = -1073741772;
  if ( DeviceObjectPointerSessionAware == -1073741772 )
  {
    WdLogSingleEntry1(7LL, v14->Buffer);
    WdLogGlobalForLineNumber = 4239;
LABEL_16:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v36);
    v19 = (_BYTE)v37 == 0;
LABEL_52:
    if ( !v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v36[0]);
    goto LABEL_55;
  }
  if ( DeviceObjectPointerSessionAware >= 0 )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    v46 = 0LL;
    *(_OWORD *)InputBuffer = 0LL;
    *(_OWORD *)v45 = 0LL;
    v13 = (int)DxgkCallDriverIoControl(DeviceObject, 0x232407u, InputBuffer, 0x28u, InputBuffer, 0x28u, v34, v35);
    ObfDereferenceObject(Object);
    if ( (int)v13 < 0 )
    {
      WdLogSingleEntry2(3LL, v14->Buffer, v13);
      WdLogGlobalForLineNumber = 4300;
      goto LABEL_16;
    }
    v23 = InputBuffer[0];
    v24 = v45[0];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v49, InputBuffer[0], 0LL);
    v25 = memcmp(&GUID_DEVICE_INTERFACE_ARRIVAL, (char *)NotificationStructure + 4, 0x10uLL);
    v26 = COREADAPTERACCESS::AcquireExclusive((__int64)v49, 2 - (unsigned int)(v25 != 0), 0);
    LODWORD(v13) = v26;
    if ( v26 < 0 )
    {
      if ( v26 != -1073741130 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4323;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 4326;
      goto LABEL_51;
    }
    if ( !*((_QWORD *)v23 + 390) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4335;
    }
    v27 = *(MONITOR_MGR **)(*((_QWORD *)v23 + 390) + 112LL);
    if ( !v27 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4337;
    }
    v47[0] = &MonitorEventDeferral::`vftable';
    memset(&v47[2], 0, 0x60uLL);
    v48 = 0;
    if ( v27 )
      v28 = (char *)v27 + 8;
    else
      v28 = 0LL;
    v47[1] = v28;
    MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)&v41, 0LL);
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v27, v24, 1u, (struct MONITOR_REF_ACCESSOR *)&v41);
    LODWORD(v13) = MonitorInstance;
    if ( MonitorInstance < 0 )
    {
      if ( MonitorInstance == -1073741275 )
      {
        WdLogSingleEntry2(3LL, v24, v27);
        LODWORD(v13) = 0;
        WdLogGlobalForLineNumber = 4404;
      }
      else
      {
        WdLogSingleEntry3(2LL, v24, v27, MonitorInstance);
        WdLogGlobalForLineNumber = 4415;
      }
      goto LABEL_50;
    }
    v30 = v42;
    if ( !v42 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4348;
    }
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v40, (__int64)v30, 1);
    if ( *(PDEVICE_OBJECT *)(*((_QWORD *)v30 + 25) + 8LL) == DeviceAttachmentBaseRef )
    {
      v31 = *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 - *(_QWORD *)((char *)NotificationStructure + 4);
      if ( *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 == *(_QWORD *)((char *)NotificationStructure + 4) )
        v31 = *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4 - *(_QWORD *)((char *)NotificationStructure + 12);
      if ( v31 )
      {
        LODWORD(v13) = memcmp(&GUID_DEVICE_INTERFACE_REMOVAL, (char *)NotificationStructure + 4, 0x10uLL) != 0
                     ? 0xC000000D
                     : 0;
        goto LABEL_46;
      }
      v32 = DXGMONITOR::_OnMonitorFunctionDriverArrival(
              v30,
              v14,
              (struct DxgMonitor::IMonitorDeferredEventSource *)v47,
              v5);
      MONITOR_MGR::_LogMonitorPresentEvent(v27, 3LL, (unsigned int)v24, v32, 0LL);
    }
    else
    {
      WdLogSingleEntry1(3LL, v27);
      WdLogGlobalForLineNumber = 4365;
    }
    LODWORD(v13) = 0;
LABEL_46:
    RESOURCE_LOCK<DXGMONITOR>::~RESOURCE_LOCK<DXGMONITOR>(&v40);
LABEL_50:
    MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)v47, v5);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v41);
    MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)v47);
LABEL_51:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v49);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v36);
    v19 = (_BYTE)v37 == 0;
    goto LABEL_52;
  }
  WdLogSingleEntry2(2LL, v14->Buffer, DeviceObjectPointerSessionAware);
  WdLogGlobalForLineNumber = 4249;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v36);
  if ( (_BYTE)v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v36[0]);
  LODWORD(v13) = v16;
LABEL_55:
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v43);
  return (unsigned int)v13;
}
