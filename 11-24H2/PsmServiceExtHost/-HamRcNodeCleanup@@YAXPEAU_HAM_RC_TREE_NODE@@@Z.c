/*
 * XREFs of ?HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z @ 0x18004123C
 * Callers:
 *     ?HampPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180041270 (-HampPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampUserDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18006C0D0 (-HampUserDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampHostIdStoreApplicationDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18006DFA0 (-HampHostIdStoreApplicationDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampHostIdStoreLeafDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800842A0 (-HampHostIdStoreLeafDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     CemRcObjectCleanup @ 0x180041594 (CemRcObjectCleanup.c)
 */

void __fastcall HamRcNodeCleanup(struct _HAM_RC_TREE_NODE *a1)
{
  unsigned __int64 v1; // rbx

  v1 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  CemRcObjectCleanup(a1);
  CemRcObjectDereference((_QWORD *)(v1 - 40));
}
