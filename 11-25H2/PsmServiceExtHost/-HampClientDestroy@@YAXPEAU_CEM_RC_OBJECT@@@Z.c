/*
 * XREFs of ?HampClientDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180041320
 * Callers:
 *     <none>
 * Callees:
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004134C (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientCleanup@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180041438 (-HampClientCleanup@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

void __fastcall HampClientDestroy(struct _CEM_RC_OBJECT *a1)
{
  HampClientRundownObjects(a1);
  HampClientCleanup(a1);
  HampFreeHeap(a1);
}
