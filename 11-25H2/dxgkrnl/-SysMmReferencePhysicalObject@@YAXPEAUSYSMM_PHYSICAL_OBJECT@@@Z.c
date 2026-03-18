/*
 * XREFs of ?SysMmReferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x1400525F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SysMmReferencePhysicalObject(struct SYSMM_PHYSICAL_OBJECT *a1)
{
  _InterlockedIncrement((volatile signed __int32 *)a1 + 10);
}
