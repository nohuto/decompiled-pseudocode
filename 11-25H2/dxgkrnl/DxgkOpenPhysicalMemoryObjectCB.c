/*
 * XREFs of DxgkOpenPhysicalMemoryObjectCB @ 0x140010090
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1400100C0 (-SysMmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@PEAPEAUSYSMM_ADAPTER_.c)
 *     DpiGetSysMmAdapterFromDevice @ 0x140011EAC (DpiGetSysMmAdapterFromDevice.c)
 */

__int64 __fastcall DxgkOpenPhysicalMemoryObjectCB(__int64 a1)
{
  struct SYSMM_ADAPTER *SysMmAdapterFromDevice; // rax

  SysMmAdapterFromDevice = (struct SYSMM_ADAPTER *)DpiGetSysMmAdapterFromDevice(*(_QWORD *)(a1 + 8));
  return SysMmOpenPhysicalObject(
           *(struct SYSMM_PHYSICAL_OBJECT **)a1,
           SysMmAdapterFromDevice,
           (struct SYSMM_ADAPTER_OBJECT **)(a1 + 16));
}
