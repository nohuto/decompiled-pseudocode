/*
 * XREFs of ?HampHostIdStoreLeafDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180083DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z @ 0x1800412BC (-HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z.c)
 */

void __fastcall HampHostIdStoreLeafDestroy(struct _CEM_RC_OBJECT *a1)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)a1 + 77);
  if ( v2 )
  {
    TpWaitForTimer(v2, 1LL);
    TpReleaseTimer(*((_QWORD *)a1 + 77));
  }
  HamRcNodeCleanup(a1);
  HampFreeHeap(a1);
}
