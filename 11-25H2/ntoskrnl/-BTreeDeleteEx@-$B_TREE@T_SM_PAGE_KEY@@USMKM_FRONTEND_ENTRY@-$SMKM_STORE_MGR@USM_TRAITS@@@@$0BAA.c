/*
 * XREFs of ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403D4F70
 * Callers:
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1403D4BC4 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x1403D4EE0 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x1403D5360 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmProcessIoCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKJK@Z @ 0x1403D57A0 (-SmProcessIoCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKJK@Z.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x1403D5F30 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 * Callees:
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403D5C90 (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x1403D5F30 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
        unsigned int **a1,
        __int64 a2)
{
  unsigned __int64 *v4; // rsi
  unsigned int *v5; // rbx
  char *v6; // rcx
  int v7; // eax
  __int64 v8; // rdi
  unsigned int v9; // ebp
  __int64 v10; // rax
  size_t v11; // rdi
  __int64 v12; // rcx
  _DWORD *v13; // rdx
  _QWORD *i; // rcx
  unsigned __int64 v16; // r9
  __int64 v17; // r12
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax

  v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v5 = (unsigned int *)*v4;
  v6 = (char *)v4[1];
  v7 = *(_DWORD *)*v4;
  if ( *(_BYTE *)(*v4 + 3) )
  {
    v8 = 8LL * (unsigned __int16)v7 + 8;
    v9 = 255;
    v10 = 8LL;
  }
  else
  {
    v9 = 127;
    v8 = 16LL * (unsigned __int16)v7;
    v10 = 16LL;
  }
  v11 = (size_t)v5 + v8 - (_QWORD)v6;
  if ( v11 )
    memmove(v6, &v6[v10], v11);
  --*(_WORD *)v5;
  if ( *((_BYTE *)v5 + 3) )
    a1[1] = (unsigned int *)((char *)a1[1] - 1);
  v12 = *v5;
  if ( *a1 == v5 )
  {
    if ( !(_WORD)v12 && !HIBYTE(*v5) )
    {
      memmove(v4, v4 + 2, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      --*(_DWORD *)(a2 + 24);
      *a1 = (unsigned int *)*((_QWORD *)v5 + 1);
      ExFreePoolWithTag(v5, 0);
    }
    return 0LL;
  }
  if ( (unsigned __int16)v12 < v9 )
  {
    v17 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
            v12,
            a2);
    if ( !v17 )
      return 3221225478LL;
    if ( (unsigned __int16)*v5 >= v9 )
    {
      if ( (v17 & 1) == 0 )
        goto LABEL_9;
      v21 = (unsigned __int16)*v5 - v9 + 1;
      v22 = v4[1];
      if ( !HIBYTE(*v5) )
      {
        v4[1] = v22 + 16 * v21;
        goto LABEL_9;
      }
      v23 = v22 + 8 * v21;
    }
    else
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeMergeNodes(
        a1,
        a2,
        v17);
      v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      if ( (v17 & 1) == 0 )
        goto LABEL_9;
      v18 = v17 & 0xFFFFFFFFFFFFFFFEuLL;
      *v4 = v18;
      v19 = (unsigned __int16)*(_DWORD *)v18;
      if ( *(_BYTE *)(v18 + 3) )
        v20 = 8 * v19 + 16;
      else
        v20 = 16 * (v19 + 1);
      v23 = v18 + v20 - v11;
    }
    v4[1] = v23;
  }
LABEL_9:
  v13 = (_DWORD *)v4[1];
  if ( v13 == (_DWORD *)(*v4 + 16) && *(_BYTE *)(*v4 + 3) )
  {
    for ( i = (_QWORD *)(*(_QWORD *)a2 + 16 * (*(unsigned int *)(a2 + 24) - 2LL));
          (unsigned __int64)i >= *(_QWORD *)a2;
          i -= 2 )
    {
      v16 = i[1];
      if ( v16 > *i + 16LL )
      {
        *(_DWORD *)(v16 - 16) = *v13;
        return 0LL;
      }
    }
  }
  return 0LL;
}
