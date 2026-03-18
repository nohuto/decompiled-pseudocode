/*
 * XREFs of DxgkOpenPhysicalMemoryObjectCB @ 0x14001F520
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x14001F550 (-SysMmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@PEAPEAUSYSMM_ADAPTER_.c)
 *     DpiGetSysMmAdapterFromDevice @ 0x14002133C (DpiGetSysMmAdapterFromDevice.c)
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
