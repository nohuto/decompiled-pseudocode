/*
 * XREFs of ?SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042CA10
 * Callers:
 *     ?_Usb4TargetDeviceChangeNotification@MonitorUsb4State@DxgMonitor@@CAJPEAX0@Z @ 0x1402720B0 (-_Usb4TargetDeviceChangeNotification@MonitorUsb4State@DxgMonitor@@CAJPEAX0@Z.c)
 *     ?OnInitialized@MonitorUsb4State@DxgMonitor@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042C914 (-OnInitialized@MonitorUsb4State@DxgMonitor@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14005C0A4 (--1-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@detail.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14005C5E0 (-reset@-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400604E4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x140060F7C (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 *     DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___ @ 0x1400654B8 (DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___.c)
 *     _DXGKCALLONEXIT__lambda_5c70bee6ec5140b36b04aca27e10eb41____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1400901D4 (_DXGKCALLONEXIT__lambda_5c70bee6ec5140b36b04aca27e10eb41____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?AddUsb4HRPowerRef@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAJU_LUID@@I@Z @ 0x140270968 (-AddUsb4HRPowerRef@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAJU_LUID@@I@Z.c)
 *     ?OnInitialized@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAA?AW4SetupFailureStage@2@PEAU_DEVICE_OBJECT@@@Z @ 0x140271084 (-OnInitialized@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAA-AW4SetupFailureStage@2@PEAU_DEVICE_OBJEC.c)
 */

__int64 __fastcall DxgMonitor::MonitorUsb4State::SetupPowerConnectionWithUsb4Stack(
        _QWORD *Context,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v4; // r9
  unsigned __int16 v5; // di
  unsigned __int64 v6; // rax
  wchar_t *v7; // rax
  __int64 v8; // rcx
  wchar_t *v9; // rbx
  int v10; // edi
  _QWORD *v11; // rax
  unsigned int v12; // edi
  __int64 v13; // rcx
  DxgMonitor::Usb4HostRouterPoFxRefv2 *v14; // r14
  unsigned int v15; // edi
  struct _LUID *v16; // rax
  int v17; // edi
  _QWORD *v18; // rax
  const WCHAR *v19; // rdx
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  int appended; // [rsp+44h] [rbp-BCh] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-B0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v25[8]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v26; // [rsp+70h] [rbp-90h] BYREF
  int *v27; // [rsp+80h] [rbp-80h]
  _QWORD *v28; // [rsp+88h] [rbp-78h]
  _BYTE v29[48]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR Source[32]; // [rsp+C0h] [rbp-40h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v31; // [rsp+148h] [rbp+48h] BYREF

  v31 = a2;
  if ( !*((_BYTE *)Context + 8) )
    return 0LL;
  v20 = 0;
  *(_QWORD *)&v26 = &v31;
  FileObject = 0LL;
  *((_QWORD *)&v26 + 1) = &appended;
  appended = 0;
  v27 = &v20;
  v28 = Context;
  DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e_((__int64)v29, &v26);
  v5 = *((_WORD *)Context + 20) + 64;
  v6 = 2 * ((unsigned __int64)v5 >> 1);
  if ( !is_mul_ok((unsigned __int64)v5 >> 1, 2uLL) )
    v6 = -1LL;
  v7 = (wchar_t *)operator new[](v6, 0x4D677844u, 256LL, v4);
  v8 = *Context;
  v9 = v7;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = v7;
  Destination.MaximumLength = v5;
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*Context + 8LL))(*Context, v25);
  appended = RtlStringCchPrintfW(Source, 32LL, L"GFX-%016llx:%08x", *v11, v10);
  v12 = appended;
  if ( appended < 0 )
  {
    v20 = 4;
    goto LABEL_35;
  }
  appended = RtlAppendUnicodeToString(&Destination, (PCWSTR)Context[6]);
  v12 = appended;
  if ( appended < 0 )
  {
    v20 = 5;
    goto LABEL_35;
  }
  appended = RtlAppendUnicodeToString(&Destination, Source);
  v12 = appended;
  if ( appended < 0 )
  {
    v20 = 6;
    goto LABEL_35;
  }
  DeviceObject = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)&FileObject,
    0LL);
  appended = IoGetDeviceObjectPointer(&Destination, 0x80000000, &FileObject, &DeviceObject);
  v12 = appended;
  if ( appended < 0 )
  {
    v20 = 7;
    goto LABEL_35;
  }
  v13 = Context[10];
  if ( !v13 )
  {
    v20 = 17;
    goto LABEL_34;
  }
  v20 = DxgMonitor::Usb4HostRouterPoFxRefv2::OnInitialized(v13, DeviceObject);
  if ( v20 != 1 )
  {
LABEL_34:
    v12 = -1073741823;
    appended = -1073741823;
    goto LABEL_35;
  }
  v14 = (DxgMonitor::Usb4HostRouterPoFxRefv2 *)Context[10];
  if ( !v14 )
  {
    v12 = -1073741823;
    appended = -1073741823;
    goto LABEL_32;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*Context + 16LL))(*Context);
  v16 = (struct _LUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*Context + 8LL))(*Context, v25);
  appended = DxgMonitor::Usb4HostRouterPoFxRefv2::AddUsb4HRPowerRef(v14, *v16, v15);
  v12 = appended;
  if ( appended < 0 )
  {
LABEL_32:
    v20 = 9;
    goto LABEL_35;
  }
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)&FileObject,
    0LL);
  v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*Context + 16LL))(*Context);
  v18 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*Context + 8LL))(*Context, v25);
  appended = RtlStringCchPrintfW(Source, 32LL, L"GFX%02x-%016llx:%08x", *((unsigned int *)Context + 3), *v18, v17);
  v12 = appended;
  if ( appended >= 0 )
  {
    v19 = (const WCHAR *)Context[6];
    Destination.Length = 0;
    appended = RtlAppendUnicodeToString(&Destination, v19);
    v12 = appended;
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeToString(&Destination, Source);
      v12 = appended;
      if ( appended >= 0 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
          (DxgkCompositionObject **)Context + 4,
          0LL);
        appended = IoGetDeviceObjectPointer(&Destination, 0x80000000, (PFILE_OBJECT *)Context + 4, &DeviceObject);
        v12 = appended;
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
                v12 = appended,
                appended >= 0) )
          {
            v20 = 1;
            if ( v9 )
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
            v12 = 0;
            goto LABEL_37;
          }
          v20 = 14;
        }
        else
        {
          v20 = 13;
        }
      }
      else
      {
        v20 = 12;
      }
    }
    else
    {
      v20 = 11;
    }
  }
  else
  {
    v20 = 10;
  }
LABEL_35:
  if ( v9 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
LABEL_37:
  DXGKCALLONEXIT__lambda_5c70bee6ec5140b36b04aca27e10eb41____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v29);
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>((__int64 *)&FileObject);
  return v12;
}
