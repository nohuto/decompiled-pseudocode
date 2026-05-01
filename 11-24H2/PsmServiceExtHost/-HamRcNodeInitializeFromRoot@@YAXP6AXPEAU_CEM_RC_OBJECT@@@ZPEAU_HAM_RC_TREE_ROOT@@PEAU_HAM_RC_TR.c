/*
 * XREFs of ?HamRcNodeInitializeFromRoot@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@PEAU_HAM_RC_TREE_NODE@@@Z @ 0x180065234
 * Callers:
 *     ?HampHostIdStoreSessionInitialize@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_STORE_SESSION_ENTRY@@@Z @ 0x1800434F0 (-HampHostIdStoreSessionInitialize@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM.c)
 *     ?HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z @ 0x180064F84 (-HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

void __fastcall HamRcNodeInitializeFromRoot(
        void (*a1)(struct _CEM_RC_OBJECT *),
        struct _HAM_RC_TREE_ROOT *a2,
        struct _HAM_RC_TREE_NODE *a3)
{
  memset_0(a3, 0, 0x58uLL);
  *((_QWORD *)a3 + 2) = -1LL;
  *((_QWORD *)a3 + 4) = (char *)a2 + 40;
  *((_QWORD *)a3 + 3) = 1LL;
  CemRcTableInitialize(a1, (char *)a3 + 40);
}
