/*
 * XREFs of ?SysMmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1400100C0
 * Callers:
 *     DxgkOpenPhysicalMemoryObjectCB @ 0x140010090 (DxgkOpenPhysicalMemoryObjectCB.c)
 * Callees:
 *     ?SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x140011B10 (-SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 */

__int64 __fastcall SysMmOpenPhysicalObject(
        struct SYSMM_PHYSICAL_OBJECT *a1,
        struct SYSMM_ADAPTER *a2,
        struct SYSMM_ADAPTER_OBJECT **a3)
{
  __int64 result; // rax

  result = SmmOpenPhysicalObject(a1, a2);
  *a3 = (struct SYSMM_PHYSICAL_OBJECT *)((char *)a1 + 64);
  return result;
}
