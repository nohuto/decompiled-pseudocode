/*
 * XREFs of ViThunkFreeSharedThunksArray @ 0x140BA65A0
 * Callers:
 *     VfThunkRemoveTargetNotify @ 0x140B972BC (VfThunkRemoveTargetNotify.c)
 *     ViThunkCreateSharedExportInformation @ 0x140BA638C (ViThunkCreateSharedExportInformation.c)
 *     VfThunkAddTargetNotify @ 0x140BA64F4 (VfThunkAddTargetNotify.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ViThunkFreeSharedThunksArray(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x54496656u);
    *a1 = 0LL;
  }
}
