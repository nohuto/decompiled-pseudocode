/*
 * XREFs of ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x14019AB48
 * Callers:
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401D1928 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400354D0 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140052068 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z @ 0x14019DA2C (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1401D22E0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

void __fastcall ADAPTER_RENDER::DisconnectFromDisplayAdapters(
        ADAPTER_RENDER *this,
        struct DXGADAPTER *a2,
        struct DXGADAPTER **a3)
{
  DXGADAPTER *v6; // rcx
  struct _LUID *v7; // rdx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v8; // r11
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v9; // [rsp+20h] [rbp-48h] BYREF
  _DXGK_WIN32K_PARAM_DATA v10; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+70h] [rbp+8h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 24, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 4) = KeGetCurrentThread();
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 48, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 7) = KeGetCurrentThread();
  ADAPTER_RENDER::StopDisplayDevices(this, 2LL, 0LL);
  ADAPTER_RENDER::StopDisplayDevices(this, 1LL, 0LL);
  *a3 = a2;
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 4) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 24, 0LL);
  KeLeaveCriticalRegion();
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 7) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 48, 0LL);
  KeLeaveCriticalRegion();
  LOBYTE(v9) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(&v9, 0LL, 0x3Eu, 0);
  v6 = (DXGADAPTER *)*((_QWORD *)this + 2);
  v11 = 0LL;
  *(_OWORD *)&v10.NumPathArrayElements = 0LL;
  v10.SDCFlags = 2447;
  *(_OWORD *)&v10.PathsArray = 0LL;
  DXGADAPTER::IsAdapterSessionized(v6, v7, 0LL, &v11);
  DxgkRequestAsyncDisplaySwitchCallout(&v10, v8, v11);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v9);
}
