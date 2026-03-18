/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x1403D4900
 * Callers:
 *     ?BTreeInsert@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x1403D4730 (-BTreeInsert@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403D6038 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 * Callees:
 *     SmArrayGrow @ 0x1403980C8 (SmArrayGrow.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1403D41AC (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403D5C90 (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403D6038 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
        char **a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rcx
  unsigned int *v7; // r8
  int v8; // ebx
  char **v9; // rdi
  char *v10; // rbx
  unsigned int v11; // ebp
  unsigned int v12; // ecx
  char *v13; // rdi
  int v14; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // r10
  int v22; // edx
  int v23; // ecx
  __int64 v24; // rcx
  int v25; // r8d
  int v26; // eax
  int v27; // edx
  int v28; // r12d
  char *v29; // r9
  char *v30; // rax
  char *v31; // rax
  int v32; // r12d

  if ( *a1 )
    v6 = (unsigned __int8)(*a1)[2];
  else
    v6 = 0LL;
  v7 = (unsigned int *)(a2 + 28);
  v8 = *(_DWORD *)(a2 + 24);
  if ( *(_DWORD *)(a2 + 28) <= (unsigned int)v6 && !(unsigned int)SmArrayGrow(v6, a2, v7, (const void **)a2) )
    return 3221225626LL;
  if ( v8 )
  {
    v9 = (char **)(*(_QWORD *)a2 + 16LL * (unsigned int)(v8 - 1));
  }
  else
  {
    v31 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            v6,
            1,
            1);
    *a1 = v31;
    if ( !v31 )
      return 3221225626LL;
    v9 = *(char ***)a2;
    *v9 = v31;
    v9[1] = *a1 + 16;
    ++*(_DWORD *)(a2 + 24);
  }
  v10 = *v9;
  v11 = 510;
  v12 = *(_DWORD *)*v9;
  if ( !(*v9)[3] )
    v11 = 255;
  if ( (unsigned __int16)v12 >= v11 )
  {
    v16 = HIBYTE(v12);
    v17 = v9[1] - v10 - 16;
    v18 = v17 >> 3;
    v19 = v17 >> 4;
    if ( !(_BYTE)v16 )
      LODWORD(v18) = v19;
    if ( v10 == *a1 )
    {
      v21 = 0LL;
      v20 = 0LL;
    }
    else
    {
      v20 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
              v16,
              a2);
      v21 = (__int64)&(*(v9 - 1))[32 * ((v20 & 1) == 0) - 16];
    }
    v22 = HIBYTE(*(_DWORD *)v10);
    v23 = (unsigned __int16)*(_DWORD *)v10;
    if ( v23 >= v11 )
    {
      v24 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
              a1,
              a2,
              v7,
              v20);
      if ( !v24 )
        return 3221225626LL;
      v25 = v18;
      v26 = *(_DWORD *)v10;
      v9 = (char **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      v27 = (unsigned __int16)*(_DWORD *)v10;
      if ( (int)v18 > v27 )
      {
        *(v9 - 1) += 16;
        v28 = v18 - v27;
        v10 = (char *)v24;
        v25 = v28 - 1;
        if ( HIBYTE(v26) )
          v25 = v28;
      }
      goto LABEL_28;
    }
    if ( (v20 & 1) == 0 )
    {
      v25 = v18;
      if ( (int)v18 > v23 )
      {
        v32 = v18 - v23;
        *(v9 - 1) = (char *)v21;
        v10 = (char *)v20;
        v25 = v32 - 1;
        if ( (_BYTE)v22 )
          v25 = v32;
      }
      goto LABEL_28;
    }
    v29 = (char *)(v20 & 0xFFFFFFFFFFFFFFFEuLL);
    v25 = v18 + v23 - v11;
    if ( (_BYTE)v22 )
    {
      if ( v25 <= 0 )
      {
        v10 = v29;
        v25 += (unsigned __int16)*(_DWORD *)v29;
        goto LABEL_45;
      }
    }
    else if ( v25 < 0 )
    {
      v10 = v29;
      v25 += (unsigned __int16)*(_DWORD *)v29 + 1;
      goto LABEL_45;
    }
    if ( v10 != v29 )
    {
LABEL_28:
      *v9 = v10;
      if ( v10[3] )
        v30 = &v10[8 * v25 + 16];
      else
        v30 = &v10[16 * v25 + 16];
      v9[1] = v30;
      goto LABEL_9;
    }
LABEL_45:
    *(v9 - 1) = (char *)v21;
    goto LABEL_28;
  }
LABEL_9:
  v13 = v9[1];
  v14 = *(_DWORD *)v10;
  if ( v10[3] )
  {
    memmove(v13 + 8, v13, (size_t)&v10[8LL * (unsigned __int16)v14 + 16 - (_QWORD)v13]);
    *(_QWORD *)v13 = *a3;
    ++a1[1];
  }
  else
  {
    memmove(v13 + 16, v13, (size_t)&v10[16 * ((unsigned __int16)v14 + 1LL) - (_QWORD)v13]);
    *(_OWORD *)v13 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v10;
  return 0LL;
}
