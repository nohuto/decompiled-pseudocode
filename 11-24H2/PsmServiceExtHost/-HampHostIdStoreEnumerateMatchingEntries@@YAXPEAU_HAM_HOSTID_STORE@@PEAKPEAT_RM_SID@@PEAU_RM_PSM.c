/*
 * XREFs of ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z5@Z @ 0x180041EFC
 * Callers:
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800416F8 (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIdStoreInvalidateForSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_SESSION@@@Z @ 0x180044F58 (-HampHostIdStoreInvalidateForSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_SESSION@@@Z.c)
 *     ?HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z @ 0x1800548FC (-HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z.c)
 *     ?HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z @ 0x18006DE24 (-HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180081610 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostIdStoreInvalidateForApplication@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_APPLICATION@@@Z @ 0x180084224 (-HampHostIdStoreInvalidateForApplication@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180084AD8 (-HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180016950 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampHostIdStoreCompareApplicationByKey@@YAJPEAX0@Z @ 0x1800428B0 (-HampHostIdStoreCompareApplicationByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreCompareSessionByKey@@YAJPEAX0@Z @ 0x180042FA0 (-HampHostIdStoreCompareSessionByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreCompareUserByKey@@YAJPEAX0@Z @ 0x180042FC0 (-HampHostIdStoreCompareUserByKey@@YAJPEAX0@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180043160 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall HampHostIdStoreEnumerateMatchingEntries(
        struct _HAM_HOSTID_STORE *a1,
        unsigned int *a2,
        union _RM_SID *a3,
        struct _RM_PSM_KEY *a4,
        unsigned int (*a5)(struct _HAM_HOSTID_ENTRY *, void *),
        void *a6)
{
  unsigned __int64 v6; // rsi
  struct _HAM_RC_TREE_NODE *v7; // rbx
  unsigned __int64 v9; // r14
  struct _HAM_RC_TREE_NODE *v10; // rbp
  struct _HAM_RC_TREE_NODE *v11; // r12
  union _RM_SID *v12; // r13
  unsigned int v13; // edx
  void *v14; // r15
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  int v17; // r14d
  int v18; // eax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbx
  int v21; // esi
  int v22; // eax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rbx
  int v25; // ebp
  int v26; // eax
  unsigned __int64 v27; // rax
  struct _HAM_RC_TREE_NODE *i; // rax

  v6 = 0LL;
  v7 = (struct _HAM_HOSTID_STORE *)((char *)a1 + 16);
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = a3;
  v13 = 4;
  if ( !a2 )
  {
LABEL_16:
    if ( v12 )
    {
      RtlAcquireSRWLockShared(v9 + 56);
      v20 = *(_QWORD *)(v9 + 40);
      v21 = *(_BYTE *)(v9 + 48) & 1;
      if ( (*(_BYTE *)(v9 + 48) & 1) == 0 )
        goto LABEL_28;
      if ( v20 )
      {
        v20 ^= v9 + 40;
LABEL_28:
        while ( v20 )
        {
          v22 = HampHostIdStoreCompareUserByKey(v12, (void *)v20);
          if ( v22 < 0 )
          {
            v23 = *(_QWORD *)v20;
          }
          else
          {
            if ( v22 <= 0 )
              break;
            v23 = *(_QWORD *)(v20 + 8);
          }
          if ( v21 && v23 )
            v20 ^= v23;
          else
            v20 = v23;
        }
      }
      v6 = v20;
      if ( v20 )
      {
        if ( *(_QWORD *)(v20 + 24) )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v20 + 24)) <= 1 )
            __fastfail(0xEu);
        }
        else
        {
          v6 = 0LL;
        }
      }
      RtlReleaseSRWLockShared(v9 + 56);
      if ( !v6 )
        goto LABEL_61;
      v7 = (struct _HAM_RC_TREE_NODE *)v6;
      v13 = 2;
    }
    if ( a4 )
    {
      RtlAcquireSRWLockShared(v6 + 56);
      v24 = *(_QWORD *)(v6 + 40);
      v25 = *(_BYTE *)(v6 + 48) & 1;
      if ( (*(_BYTE *)(v6 + 48) & 1) == 0 )
        goto LABEL_46;
      if ( v24 )
      {
        v24 ^= v6 + 40;
LABEL_46:
        while ( v24 )
        {
          v26 = HampHostIdStoreCompareApplicationByKey(a4, (void *)v24);
          if ( v26 < 0 )
          {
            v27 = *(_QWORD *)v24;
          }
          else
          {
            if ( v26 <= 0 )
              break;
            v27 = *(_QWORD *)(v24 + 8);
          }
          if ( v25 && v27 )
            v24 ^= v27;
          else
            v24 = v27;
        }
      }
      v10 = (struct _HAM_RC_TREE_NODE *)v24;
      if ( v24 )
      {
        if ( *(_QWORD *)(v24 + 24) )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v24 + 24)) <= 1 )
            __fastfail(0xEu);
        }
        else
        {
          v10 = 0LL;
        }
      }
      RtlReleaseSRWLockShared(v6 + 56);
      if ( !v10 )
        goto LABEL_61;
      v7 = v10;
      v13 = 1;
    }
    for ( i = HamRcNodeGetFirst(v7, v13); ; i = HamRcNodeGetSuccessor(v7, v11) )
    {
      v11 = i;
      if ( !i || !((unsigned int (__fastcall *)(struct _HAM_RC_TREE_NODE *, void *))a5)(i, a6) )
        break;
    }
    if ( v10 )
      CemRcObjectDereference(v10);
LABEL_61:
    if ( v9 )
      CemRcObjectDereference((_QWORD *)v9);
    if ( v6 )
      CemRcObjectDereference((_QWORD *)v6);
    if ( v11 )
      CemRcObjectDereference(v11);
    return;
  }
  v14 = (void *)*a2;
  v15 = (unsigned __int64)a1 + 56;
  RtlAcquireSRWLockShared((char *)a1 + 72);
  v16 = *(_QWORD *)v15;
  v17 = *(_BYTE *)(v15 + 8) & 1;
  if ( (*(_BYTE *)(v15 + 8) & 1) == 0 )
    goto LABEL_10;
  if ( v16 )
  {
    v16 ^= v15;
LABEL_10:
    while ( v16 )
    {
      v18 = HampHostIdStoreCompareSessionByKey(v14, (void *)v16);
      if ( v18 < 0 )
      {
        v19 = *(_QWORD *)v16;
      }
      else
      {
        if ( v18 <= 0 )
          break;
        v19 = *(_QWORD *)(v16 + 8);
      }
      if ( v17 && v19 )
        v16 ^= v19;
      else
        v16 = v19;
    }
  }
  v9 = v16;
  if ( v16 )
  {
    if ( *(_QWORD *)(v16 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v16 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v9 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v15 + 16);
  if ( v9 )
  {
    v12 = a3;
    v7 = (struct _HAM_RC_TREE_NODE *)v9;
    v13 = 3;
    goto LABEL_16;
  }
}
