/*
 * XREFs of ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x180014C28
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012FB0 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180040788 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampSessionCompareById@@YAJPEAX0@Z @ 0x180014AB0 (-HampSessionCompareById@@YAJPEAX0@Z.c)
 *     ?HampUserCompareByIdentity@@YAJPEAX0@Z @ 0x180014AD0 (-HampUserCompareByIdentity@@YAJPEAX0@Z.c)
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     ?HamRcNodeFindOrInsertChild@@YAXPEAU_HAM_RC_TREE_NODE@@PEAXP6AJ11@Z0PEAPEAU1@@Z @ 0x180040C48 (-HamRcNodeFindOrInsertChild@@YAXPEAU_HAM_RC_TREE_NODE@@PEAXP6AJ11@Z0PEAPEAU1@@Z.c)
 *     CemRcTableFindOrInsertEx @ 0x180040C80 (CemRcTableFindOrInsertEx.c)
 *     ?HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180064F70 (-HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 *     ?HampUserInitialize@@YAXPEAU_HAM_SESSION@@PEAT_RM_SID@@PEAU_HAM_USER@@@Z @ 0x18006A35C (-HampUserInitialize@@YAXPEAU_HAM_SESSION@@PEAT_RM_SID@@PEAU_HAM_USER@@@Z.c)
 */

__int64 __fastcall HampUserFindOrCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        union _RM_SID *a2,
        unsigned int a3,
        struct _HAM_USER **a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r15
  char *v7; // r12
  struct _HAM_RC_TREE_NODE *v8; // rdi
  struct _HAM_USER *v9; // rbp
  __int64 v10; // rbx
  int v11; // r14d
  int v12; // eax
  __int64 v13; // rax
  struct _HAM_RC_TREE_NODE *v14; // rsi
  __int64 v15; // rbx
  int v16; // esi
  void *v17; // r12
  int v18; // eax
  __int64 v19; // rax
  struct _HAM_USER *v20; // rsi
  int v21; // ebx
  struct _HAM_USER *Heap; // rax
  struct _HAM_USER *v24; // rbx
  int v25; // eax
  struct _HAM_RC_TREE_NODE *v26; // [rsp+30h] [rbp-48h] BYREF
  struct _HAM_USER *v27; // [rsp+38h] [rbp-40h]
  struct _HAM_RC_TREE_NODE *v28; // [rsp+80h] [rbp+8h] BYREF
  void *Buf1; // [rsp+88h] [rbp+10h]
  struct _HAM_USER **v30; // [rsp+98h] [rbp+20h]

  v30 = a4;
  Buf1 = a2;
  v4 = (unsigned __int64)a1 + 392;
  v5 = a3;
  v7 = (char *)a1 + 408;
  v8 = 0LL;
  v26 = 0LL;
  v9 = 0LL;
  v28 = 0LL;
  RtlAcquireSRWLockShared((char *)a1 + 408);
  v10 = *(_QWORD *)v4;
  v11 = *(_BYTE *)(v4 + 8) & 1;
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
  {
    if ( v10 )
    {
      v10 ^= v4;
      goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    while ( v10 )
    {
      v12 = HampSessionCompareById((void *)v5, (_DWORD *)v10);
      if ( v12 < 0 )
      {
        v13 = *(_QWORD *)v10;
      }
      else
      {
        if ( v12 <= 0 )
          break;
        v13 = *(_QWORD *)(v10 + 8);
      }
      if ( v11 && v13 )
        v10 ^= v13;
      else
        v10 = v13;
    }
  }
  v14 = (struct _HAM_RC_TREE_NODE *)v10;
  if ( v10 )
  {
    if ( *(_QWORD *)(v10 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v10 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v14 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v7);
  if ( v14 )
    goto LABEL_14;
  v25 = HampSessionCreate(a1, v5, &v28);
  v14 = v28;
  v21 = v25;
  if ( v25 >= 0 )
  {
    HamRcNodeFindOrInsertChild(
      (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 352),
      (void *)v5,
      (int (*)(void *, void *))HampSessionCompareById,
      v28,
      &v26);
    v8 = v26;
    if ( v26 == v14 )
    {
LABEL_14:
      v8 = v14;
      goto LABEL_15;
    }
    v21 = 0;
  }
  if ( v14 )
    CemRcObjectDereference(v14);
  if ( v21 < 0 )
    goto LABEL_30;
LABEL_15:
  RtlAcquireSRWLockShared((char *)v8 + 56);
  v15 = *((_QWORD *)v8 + 5);
  v16 = *((_BYTE *)v8 + 48) & 1;
  if ( (*((_BYTE *)v8 + 48) & 1) != 0 )
  {
    if ( !v15 )
      goto LABEL_59;
    v15 ^= (unsigned __int64)v8 + 40;
  }
  if ( v15 )
  {
    v17 = Buf1;
    do
    {
      v18 = HampUserCompareByIdentity(v17, (char *)v15);
      if ( v18 < 0 )
      {
        v19 = *(_QWORD *)v15;
      }
      else
      {
        if ( v18 <= 0 )
          goto LABEL_24;
        v19 = *(_QWORD *)(v15 + 8);
      }
      if ( v16 && v19 )
        v15 ^= v19;
      else
        v15 = v19;
    }
    while ( v15 );
    goto LABEL_24;
  }
LABEL_59:
  v17 = Buf1;
LABEL_24:
  v20 = (struct _HAM_USER *)v15;
  if ( v15 )
  {
    if ( *(_QWORD *)(v15 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v15 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v20 = 0LL;
    }
  }
  RtlReleaseSRWLockShared((char *)v8 + 56);
  if ( v20 )
  {
    *v30 = v20;
LABEL_29:
    v21 = 0;
    goto LABEL_30;
  }
  Heap = (struct _HAM_USER *)HampAllocateHeap(0xC8uLL);
  v24 = Heap;
  if ( Heap )
  {
    HampUserInitialize(v8, (union _RM_SID *)v17, Heap);
    v9 = v24;
    v27 = 0LL;
    CemRcTableFindOrInsertEx((_DWORD)v8 + 40, (_DWORD)v17, (unsigned int)HampUserCompareByIdentity, (_DWORD)v24);
    if ( v27 && v27 == v24 )
    {
      v9 = 0LL;
      *v30 = v24;
    }
    else
    {
      *v30 = v27;
    }
    goto LABEL_29;
  }
  v21 = -1073741801;
LABEL_30:
  if ( v8 )
    CemRcObjectDereference(v8);
  if ( v9 )
    CemRcObjectDereference(v9);
  return (unsigned int)v21;
}
