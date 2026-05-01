/*
 * XREFs of ?HampUserDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18006C2B0
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     ?HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z @ 0x1800412BC (-HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z.c)
 */

void __fastcall HampUserDestroy(struct _CEM_RC_OBJECT *a1)
{
  _QWORD *v2; // rcx

  HamRcNodeCleanup(a1);
  v2 = (_QWORD *)*((_QWORD *)a1 + 20);
  if ( v2 )
    CemRcObjectDereference(v2);
  HampFreeHeap(a1);
}
