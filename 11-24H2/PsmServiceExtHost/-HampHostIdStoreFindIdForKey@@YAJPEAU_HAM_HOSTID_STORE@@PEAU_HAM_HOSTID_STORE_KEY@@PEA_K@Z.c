/*
 * XREFs of ?HampHostIdStoreFindIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x1800592C8
 * Callers:
 *     ?HamSrvFindHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180059140 (-HamSrvFindHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     ?HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180043090 (-HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x1800430E8 (-HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HamRcNodeFindChild@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@PEAXP6AJ11@Z@Z @ 0x1800593F0 (-HamRcNodeFindChild@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@PEAXP6AJ11@Z@Z.c)
 */

__int64 __fastcall HampHostIdStoreFindIdForKey(
        struct _HAM_HOSTID_STORE *a1,
        struct _HAM_HOSTID_STORE_KEY *a2,
        unsigned __int64 *a3)
{
  struct _HAM_RC_TREE_NODE *v6; // rdi
  struct _HAM_RC_TREE_NODE *v7; // rbp
  struct _HAM_RC_TREE_NODE *v8; // r14
  struct _HAM_RC_TREE_NODE *v9; // rsi
  struct _HAM_RC_TREE_NODE *Child; // rax
  unsigned int v11; // ebx
  struct _HAM_RC_TREE_NODE *v12; // rax
  struct _HAM_RC_TREE_NODE *v13; // rax
  struct _HAM_RC_TREE_NODE *v14; // rax

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  HampHostIdStoreAcquireLockShared(a1);
  Child = HamRcNodeFindChild(
            (struct _HAM_HOSTID_STORE *)((char *)a1 + 16),
            (void *)*((unsigned int *)a2 + 133),
            (int (*)(void *, void *))HampHostIdStoreCompareSessionByKey);
  if ( Child
    && (v6 = Child,
        (v12 = HamRcNodeFindChild(Child, (char *)a2 + 464, (int (*)(void *, void *))HampHostIdStoreCompareUserByKey)) != 0LL)
    && (v7 = v12,
        (v13 = HamRcNodeFindChild(v12, a2, (int (*)(void *, void *))HampHostIdStoreCompareApplicationByKey)) != 0LL)
    && (v8 = v13, (v14 = HamRcNodeFindChild(v13, a2, (int (*)(void *, void *))HampHostIdStoreCompareLeafByKey)) != 0LL) )
  {
    v9 = v14;
    v11 = 0;
    *a3 = *((_QWORD *)v14 + 11);
  }
  else
  {
    v11 = -1073741275;
  }
  HampHostIdStoreReleaseLockShared(a1);
  if ( v9 )
    CemRcObjectDereference(v9);
  if ( v8 )
    CemRcObjectDereference(v8);
  if ( v7 )
    CemRcObjectDereference(v7);
  if ( v6 )
    CemRcObjectDereference(v6);
  return v11;
}
