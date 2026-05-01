/*
 * XREFs of ?HampHostIdStoreApplicationDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18006DFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z @ 0x18004123C (-HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z.c)
 */

void __fastcall HampHostIdStoreApplicationDestroy(struct _CEM_RC_OBJECT *a1)
{
  HamRcNodeCleanup(a1);
  HampFreeHeap(a1);
}
