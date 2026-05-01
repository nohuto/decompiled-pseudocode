/*
 * XREFs of ?HampSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180083AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampSessionCleanup@@YAXPEAU_HAM_SESSION@@@Z @ 0x180083A2C (-HampSessionCleanup@@YAXPEAU_HAM_SESSION@@@Z.c)
 */

void __fastcall HampSessionDestroy(struct _CEM_RC_OBJECT *a1)
{
  HampSessionCleanup(a1);
  HampFreeHeap(a1);
}
