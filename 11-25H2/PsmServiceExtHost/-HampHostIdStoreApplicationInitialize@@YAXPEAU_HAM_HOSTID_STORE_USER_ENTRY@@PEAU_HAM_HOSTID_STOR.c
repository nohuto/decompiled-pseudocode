/*
 * XREFs of ?HampHostIdStoreApplicationInitialize@@YAXPEAU_HAM_HOSTID_STORE_USER_ENTRY@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@@Z @ 0x180043320
 * Callers:
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180042948 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 * Callees:
 *     ?HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z @ 0x1800434C4 (-HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 */

void __fastcall HampHostIdStoreApplicationInitialize(
        struct _HAM_HOSTID_STORE_USER_ENTRY *a1,
        struct _HAM_HOSTID_STORE_KEY *a2,
        struct _HAM_HOSTID_STORE_APPLICATION_ENTRY *a3)
{
  __int64 v6; // rax
  _OWORD *v7; // rdi
  __int128 v8; // xmm1

  memset_0(a3, 0, 0x228uLL);
  HamRcNodeInitialize((void (*)(struct _CEM_RC_OBJECT *))HampHostIdStoreLeafDestroy, a1, a3);
  v6 = 3LL;
  v7 = (_OWORD *)((char *)a3 + 88);
  do
  {
    *v7 = *(_OWORD *)a2;
    v7[1] = *((_OWORD *)a2 + 1);
    v7[2] = *((_OWORD *)a2 + 2);
    v7[3] = *((_OWORD *)a2 + 3);
    v7[4] = *((_OWORD *)a2 + 4);
    v7[5] = *((_OWORD *)a2 + 5);
    v7[6] = *((_OWORD *)a2 + 6);
    v7 += 8;
    v8 = *((_OWORD *)a2 + 7);
    a2 = (struct _HAM_HOSTID_STORE_KEY *)((char *)a2 + 128);
    *(v7 - 1) = v8;
    --v6;
  }
  while ( v6 );
  *v7 = *(_OWORD *)a2;
  v7[1] = *((_OWORD *)a2 + 1);
  v7[2] = *((_OWORD *)a2 + 2);
  v7[3] = *((_OWORD *)a2 + 3);
  v7[4] = *((_OWORD *)a2 + 4);
}
