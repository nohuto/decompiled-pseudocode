/*
 * XREFs of ??$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z @ 0x1403D2404
 * Callers:
 *     ?TryReadBool@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBGAEA_N@Z @ 0x14027E7B0 (-TryReadBool@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBGAEA_N@Z.c)
 *     ?TryReadDWord@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBGAEAK@Z @ 0x14027E810 (-TryReadDWord@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBGAEAK@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140289EA4 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 *     ?ReadDWordWithDefault@MonitorDataStore@DxgMonitor@@UEBAKW4MonitorDataStoreBehavior@2@PEBGK@Z @ 0x1403D23A0 (-ReadDWordWithDefault@MonitorDataStore@DxgMonitor@@UEBAKW4MonitorDataStoreBehavior@2@PEBGK@Z.c)
 *     ?ReadBoolWithDefault@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBG_N@Z @ 0x1403D23D0 (-ReadBoolWithDefault@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBG_N@Z.c)
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140405254 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140055340 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140058224 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ??$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEAK@Z @ 0x1403D2594 (--$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEAK@Z.c)
 */

char __fastcall DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 **v4; // r14
  char v5; // si
  char v8; // r12
  __int64 v9; // rbx
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rdi
  int (__fastcall *v18)(__int64 *, __int64, HANDLE *); // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  HANDLE Handle[2]; // [rsp+30h] [rbp-10h] BYREF
  int v23; // [rsp+88h] [rbp+48h] BYREF

  v23 = 0;
  v4 = (__int64 **)(a1 + 16);
  v5 = 0;
  v8 = a2;
  v9 = a1;
  if ( (a2 & 8) != 0 )
  {
    v17 = *v4;
    Handle[0] = 0LL;
    v18 = *(int (__fastcall **)(__int64 *, __int64, HANDLE *))(*v17 + 24);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      Handle,
      0LL);
    LOBYTE(v19) = 1;
    if ( v18(v17, v19, Handle) >= 0
      && (unsigned __int8)DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(v20, Handle[0], a3, &v23) )
    {
      v5 = 1;
      *a4 = v23;
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(Handle);
    v9 = a1;
  }
  if ( (v8 & 1) != 0 )
  {
    v14 = *v4;
    LOBYTE(a2) = 1;
    v15 = **v4;
    Handle[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64, __int64, HANDLE *))(v15 + 16))(v14, a2, 2LL, Handle) >= 0
      && (unsigned __int8)DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(v16, Handle[0], a3, &v23) )
    {
      v5 = 1;
      *a4 = v23;
    }
    if ( Handle[0] )
      ZwClose(Handle[0]);
  }
  if ( (v8 & 2) != 0 )
  {
    v10 = *(__int64 **)(v9 + 16);
    LOBYTE(a2) = 1;
    v11 = *v10;
    Handle[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64, HANDLE *))(v11 + 8))(v10, a2, Handle) >= 0
      && (unsigned __int8)DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(v12, Handle[0], a3, &v23) )
    {
      v5 = 1;
      *a4 = v23;
    }
    if ( Handle[0] )
      ZwClose(Handle[0]);
  }
  return v5;
}
