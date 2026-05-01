/*
 * XREFs of ?HampAppDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180041450
 * Callers:
 *     <none>
 * Callees:
 *     ?HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180041474 (-HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

void __fastcall HampAppDestroy(struct _CEM_RC_OBJECT *a1)
{
  HampAppCleanup(a1);
  HampFreeHeap(a1);
}
