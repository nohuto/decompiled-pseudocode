/*
 * XREFs of ?HampClientDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800412A0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800412CC (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientCleanup@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800413B8 (-HampClientCleanup@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

void __fastcall HampClientDestroy(struct _CEM_RC_OBJECT *a1)
{
  HampClientRundownObjects(a1);
  HampClientCleanup(a1);
  HampFreeHeap(a1);
}
