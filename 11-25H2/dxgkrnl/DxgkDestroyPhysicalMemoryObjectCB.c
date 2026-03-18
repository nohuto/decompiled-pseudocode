/*
 * XREFs of DxgkDestroyPhysicalMemoryObjectCB @ 0x14000FFD0
 * Callers:
 *     <none>
 * Callees:
 *     SmmClosePhysicalObject @ 0x14001094C (SmmClosePhysicalObject.c)
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x140010C80 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 */

void __fastcall DxgkDestroyPhysicalMemoryObjectCB(struct SYSMM_PHYSICAL_OBJECT **a1)
{
  struct SYSMM_ADAPTER_OBJECT *v2; // rcx

  v2 = a1[1];
  if ( v2 )
    SmmClosePhysicalObject(v2);
  SysMmUnreferencePhysicalObject(*a1);
}
