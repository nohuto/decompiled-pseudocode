/*
 * XREFs of ?HandleDeviceRemoveCancelled@MonitorPnpState@DxgMonitor@@QEAAXXZ @ 0x1402793F4
 * Callers:
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x140276460 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     DxgkGetDeviceObjectPointerSessionAware @ 0x1400580DC (DxgkGetDeviceObjectPointerSessionAware.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x140061834 (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 *     ??$?9V?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@YA_N$$TAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x14009180C (--$-9V-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@Y.c)
 */

void __fastcall DxgMonitor::MonitorPnpState::HandleDeviceRemoveCancelled(DxgMonitor::MonitorPnpState *this)
{
  PVOID *v1; // rbx
  __int64 v3; // rdx
  int DeviceObjectPointerSessionAware; // eax
  __int64 v5; // rcx
  PDEVICE_OBJECT v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v1 = (PVOID *)((char *)this + 40);
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)this + 5,
    0LL);
  DeviceObjectPointerSessionAware = DxgkGetDeviceObjectPointerSessionAware(
                                      (struct _UNICODE_STRING *)this + 4,
                                      v3,
                                      v1,
                                      &v6);
  if ( DeviceObjectPointerSessionAware < 0 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 9), DeviceObjectPointerSessionAware);
    WdLogGlobalForLineNumber = 253;
  }
  if ( !wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>(
          v5,
          v1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 256;
  }
  if ( !v6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 257;
  }
}
