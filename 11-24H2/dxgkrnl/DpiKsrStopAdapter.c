/*
 * XREFs of DpiKsrStopAdapter @ 0x1402513F0
 * Callers:
 *     DxgkStopAdapters @ 0x1401D78C8 (DxgkStopAdapters.c)
 *     DpiFdoHandleSystemPower @ 0x1403B9E38 (DpiFdoHandleSystemPower.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A8E8 (DpiCheckForOutstandingD3Requests.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003551C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140041998 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DpiFdoStopAdapter @ 0x140248100 (DpiFdoStopAdapter.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x140253BC8 (DpiLdaStopAllAdaptersInChain.c)
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x140286170 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiKsrStopAdapter(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rbx
  unsigned int v3; // edi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v6; // r14
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  DeviceExtension = (__int64)a1->DeviceExtension;
  v3 = 0;
  if ( *(_BYTE *)(DeviceExtension + 1158)
    || *(_BYTE *)(DeviceExtension + 2716)
    || *(_BYTE *)(DeviceExtension + 2718)
    || *(_BYTE *)(DeviceExtension + 2719)
    || *(_BYTE *)(DeviceExtension + 480) )
  {
    return 3221225659LL;
  }
  LOBYTE(v8[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v8, 0LL, 5u, 0);
  v6 = v8[1];
  AcquireMiniportListMutex();
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  if ( *(_DWORD *)(DeviceExtension + 504) )
    DpiLdaStopAllAdaptersInChain(a1, v6);
  else
    DpiFdoStopAdapter(a1, (__int64)v6);
  if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
    SysMmDestroyAdapter(*(struct SYSMM_ADAPTER **)(DeviceExtension + 5824));
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  ReleaseMiniportListMutex();
  if ( a2 )
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    v3 = PoCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
  }
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v8);
  return v3;
}
