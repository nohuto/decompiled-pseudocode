/*
 * XREFs of ?RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x14028BA08
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140289EA4 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z @ 0x14028C2B0 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKAEAV?$unique_ptr@U_KEY_BASIC_INFORMATION@@U?$byte_array_deleter@U_KEY_BASIC_INFORMATION@@@DxgMonitor@@@wistd@@@Z @ 0x14002321C (-DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKAEAV-$unique_ptr@U_KEY_BASIC_INFORMATION@@U-$byte_a.c)
 *     ?reset@?$unique_ptr@U_KEY_BASIC_INFORMATION@@U?$byte_array_deleter@U_KEY_BASIC_INFORMATION@@@DxgMonitor@@@wistd@@QEAAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x140023330 (-reset@-$unique_ptr@U_KEY_BASIC_INFORMATION@@U-$byte_array_deleter@U_KEY_BASIC_INFORMATION@@@Dxg.c)
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x140032BF8 (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x14004BEC4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140058224 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x14028BC08 (-_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::RetrieveMonitorFrequencyRangeFromRegistry(PERESOURCE Resource, __int64 a2)
{
  __int64 *SharedWaiters; // rcx
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  NTSTATUS v7; // eax
  ULONG v8; // esi
  char i; // r15
  ULONG v10; // edx
  int SubkeyInfoFromRegistry; // edi
  struct _KEY_BASIC_INFORMATION *v12; // rbx
  HANDLE Handle; // [rsp+30h] [rbp-40h] BYREF
  HANDLE v15; // [rsp+38h] [rbp-38h] BYREF
  struct _KEY_BASIC_INFORMATION *v16; // [rsp+40h] [rbp-30h] BYREF
  struct _UNICODE_STRING v17; // [rsp+48h] [rbp-28h] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h] BYREF
  int v19; // [rsp+60h] [rbp-10h]

  SharedWaiters = (__int64 *)Resource[2].SharedWaiters;
  Handle = 0LL;
  LOBYTE(a2) = 1;
  v19 = *(_DWORD *)L"S";
  v17.Buffer = (wchar_t *)&v18;
  v18 = *(_QWORD *)L"MODES";
  *(_QWORD *)&v17.Length = 786442LL;
  v4 = *SharedWaiters;
  v15 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, HANDLE *))(v4 + 16))(SharedWaiters, a2, 2LL, &v15);
  v6 = v5;
  if ( v5 >= 0 )
  {
    Handle = 0LL;
    v7 = DxgkOpenRegistrySubkey(&Handle, 0x20019u, v15, &v17);
    v6 = v7;
    if ( v7 < 0 )
    {
      WdLogSingleEntry1(7LL, v7);
      WdLogGlobalForLineNumber = 1197;
      wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
      wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v15);
      return v6;
    }
    MonitorResourceLock::AcquireExclusive(Resource);
    v8 = 0;
    for ( i = 0; ; i = 1 )
    {
      v16 = 0LL;
      v10 = v8++;
      SubkeyInfoFromRegistry = DxgkRetrieveSubkeyInfoFromRegistry(Handle, v10, (void **)&v16);
      if ( SubkeyInfoFromRegistry < 0 )
        break;
      v12 = v16;
      SubkeyInfoFromRegistry = DxgMonitor::MonitorModes::_ProcessMonitorResolutionKey(
                                 (DxgMonitor::MonitorModes *)Resource,
                                 Handle,
                                 v16);
      if ( SubkeyInfoFromRegistry < 0 )
      {
        wistd::unique_ptr<_KEY_BASIC_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_BASIC_INFORMATION>>::reset(
          (void **)&v16,
          0LL);
        goto LABEL_13;
      }
      if ( v12 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v12);
    }
    if ( v16 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v16);
LABEL_13:
    v6 = 0;
    if ( !i )
      v6 = SubkeyInfoFromRegistry;
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
  }
  else
  {
    WdLogSingleEntry1(7LL, v5);
    WdLogGlobalForLineNumber = 1188;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v15 )
    ZwClose(v15);
  return v6;
}
