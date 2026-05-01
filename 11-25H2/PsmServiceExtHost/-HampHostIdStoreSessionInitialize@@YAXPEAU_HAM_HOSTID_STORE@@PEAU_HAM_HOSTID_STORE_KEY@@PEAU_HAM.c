/*
 * XREFs of ?HampHostIdStoreSessionInitialize@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_STORE_SESSION_ENTRY@@@Z @ 0x180043570
 * Callers:
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180042948 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 * Callees:
 *     ?HamRcNodeInitializeFromRoot@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@PEAU_HAM_RC_TREE_NODE@@@Z @ 0x1800652B4 (-HamRcNodeInitializeFromRoot@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@PEAU_HAM_RC_TR.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 */

void __fastcall HampHostIdStoreSessionInitialize(
        struct _HAM_HOSTID_STORE *a1,
        struct _HAM_HOSTID_STORE_KEY *a2,
        struct _HAM_HOSTID_STORE_SESSION_ENTRY *a3)
{
  memset_0(a3, 0, 0x60uLL);
  HamRcNodeInitializeFromRoot(
    (void (*)(struct _CEM_RC_OBJECT *))HampHostIdStoreApplicationDestroy,
    (struct _HAM_HOSTID_STORE *)((char *)a1 + 16),
    a3);
  *((_DWORD *)a3 + 22) = *((_DWORD *)a2 + 133);
}
