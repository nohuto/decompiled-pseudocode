/*
 * XREFs of ?HamRcRootInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@@Z @ 0x180083FB4
 * Callers:
 *     ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180081334 (-HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

void __fastcall HamRcRootInitialize(void (*a1)(struct _CEM_RC_OBJECT *), struct _HAM_RC_TREE_ROOT *a2)
{
  memset_0(a2, 0, 0x58uLL);
  CemRcTableInitialize((__int64)a1, (_QWORD *)a2 + 5);
}
