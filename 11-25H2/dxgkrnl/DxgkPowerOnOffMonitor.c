/*
 * XREFs of DxgkPowerOnOffMonitor @ 0x140427DC4
 * Callers:
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1401F4D10 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DpiGdoDispatchInternalIoctl @ 0x14042A600 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14003E96C (--1-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@deta.c)
 *     DxgkReportMonitorPowerRapidHpdTriggerEvent @ 0x140046E90 (DxgkReportMonitorPowerRapidHpdTriggerEvent.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004C14C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline @ 0x14007D790 (Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?MonitorGetUsb4PowerFlushEvent@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_KEVENT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x140267A18 (-MonitorGetUsb4PowerFlushEvent@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_KE.c)
 *     ?MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026804C (-MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402BA080 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402BD038 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiFdoInvalidateChildRelations @ 0x140375560 (DpiFdoInvalidateChildRelations.c)
 *     DpiPdoSetDevicePower @ 0x1403A573C (DpiPdoSetDevicePower.c)
 *     DpiPdoSetMonitorDriverInterfaceState @ 0x1403FDF54 (DpiPdoSetMonitorDriverInterfaceState.c)
 *     ?MonitorFlushUsb4PowerOnWorkQueue@@YAXXZ @ 0x1404009A8 (-MonitorFlushUsb4PowerOnWorkQueue@@YAXXZ.c)
 *     ?MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042BF30 (-MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
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
  __int64 v18; // r9
  __int64 v19; // rax
  _QWORD *v20; // r8
  _QWORD *v21; // r14
  unsigned int v22; // r13d
  _QWORD *v23; // r15
  __int64 v24; // rcx
  struct _DEVICE_OBJECT *v25; // rcx
  __int64 DeviceExtension; // rbx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r12
  PIRP v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  int v31; // r14d
  union _LARGE_INTEGER v32; // rax
  __int64 v33; // r12
  unsigned int v34; // ebx
  ULONG v35; // r15d
  NTSTATUS v36; // eax
  int v37; // eax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v38; // rbx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v39; // r14
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // rcx
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // r9
  unsigned int v46; // edi
  _QWORD *v47; // rbx
  PVOID *v48; // rcx
  unsigned int v50; // [rsp+50h] [rbp-99h]
  _QWORD *P; // [rsp+68h] [rbp-81h]
  union _LARGE_INTEGER v55; // [rsp+78h] [rbp-71h]
  int InputBuffer; // [rsp+80h] [rbp-69h] BYREF
  PVOID Object; // [rsp+88h] [rbp-61h] BYREF
  _DWORD *v58; // [rsp+90h] [rbp-59h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+98h] [rbp-51h]
  union _LARGE_INTEGER v60; // [rsp+A0h] [rbp-49h] BYREF
  struct _KEVENT Event; // [rsp+A8h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-29h] BYREF
  __int128 v63; // [rsp+D0h] [rbp-19h] BYREF

  v6 = *(_QWORD *)(a1 + 64);
  v7 = a6;
  v63 = 0LL;
  v8 = a4;
  v9 = *(_DWORD *)(v6 + 3620) == -1;
  v58 = a3;
  v11 = a1;
  LODWORD(v12) = 0;
  v13 = 0;
  v50 = 0;
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
    DisplayLogSetMonitorPowerStage(a6, 1LL, 0LL, &v63);
    LODWORD(v12) = DpiAcquireCoreSyncAccessSafe(v11, 1);
    if ( (int)v12 >= 0 )
    {
      DxgkReportMonitorPowerRapidHpdTriggerEvent(*(_QWORD *)(v6 + 4032), 1u);
      MonitorEnableDisableMonitor(*(_QWORD *)(v6 + 4032), a2, v58, 0LL);
      DpiReleaseCoreSyncAccessSafe(v11, 1);
    }
    DisplayLogSetMonitorPowerStage(a6, 2147483649LL, (unsigned int)v12, &v63);
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
      DisplayLogSetMonitorPowerStage(a6, 2LL, 0LL, &v63);
      DpiFdoInvalidateChildRelations(v11, 6u, (__int128 *)a6);
      DisplayLogSetMonitorPowerStage(a6, 2147483650LL, 0LL, &v63);
    }
    DisplayLogSetMonitorPowerStage(a6, 4LL, 0LL, &v63);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v6 + 3440), 1u);
    if ( a5 )
    {
      v19 = *(unsigned int *)(v6 + 3800);
      if ( (_DWORD)v19 )
      {
        P = (_QWORD *)ExAllocatePool2(64LL, 56 * v19, 1953656900LL, v18);
        if ( !P )
        {
          WdLogSingleEntry1(6LL, 0LL);
          WdLogGlobalForLineNumber = 11955;
        }
        WaitBlockArray = (PKWAIT_BLOCK)&P[*(unsigned int *)(v6 + 3800)];
      }
    }
    v20 = (_QWORD *)(v6 + 3600);
    v21 = *(_QWORD **)(v6 + 3600);
    if ( v21 != (_QWORD *)(v6 + 3600) )
    {
      v22 = 0;
      do
      {
        v23 = v21 - 4;
        v21 = (_QWORD *)*v21;
        if ( *(_DWORD *)v23 == 1 )
        {
          if ( *v58 == -1 )
            goto LABEL_49;
          v24 = 0LL;
          if ( a2 )
          {
            do
            {
              if ( v58[v24] == *((_DWORD *)v23 + 6) )
                break;
              v24 = (unsigned int)(v24 + 1);
            }
            while ( (unsigned int)v24 < a2 );
            if ( (unsigned int)v24 < a2 )
            {
LABEL_49:
              v25 = (struct _DEVICE_OBJECT *)v23[6];
              if ( v25 )
              {
                DeviceExtension = (__int64)v25->DeviceExtension;
                AttachedDeviceReference = IoGetAttachedDeviceReference(v25);
                if ( AttachedDeviceReference )
                {
                  memset(&Event, 0, sizeof(Event));
                  IoStatusBlock = 0LL;
                  KeInitializeEvent(&Event, NotificationEvent, 0);
                  InputBuffer = *a4;
                  v28 = IoBuildDeviceIoControlRequest(
                          0x23242Fu,
                          AttachedDeviceReference,
                          &InputBuffer,
                          4u,
                          0LL,
                          0,
                          1u,
                          &Event,
                          &IoStatusBlock);
                  if ( v28 )
                  {
                    v28->IoStatus.Status = -1073741637;
                    LODWORD(v12) = IofCallDriver(AttachedDeviceReference, v28);
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
                      LODWORD(v12) = DpiPdoSetDevicePower(v23[6], *a4, 0);
                      if ( *(_BYTE *)(DeviceExtension + 484) )
                        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
                      ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
                      KeLeaveCriticalRegion();
                    }
                    else if ( P )
                    {
                      ObfReferenceObject(*(PVOID *)(DeviceExtension + 24));
                      if ( *a4 == 1 )
                        v29 = DeviceExtension + 1008;
                      else
                        v29 = DeviceExtension + 984;
                      v30 = v22++;
                      P[v30] = v29;
                    }
                  }
                  else
                  {
                    LODWORD(v12) = -1073741670;
                    WdLogSingleEntry1(6LL, -1073741670LL);
                    WdLogGlobalForLineNumber = 12110;
                  }
                  ObfDereferenceObject(AttachedDeviceReference);
                }
                else
                {
                  LODWORD(v12) = -1073741823;
                  WdLogSingleEntry1(2LL, -1073741823LL);
                  WdLogGlobalForLineNumber = 12127;
                }
                v8 = a4;
                v20 = (_QWORD *)(v6 + 3600);
              }
              *((_DWORD *)v23 + 17) = *v8;
            }
          }
        }
      }
      while ( v21 != v20 );
      v50 = v22;
      v13 = v22;
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
      v31 = 10;
      v32.QuadPart = -1000000LL * v13;
      v55 = v32;
LABEL_76:
      v33 = 0LL;
      v34 = v13;
      --v31;
      while ( 1 )
      {
        v60 = v32;
        v35 = v34;
        if ( v34 > 0x40 )
          v35 = 64;
        v36 = KeWaitForMultipleObjects(v35, (PVOID *)&P[v33], WaitAll, Executive, 0, 0, &v60, WaitBlockArray);
        v12 = v36;
        if ( v36 == 258 )
        {
          if ( v31 )
          {
            WdLogSingleEntry1(3LL, 258LL);
            WdLogGlobalForLineNumber = 12197;
          }
          else
          {
            WdLogSingleEntry1(2LL, 258LL);
            WdLogGlobalForLineNumber = 12209;
          }
        }
        else if ( v36 )
        {
          DisplayLogSetMonitorPowerStage(v7, 2147483652LL, (unsigned int)v36, &v63);
          WdLogSingleEntry1(2LL, v12);
          v8 = a4;
          WdLogGlobalForLineNumber = 12218;
          goto LABEL_109;
        }
        v32 = v55;
        v33 = v35 + (unsigned int)v33;
        v34 -= v35;
        if ( !v34 )
        {
          if ( (_DWORD)v12 != 258 || (v13 = v50, !v31) )
          {
            v8 = a4;
            break;
          }
          goto LABEL_76;
        }
      }
    }
    DisplayLogSetMonitorPowerStage(v7, 2147483652LL, (unsigned int)v12, &v63);
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
    DisplayLogSetMonitorPowerStage(v7, 8LL, 0LL, &v63);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiCheckForOutstandingD3Requests(v6);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v6 + 3440), 1u);
    v37 = DpiAcquireCoreSyncAccessSafe(v11, 1);
    LODWORD(v12) = v37;
    if ( v37 < 0 )
    {
      WdLogSingleEntry1(4LL, v37);
      WdLogGlobalForLineNumber = 12361;
    }
    else
    {
      v38 = *(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY **)(v6 + 3600);
      while ( v38 != (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v6 + 3600) )
      {
        v39 = v38;
        v38 = *(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY **)v38;
        if ( IsInternalVideoOutput(*(v39 - 7)) && !*((_BYTE *)v39 + 34) )
        {
          MonitorRemovePhysicalMonitor(*(char **)(v6 + 4032), *((unsigned int *)v39 - 2), 0LL, 0LL, v7);
          v42 = (_QWORD *)*((_QWORD *)v39 + 2);
          if ( v42 )
          {
            v43 = v42[8];
            if ( v43 )
            {
              if ( *(_BYTE *)(v43 + 944) )
              {
                v44 = DpiPdoSetMonitorDriverInterfaceState(v42, 0, v40, v41);
                LODWORD(v12) = v44;
                if ( v44 < 0 )
                {
                  WdLogSingleEntry1(3LL, v44);
                  WdLogGlobalForLineNumber = 12319;
                }
              }
            }
          }
        }
      }
      DxgkReportMonitorPowerRapidHpdTriggerEvent(*(_QWORD *)(v6 + 4032), 0);
      LOBYTE(v45) = 1;
      MonitorEnableDisableMonitor(*(_QWORD *)(v6 + 4032), a2, v58, v45);
      DpiReleaseCoreSyncAccessSafe(a1, 1);
    }
    DisplayLogSetMonitorPowerStage(v7, 2147483656LL, (unsigned int)v12, &v63);
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
    v46 = v50;
    if ( v50 )
    {
      v47 = &P[v50];
      do
      {
        v48 = (PVOID *)(*--v47 - 984LL);
        if ( *v8 != 1 )
          v48 = (PVOID *)(*v47 - 960LL);
        ObfDereferenceObject(*v48);
        --v46;
      }
      while ( v46 );
    }
    ExFreePoolWithTag(P, 0);
  }
  return (unsigned int)v12;
}
