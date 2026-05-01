/*
 * XREFs of ?HampAppDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800414D0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800414F4 (-HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

void __fastcall HampAppDestroy(struct _CEM_RC_OBJECT *a1)
{
  HampAppCleanup(a1);
  HampFreeHeap(a1);
}
