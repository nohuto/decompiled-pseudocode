/*
 * XREFs of DxgkUnmapMdlFromIoMmuCB @ 0x140073550
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmClosePhysicalObjectByAdapter@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x1400105D4 (-SysMmClosePhysicalObjectByAdapter@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x140010C80 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     DpiGetSysMmAdapterFromDevice @ 0x140011EAC (DpiGetSysMmAdapterFromDevice.c)
 */

void __fastcall DxgkUnmapMdlFromIoMmuCB(__int64 a1, struct SYSMM_ADAPTER ***a2)
{
  struct SYSMM_ADAPTER *SysMmAdapterFromDevice; // rax
  struct SYSMM_ADAPTER **v4; // rbx

  SysMmAdapterFromDevice = (struct SYSMM_ADAPTER *)DpiGetSysMmAdapterFromDevice();
  v4 = *a2;
  SysMmClosePhysicalObjectByAdapter(v4, SysMmAdapterFromDevice);
  SysMmUnreferencePhysicalObject((struct SYSMM_PHYSICAL_OBJECT *)v4);
}
