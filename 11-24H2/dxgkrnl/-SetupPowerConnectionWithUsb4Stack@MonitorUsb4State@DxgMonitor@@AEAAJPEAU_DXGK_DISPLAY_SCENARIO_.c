/*
 * XREFs of ?SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042E900
 * Callers:
 *     ?_Usb4TargetDeviceChangeNotification@MonitorUsb4State@DxgMonitor@@CAJPEAX0@Z @ 0x140279250 (-_Usb4TargetDeviceChangeNotification@MonitorUsb4State@DxgMonitor@@CAJPEAX0@Z.c)
 *     ?OnInitialized@MonitorUsb4State@DxgMonitor@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042E804 (-OnInitialized@MonitorUsb4State@DxgMonitor@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14005BB04 (--1-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@detail.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14005C040 (-reset@-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140060D9C (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x140061834 (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 *     DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___ @ 0x1400650D8 (DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___.c)
 *     _DXGKCALLONEXIT__lambda_95d838af50bdc3f1bdaf124795879894____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140091634 (_DXGKCALLONEXIT__lambda_95d838af50bdc3f1bdaf124795879894____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?AddUsb4HRPowerRef@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAJU_LUID@@I@Z @ 0x140277AF4 (-AddUsb4HRPowerRef@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAJU_LUID@@I@Z.c)
 *     ?OnInitialized@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAA?AW4SetupFailureStage@2@PEAU_DEVICE_OBJECT@@@Z @ 0x140278228 (-OnInitialized@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAA-AW4SetupFailureStage@2@PEAU_DEVICE_OBJEC.c)
 */

__int64 __fastcall DxgMonitor::MonitorUsb4State::SetupPowerConnectionWithUsb4Stack(
        _QWORD *Context,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  unsigned __int16 v4; // di
  unsigned __int64 v5; // rax
  wchar_t *v6; // rax
  __int64 v7; // rcx
  wchar_t *v8; // rbx
  int v9; // edi
  _QWORD *v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rcx
  DxgMonitor::Usb4HostRouterPoFxRefv2 *v13; // r14
  unsigned int v14; // edi
  struct _LUID *v15; // rax
  int v16; // edi
  _QWORD *v17; // rax
  const WCHAR *v18; // rdx
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int appended; // [rsp+44h] [rbp-BCh] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-B0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v24[8]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v25; // [rsp+70h] [rbp-90h] BYREF
  int *v26; // [rsp+80h] [rbp-80h]
  _QWORD *v27; // [rsp+88h] [rbp-78h]
  _BYTE v28[48]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR Source[32]; // [rsp+C0h] [rbp-40h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v30; // [rsp+148h] [rbp+48h] BYREF

  v30 = a2;
  if ( !*((_BYTE *)Context + 8) )
    return 0LL;
  v19 = 0;
  *(_QWORD *)&v25 = &v30;
  FileObject = 0LL;
  *((_QWORD *)&v25 + 1) = &appended;
  appended = 0;
  v26 = &v19;
  v27 = Context;
  DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e_((__int64)v28, &v25);
  v4 = *((_WORD *)Context + 20) + 64;
  v5 = 2 * ((unsigned __int64)v4 >> 1);
  if ( !is_mul_ok((unsigned __int64)v4 >> 1, 2uLL) )
    v5 = -1LL;
  v6 = (wchar_t *)operator new[](v5, 0x4D677844u, 256LL);
  v7 = *Context;
  v8 = v6;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = v6;
  Destination.MaximumLength = v4;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*Context + 8LL))(*Context, v24);
  appended = RtlStringCchPrintfW(Source, 32LL, L"GFX-%016llx:%08x", *v10, v9);
  v11 = appended;
  if ( appended < 0 )
  {
    v19 = 4;
    goto LABEL_35;
  }
  appended = RtlAppendUnicodeToString(&Destination, (PCWSTR)Context[6]);
  v11 = appended;
  if ( appended < 0 )
  {
    v19 = 5;
    goto LABEL_35;
  }
  appended = RtlAppendUnicodeToString(&Destination, Source);
  v11 = appended;
  if ( appended < 0 )
  {
    v19 = 6;
    goto LABEL_35;
  }
  DeviceObject = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)&FileObject,
    0LL);
  appended = IoGetDeviceObjectPointer(&Destination, 0x80000000, &FileObject, &DeviceObject);
  v11 = appended;
  if ( appended < 0 )
  {
    v19 = 7;
    goto LABEL_35;
  }
  v12 = Context[10];
  if ( !v12 )
  {
    v19 = 17;
    goto LABEL_34;
  }
  v19 = DxgMonitor::Usb4HostRouterPoFxRefv2::OnInitialized(v12, DeviceObject);
  if ( v19 != 1 )
  {
LABEL_34:
    v11 = -1073741823;
    appended = -1073741823;
    goto LABEL_35;
  }
  v13 = (DxgMonitor::Usb4HostRouterPoFxRefv2 *)Context[10];
  if ( !v13 )
  {
    v11 = -1073741823;
    appended = -1073741823;
    goto LABEL_32;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*Context + 16LL))(*Context);
  v15 = (struct _LUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*Context + 8LL))(*Context, v24);
  appended = DxgMonitor::Usb4HostRouterPoFxRefv2::AddUsb4HRPowerRef(v13, *v15, v14);
  v11 = appended;
  if ( appended < 0 )
  {
LABEL_32:
    v19 = 9;
    goto LABEL_35;
  }
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)&FileObject,
    0LL);
  v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*Context + 16LL))(*Context);
  v17 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*Context + 8LL))(*Context, v24);
  appended = RtlStringCchPrintfW(Source, 32LL, L"GFX%02x-%016llx:%08x", *((unsigned int *)Context + 3), *v17, v16);
  v11 = appended;
  if ( appended >= 0 )
  {
    v18 = (const WCHAR *)Context[6];
    Destination.Length = 0;
    appended = RtlAppendUnicodeToString(&Destination, v18);
    v11 = appended;
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeToString(&Destination, Source);
      v11 = appended;
      if ( appended >= 0 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
          (DxgkCompositionObject **)Context + 4,
          0LL);
        appended = IoGetDeviceObjectPointer(&Destination, 0x80000000, (PFILE_OBJECT *)Context + 4, &DeviceObject);
        v11 = appended;
        if ( appended >= 0 )
        {
          if ( Context[11]
            || (wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
                  Context + 11,
                  0LL),
                appended = IoRegisterPlugPlayNotification(
                             EventCategoryTargetDeviceChange,
                             0,
                             (PVOID)Context[4],
                             (PDRIVER_OBJECT)g_pDriverObject,
                             (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DxgMonitor::MonitorUsb4State::_Usb4TargetDeviceChangeNotification,
                             Context,
                             (PVOID *)Context + 11),
                v11 = appended,
                appended >= 0) )
          {
            v19 = 1;
            if ( v8 )
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
            v11 = 0;
            goto LABEL_37;
          }
          v19 = 14;
        }
        else
        {
          v19 = 13;
        }
      }
      else
      {
        v19 = 12;
      }
    }
    else
    {
      v19 = 11;
    }
  }
  else
  {
    v19 = 10;
  }
LABEL_35:
  if ( v8 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
LABEL_37:
  DXGKCALLONEXIT__lambda_95d838af50bdc3f1bdaf124795879894____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v28);
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>((__int64 *)&FileObject);
  return v11;
}
