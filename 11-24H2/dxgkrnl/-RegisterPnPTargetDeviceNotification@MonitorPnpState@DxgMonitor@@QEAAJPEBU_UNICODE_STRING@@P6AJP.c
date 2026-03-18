/*
 * XREFs of ?RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJPEAX1@Z@Z @ 0x14028A158
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140289EA4 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkGetDeviceObjectPointerSessionAware @ 0x1400580DC (DxgkGetDeviceObjectPointerSessionAware.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14005C040 (-reset@-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x140061834 (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_DEVICE_OBJECT@@@Z @ 0x140061868 (-reset@-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@.c)
 *     ?reset@?$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1?RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wil@@QEAAXXZ @ 0x140063F5C (-reset@-$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1-RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wi.c)
 *     ??$?9V?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@YA_N$$TAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x14009180C (--$-9V-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@Y.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?UpdatePnPDeviceInterfaceProperties@MonitorPnpState@DxgMonitor@@AEAAJXZ @ 0x1403F8F50 (-UpdatePnPDeviceInterfaceProperties@MonitorPnpState@DxgMonitor@@AEAAJXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorPnpState::RegisterPnPTargetDeviceNotification(
        DxgMonitor::MonitorPnpState *this,
        PCUNICODE_STRING SourceString,
        int (*a3)(void *, void *),
        __int64 a4)
{
  void *v6; // rcx
  unsigned __int16 v7; // ax
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  int DeviceObjectPointerSessionAware; // eax
  __int64 v13; // rcx
  __int64 v14; // rsi
  struct _DEVICE_OBJECT *Context; // rbx
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  NTSTATUS v17; // eax
  unsigned int v18; // eax
  NTSTATUS v19; // eax
  __int64 v20; // rbx
  unsigned int v21; // eax
  int updated; // eax
  __int64 v23; // rbx
  unsigned int v24; // eax
  NTSTATUS v25; // eax
  __int64 v26; // rbx
  unsigned int v27; // eax
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp+8h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, SourceString, a3, a4) + 24) = this;
  v6 = (void *)*((_QWORD *)this + 9);
  WdLogGlobalForLineNumber = 343;
  if ( v6 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
    *((_QWORD *)this + 9) = 0LL;
  }
  *((_WORD *)this + 32) = 0;
  v7 = SourceString->Length + 2;
  *((_WORD *)this + 33) = v7;
  v8 = operator new[](v7, 0x4D677844u, 256LL);
  *((_QWORD *)this + 9) = v8;
  if ( !v8 )
  {
    WdLogSingleEntry0(2LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 363;
    return result;
  }
  RtlCopyUnicodeString((PUNICODE_STRING)this + 4, SourceString);
  if ( wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>(
         v10,
         (_QWORD *)this + 3) )
  {
    WdLogSingleEntry1(7LL, this);
    result = 0LL;
    WdLogGlobalForLineNumber = 379;
    return result;
  }
  DeviceObject = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)this + 5,
    0LL);
  DeviceObjectPointerSessionAware = DxgkGetDeviceObjectPointerSessionAware(
                                      (struct _UNICODE_STRING *)this + 4,
                                      v11,
                                      (PVOID *)this + 5,
                                      &DeviceObject);
  LODWORD(v14) = DeviceObjectPointerSessionAware;
  if ( DeviceObjectPointerSessionAware == -1073741772 )
  {
    WdLogSingleEntry1(7LL, *((_QWORD *)this + 9));
    WdLogGlobalForLineNumber = 402;
  }
  else if ( DeviceObjectPointerSessionAware >= 0 )
  {
    if ( !wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>(
            v13,
            (_QWORD *)this + 5) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 417;
    }
    Context = DeviceObject;
    if ( !DeviceObject )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 418;
    }
    AttachedDeviceReference = IoGetAttachedDeviceReference(Context);
    wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::reset(
      (__int64 *)this + 4,
      (__int64)AttachedDeviceReference);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (__int64 *)this + 3,
      0LL);
    v17 = IoRegisterPlugPlayNotification(
            EventCategoryTargetDeviceChange,
            0,
            *((PVOID *)this + 5),
            (PDRIVER_OBJECT)g_pDriverObject,
            (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DXGMONITOR::_PnPTargetDeviceChangeNotification,
            Context,
            (PVOID *)this + 3);
    v14 = v17;
    if ( v17 >= 0 )
    {
      v19 = IoRegisterDeviceInterface(
              *((PDEVICE_OBJECT *)this + 1),
              &GUID_DEVINTERFACE_MONITOR,
              0LL,
              (PUNICODE_STRING)this + 3);
      if ( v19 >= 0 )
      {
        updated = DxgMonitor::MonitorPnpState::UpdatePnPDeviceInterfaceProperties(this);
        if ( updated >= 0 )
        {
          v25 = IoSetDeviceInterfaceState((PUNICODE_STRING)this + 3, 1u);
          if ( v25 < 0 )
          {
            v26 = v25;
            v27 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
            WdLogSingleEntry2(2LL, v27, v26);
            WdLogGlobalForLineNumber = 499;
          }
        }
        else
        {
          v23 = updated;
          v24 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
          WdLogSingleEntry2(2LL, v24, v23);
          WdLogGlobalForLineNumber = 482;
        }
      }
      else
      {
        v20 = v19;
        v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
        WdLogSingleEntry2(2LL, v21, v20);
        WdLogGlobalForLineNumber = 467;
      }
      LODWORD(v14) = 0;
      return (unsigned int)v14;
    }
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    WdLogSingleEntry2(2LL, v18, v14);
    WdLogGlobalForLineNumber = 448;
    wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
      (DxgkCompositionObject **)this + 5,
      0LL);
  }
  else
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 9), DeviceObjectPointerSessionAware);
    WdLogGlobalForLineNumber = 412;
  }
  wil::unique_struct<_UNICODE_STRING,void (_UNICODE_STRING *),&void RtlFreeUnicodeString(_UNICODE_STRING *),std::nullptr_t,0>::reset((struct _UNICODE_STRING *)this + 3);
  return (unsigned int)v14;
}
