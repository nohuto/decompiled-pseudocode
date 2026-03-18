/*
 * XREFs of DxgkFreePagesFromMdlCB @ 0x1400105A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmClosePhysicalObjectByAdapter@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x1400105D4 (-SysMmClosePhysicalObjectByAdapter@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x140010C80 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     DpiGetSysMmAdapterFromDevice @ 0x140011EAC (DpiGetSysMmAdapterFromDevice.c)
 */

__int64 __fastcall DxgkFreePagesFromMdlCB(__int64 a1, struct SYSMM_PHYSICAL_OBJECT **a2)
{
  struct SYSMM_ADAPTER *SysMmAdapterFromDevice; // rax
  struct SYSMM_PHYSICAL_OBJECT *v4; // rbx

  SysMmAdapterFromDevice = (struct SYSMM_ADAPTER *)DpiGetSysMmAdapterFromDevice(a1);
  v4 = *a2;
  SysMmClosePhysicalObjectByAdapter(v4, SysMmAdapterFromDevice);
  SysMmUnreferencePhysicalObject(v4);
  return 0LL;
}
