/*
 * XREFs of ?WriteBool@MonitorDataStore@DxgMonitor@@UEAAXW4MonitorDataStoreBehavior@2@PEBG_N@Z @ 0x140277390
 * Callers:
 *     ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAX_NAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z @ 0x14026EEB4 (-_DisableVirtualModeSupport@DXGMONITOR@@QEAAX_NAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140055B90 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400587A4 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ??$WriteData@K@MonitorDataStore@DxgMonitor@@AEAAXPEAXPEBGK@Z @ 0x140276B40 (--$WriteData@K@MonitorDataStore@DxgMonitor@@AEAAXPEAXPEBGK@Z.c)
 */

void __fastcall DxgMonitor::MonitorDataStore::WriteBool(__int64 a1, char a2, const WCHAR *a3, unsigned __int8 a4)
{
  __int64 v4; // rdi
  int v5; // esi
  int (__fastcall *v7)(__int64, _QWORD, void **); // rbx
  __int64 v8; // rcx
  void *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (a2 & 4) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    v9[0] = 0LL;
    v5 = a4;
    v7 = *(int (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v4 + 8LL);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      v9,
      0LL);
    if ( v7(v4, 0LL, v9) >= 0 )
      DxgMonitor::MonitorDataStore::WriteData<unsigned long>(v8, v9[0], a3, v5);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(v9);
  }
}
