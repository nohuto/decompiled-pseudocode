/*
 * XREFs of DxgkPowerOnOffMonitor @ 0x1404279D4
 * Callers:
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1401FB5C0 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140416310 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DpiGdoDispatchInternalIoctl @ 0x14042BEA0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A8E8 (DpiCheckForOutstandingD3Requests.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14003DDA0 (--1-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@deta.c)
 *     DxgkReportMonitorPowerRapidHpdTriggerEvent @ 0x140046960 (DxgkReportMonitorPowerRapidHpdTriggerEvent.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004BC00 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline @ 0x14007DE18 (Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?MonitorGetUsb4PowerFlushEvent@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_KEVENT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x14026E978 (-MonitorGetUsb4PowerFlushEvent@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_KE.c)
 *     ?MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026EFAC (-MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402C78D0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402CA36C (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiFdoInvalidateChildRelations @ 0x14031DC40 (DpiFdoInvalidateChildRelations.c)
 *     DpiPdoSetDevicePower @ 0x14039C45C (DpiPdoSetDevicePower.c)
 *     DpiPdoSetMonitorDriverInterfaceState @ 0x1403F7F54 (DpiPdoSetMonitorDriverInterfaceState.c)
 *     ?MonitorFlushUsb4PowerOnWorkQueue@@YAXXZ @ 0x1403FA998 (-MonitorFlushUsb4PowerOnWorkQueue@@YAXXZ.c)
 *     ?MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042DE1C (-MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

__int64 __fastcall DxgkPowerOnOffMonitor(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        int *a4,
        char a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v6; // rdi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v7; // r13
  int *v8; // r12
  bool v9; // zf
  __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned int v13; // r15d
  int v15; // ecx
  PVOID v16; // rbx
  int v17; // ecx
  __int64 v18; // rax
  _QWORD *v19; // r8
  _QWORD *v20; // r14
  unsigned int v21; // r13d
  _QWORD *v22; // r15
  __int64 v23; // rcx
  struct _DEVICE_OBJECT *v24; // rcx
  __int64 DeviceExtension; // rbx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r12
  PIRP v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // r14d
  union _LARGE_INTEGER v31; // rax
  __int64 v32; // r12
  unsigned int v33; // ebx
  ULONG v34; // r15d
  NTSTATUS v35; // eax
  int v36; // eax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v37; // rbx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v38; // r14
  _QWORD *v39; // rcx
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // r9
  unsigned int v43; // edi
  _QWORD *v44; // rbx
  PVOID *v45; // rcx
  unsigned int v47; // [rsp+50h] [rbp-99h]
  _QWORD *P; // [rsp+68h] [rbp-81h]
  union _LARGE_INTEGER v52; // [rsp+78h] [rbp-71h]
  int InputBuffer; // [rsp+80h] [rbp-69h] BYREF
  PVOID Object; // [rsp+88h] [rbp-61h] BYREF
  _DWORD *v55; // [rsp+90h] [rbp-59h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+98h] [rbp-51h]
  union _LARGE_INTEGER v57; // [rsp+A0h] [rbp-49h] BYREF
  struct _KEVENT Event; // [rsp+A8h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-29h] BYREF
  __int128 v60; // [rsp+D0h] [rbp-19h] BYREF

  v6 = *(_QWORD *)(a1 + 64);
  v7 = a6;
  v60 = 0LL;
  v8 = a4;
  v9 = *(_DWORD *)(v6 + 3620) == -1;
  v55 = a3;
  v11 = a1;
  LODWORD(v12) = 0;
  v13 = 0;
  v47 = 0;
  P = 0LL;
  WaitBlockArray = 0LL;
  if ( !v9 )
    KeWaitForSingleObject(&::Event, Executive, 0, 0, 0LL);
  if ( *v8 <= 1 )
  {
    if ( !(unsigned int)Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline() )
      MonitorFlushUsb4PowerOnWorkQueue();
    a5 = 1;
  }
  else
  {
    DisplayLogSetMonitorPowerStage(a6, 1LL, 0LL, &v60);
    LODWORD(v12) = DpiAcquireCoreSyncAccessSafe(v11, 1);
    if ( (int)v12 >= 0 )
    {
      DxgkReportMonitorPowerRapidHpdTriggerEvent(*(_QWORD *)(v6 + 4032), 1u);
      MonitorEnableDisableMonitor(*(_QWORD *)(v6 + 4032), a2, v55, 0LL);
      DpiReleaseCoreSyncAccessSafe(v11, 1);
    }
    DisplayLogSetMonitorPowerStage(a6, 2147483649LL, (unsigned int)v12, &v60);
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v6 + 484) )
    DpiCheckForOutstandingD3Requests(v6);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
  v15 = *(_DWORD *)(v6 + 236);
  if ( v15 != 2 && (*(_DWORD *)(v6 + 240) != 2 || ((v15 - 3) & 0xFFFFFFFC) != 0 || v15 == 4) )
  {
    if ( *(_BYTE *)(v6 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
    KeLeaveCriticalRegion();
    goto LABEL_90;
  }
  if ( !(unsigned int)Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_33;
  MonitorGetUsb4PowerFlushEvent(&Object, *(_QWORD *)(v6 + 4032));
  v16 = Object;
  if ( !Object )
    goto LABEL_32;
  if ( *(_BYTE *)(v6 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
  KeLeaveCriticalRegion();
  KeWaitForSingleObject(v16, Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v6 + 484) )
    DpiCheckForOutstandingD3Requests(v6);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
  v17 = *(_DWORD *)(v6 + 236);
  if ( v17 == 2 || *(_DWORD *)(v6 + 240) == 2 && ((v17 - 3) & 0xFFFFFFFC) == 0 && v17 != 4 )
  {
LABEL_32:
    wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>((DxgkCompositionObject **)&Object);
    v11 = a1;
LABEL_33:
    if ( *(_BYTE *)(v6 + 3649) && *v8 == 1 )
    {
      DisplayLogSetMonitorPowerStage(a6, 2LL, 0LL, &v60);
      DpiFdoInvalidateChildRelations(v11, 6u, (__int128 *)a6);
      DisplayLogSetMonitorPowerStage(a6, 2147483650LL, 0LL, &v60);
    }
    DisplayLogSetMonitorPowerStage(a6, 4LL, 0LL, &v60);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v6 + 3440), 1u);
    if ( a5 )
    {
      v18 = *(unsigned int *)(v6 + 3800);
      if ( (_DWORD)v18 )
      {
        P = (_QWORD *)ExAllocatePool2(64LL, 56 * v18, 1953656900LL);
        if ( !P )
        {
          WdLogSingleEntry1(6LL, 0LL);
          WdLogGlobalForLineNumber = 12087;
        }
        WaitBlockArray = (PKWAIT_BLOCK)&P[*(unsigned int *)(v6 + 3800)];
      }
    }
    v19 = (_QWORD *)(v6 + 3600);
    v20 = *(_QWORD **)(v6 + 3600);
    if ( v20 != (_QWORD *)(v6 + 3600) )
    {
      v21 = 0;
      do
      {
        v22 = v20 - 4;
        v20 = (_QWORD *)*v20;
        if ( *(_DWORD *)v22 == 1 )
        {
          if ( *v55 == -1 )
            goto LABEL_49;
          v23 = 0LL;
          if ( a2 )
          {
            do
            {
              if ( v55[v23] == *((_DWORD *)v22 + 6) )
                break;
              v23 = (unsigned int)(v23 + 1);
            }
            while ( (unsigned int)v23 < a2 );
            if ( (unsigned int)v23 < a2 )
            {
LABEL_49:
              v24 = (struct _DEVICE_OBJECT *)v22[6];
              if ( v24 )
              {
                DeviceExtension = (__int64)v24->DeviceExtension;
                AttachedDeviceReference = IoGetAttachedDeviceReference(v24);
                if ( AttachedDeviceReference )
                {
                  memset(&Event, 0, sizeof(Event));
                  IoStatusBlock = 0LL;
                  KeInitializeEvent(&Event, NotificationEvent, 0);
                  InputBuffer = *a4;
                  v27 = IoBuildDeviceIoControlRequest(
                          0x23242Fu,
                          AttachedDeviceReference,
                          &InputBuffer,
                          4u,
                          0LL,
                          0,
                          1u,
                          &Event,
                          &IoStatusBlock);
                  if ( v27 )
                  {
                    v27->IoStatus.Status = -1073741637;
                    LODWORD(v12) = IofCallDriver(AttachedDeviceReference, v27);
                    if ( (_DWORD)v12 == 259 )
                    {
                      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                      LODWORD(v12) = IoStatusBlock.Status;
                    }
                    if ( (int)v12 < 0 )
                    {
                      KeEnterCriticalRegion();
                      if ( *(_BYTE *)(DeviceExtension + 484) )
                        DpiCheckForOutstandingD3Requests(DeviceExtension);
                      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
                      LODWORD(v12) = DpiPdoSetDevicePower(v22[6], *a4, 0);
                      if ( *(_BYTE *)(DeviceExtension + 484) )
                        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
                      ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
                      KeLeaveCriticalRegion();
                    }
                    else if ( P )
                    {
                      ObfReferenceObject(*(PVOID *)(DeviceExtension + 24));
                      if ( *a4 == 1 )
                        v28 = DeviceExtension + 1008;
                      else
                        v28 = DeviceExtension + 984;
                      v29 = v21++;
                      P[v29] = v28;
                    }
                  }
                  else
                  {
                    LODWORD(v12) = -1073741670;
                    WdLogSingleEntry1(6LL, -1073741670LL);
                    WdLogGlobalForLineNumber = 12242;
                  }
                  ObfDereferenceObject(AttachedDeviceReference);
                }
                else
                {
                  LODWORD(v12) = -1073741823;
                  WdLogSingleEntry1(2LL, -1073741823LL);
                  WdLogGlobalForLineNumber = 12259;
                }
                v8 = a4;
                v19 = (_QWORD *)(v6 + 3600);
              }
              *((_DWORD *)v22 + 17) = *v8;
            }
          }
        }
      }
      while ( v20 != v19 );
      v47 = v21;
      v13 = v21;
      v7 = a6;
    }
    ExReleaseResourceLite((PERESOURCE)(v6 + 3440));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
    KeLeaveCriticalRegion();
    if ( v13 )
    {
      v30 = 10;
      v31.QuadPart = -1000000LL * v13;
      v52 = v31;
LABEL_76:
      v32 = 0LL;
      v33 = v13;
      --v30;
      while ( 1 )
      {
        v57 = v31;
        v34 = v33;
        if ( v33 > 0x40 )
          v34 = 64;
        v35 = KeWaitForMultipleObjects(v34, (PVOID *)&P[v32], WaitAll, Executive, 0, 0, &v57, WaitBlockArray);
        v12 = v35;
        if ( v35 == 258 )
        {
          if ( v30 )
          {
            WdLogSingleEntry1(3LL, 258LL);
            WdLogGlobalForLineNumber = 12329;
          }
          else
          {
            WdLogSingleEntry1(2LL, 258LL);
            WdLogGlobalForLineNumber = 12341;
          }
        }
        else if ( v35 )
        {
          DisplayLogSetMonitorPowerStage(v7, 2147483652LL, (unsigned int)v35, &v60);
          WdLogSingleEntry1(2LL, v12);
          v8 = a4;
          WdLogGlobalForLineNumber = 12350;
          goto LABEL_109;
        }
        v31 = v52;
        v32 = v34 + (unsigned int)v32;
        v33 -= v34;
        if ( !v33 )
        {
          if ( (_DWORD)v12 != 258 || (v13 = v47, !v30) )
          {
            v8 = a4;
            break;
          }
          goto LABEL_76;
        }
      }
    }
    DisplayLogSetMonitorPowerStage(v7, 2147483652LL, (unsigned int)v12, &v60);
    goto LABEL_89;
  }
  if ( *(_BYTE *)(v6 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
  KeLeaveCriticalRegion();
  wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>((DxgkCompositionObject **)&Object);
LABEL_89:
  v11 = a1;
LABEL_90:
  if ( *v8 == 1 )
  {
    DisplayLogSetMonitorPowerStage(v7, 8LL, 0LL, &v60);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiCheckForOutstandingD3Requests(v6);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v6 + 3440), 1u);
    v36 = DpiAcquireCoreSyncAccessSafe(v11, 1);
    LODWORD(v12) = v36;
    if ( v36 < 0 )
    {
      WdLogSingleEntry1(4LL, v36);
      WdLogGlobalForLineNumber = 12493;
    }
    else
    {
      v37 = *(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY **)(v6 + 3600);
      while ( v37 != (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v6 + 3600) )
      {
        v38 = v37;
        v37 = *(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY **)v37;
        if ( IsInternalVideoOutput(*(v38 - 7)) && !*((_BYTE *)v38 + 34) )
        {
          MonitorRemovePhysicalMonitor(*(char **)(v6 + 4032), *((unsigned int *)v38 - 2), 0LL, 0LL, v7);
          v39 = (_QWORD *)*((_QWORD *)v38 + 2);
          if ( v39 )
          {
            v40 = v39[8];
            if ( v40 )
            {
              if ( *(_BYTE *)(v40 + 944) )
              {
                v41 = DpiPdoSetMonitorDriverInterfaceState(v39, 0);
                LODWORD(v12) = v41;
                if ( v41 < 0 )
                {
                  WdLogSingleEntry1(3LL, v41);
                  WdLogGlobalForLineNumber = 12451;
                }
              }
            }
          }
        }
      }
      DxgkReportMonitorPowerRapidHpdTriggerEvent(*(_QWORD *)(v6 + 4032), 0);
      LOBYTE(v42) = 1;
      MonitorEnableDisableMonitor(*(_QWORD *)(v6 + 4032), a2, v55, v42);
      DpiReleaseCoreSyncAccessSafe(a1, 1);
    }
    DisplayLogSetMonitorPowerStage(v7, 2147483656LL, (unsigned int)v12, &v60);
    ExReleaseResourceLite((PERESOURCE)(v6 + 3440));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
    KeLeaveCriticalRegion();
  }
LABEL_109:
  if ( P )
  {
    v43 = v47;
    if ( v47 )
    {
      v44 = &P[v47];
      do
      {
        v45 = (PVOID *)(*--v44 - 984LL);
        if ( *v8 != 1 )
          v45 = (PVOID *)(*v44 - 960LL);
        ObfDereferenceObject(*v45);
        --v43;
      }
      while ( v43 );
    }
    ExFreePoolWithTag(P, 0);
  }
  return (unsigned int)v12;
}
