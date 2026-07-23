/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x1402E7840
 * Callers:
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E70E0 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     ?BTreeInsert@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x1402E7670 (-BTreeInsert@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@.c)
 * Callees:
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1402E707C (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E70E0 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E9F28 (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$.c)
 *     SmArrayGrow @ 0x14037A5B0 (SmArrayGrow.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdi
  _DWORD *v9; // rbx
  unsigned int v10; // ebp
  unsigned int v11; // ecx
  _QWORD *v12; // rdi
  int v13; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r10
  int v21; // edx
  int v22; // ecx
  _QWORD *v23; // rcx
  int v24; // r8d
  int v25; // eax
  int v26; // edx
  int v27; // r12d
  _DWORD *v28; // r9
  _DWORD *v29; // rax
  _BYTE *v30; // rax
  int v31; // r12d

  if ( *a1 )
    v6 = *(unsigned __int8 *)(*a1 + 2LL);
  else
    v6 = 0LL;
  v7 = *(_DWORD *)(a2 + 24);
  if ( *(_DWORD *)(a2 + 28) <= (unsigned int)v6 && !(unsigned int)SmArrayGrow(v6, a2, a2 + 28, a2) )
    return 3221225626LL;
  if ( v7 )
  {
    v8 = *(_QWORD *)a2 + 16LL * (unsigned int)(v7 - 1);
  }
  else
  {
    v30 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            v6,
            1,
            1);
    *a1 = v30;
    if ( !v30 )
      return 3221225626LL;
    v8 = *(_QWORD *)a2;
    *(_QWORD *)v8 = v30;
    *(_QWORD *)(v8 + 8) = *a1 + 16LL;
    ++*(_DWORD *)(a2 + 24);
  }
  v9 = *(_DWORD **)v8;
  v10 = 255;
  v11 = **(_DWORD **)v8;
  if ( *(_BYTE *)(*(_QWORD *)v8 + 3LL) )
    v10 = 510;
  if ( (unsigned __int16)v11 >= v10 )
  {
    v15 = HIBYTE(v11);
    v16 = *(_QWORD *)(v8 + 8) - (_QWORD)v9 - 16LL;
    v17 = v16 >> 3;
    v18 = v16 >> 4;
    if ( !(_BYTE)v15 )
      LODWORD(v17) = v18;
    if ( v9 == (_DWORD *)*a1 )
    {
      v20 = 0LL;
      v19 = 0LL;
    }
    else
    {
      v19 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
              v15,
              a2);
      v20 = 32LL * ((v19 & 1) == 0) - 16 + *(_QWORD *)(v8 - 8);
    }
    v21 = HIBYTE(*v9);
    v22 = (unsigned __int16)*v9;
    if ( v22 >= v10 )
    {
      v23 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
              a1,
              a2);
      if ( !v23 )
        return 3221225626LL;
      v24 = v17;
      v25 = *v9;
      v8 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
      v26 = (unsigned __int16)*v9;
      if ( (int)v17 > v26 )
      {
        *(_QWORD *)(v8 - 8) += 16LL;
        v27 = v17 - v26;
        v9 = v23;
        v24 = v27 - 1;
        if ( HIBYTE(v25) )
          v24 = v27;
      }
      goto LABEL_28;
    }
    if ( (v19 & 1) == 0 )
    {
      v24 = v17;
      if ( (int)v17 > v22 )
      {
        v31 = v17 - v22;
        *(_QWORD *)(v8 - 8) = v20;
        v9 = (_DWORD *)v19;
        v24 = v31 - 1;
        if ( (_BYTE)v21 )
          v24 = v31;
      }
      goto LABEL_28;
    }
    v28 = (_DWORD *)(v19 & 0xFFFFFFFFFFFFFFFEuLL);
    v24 = v17 + v22 - v10;
    if ( (_BYTE)v21 )
    {
      if ( v24 <= 0 )
      {
        v9 = v28;
        v24 += (unsigned __int16)*v28;
        goto LABEL_46;
      }
    }
    else if ( v24 < 0 )
    {
      v9 = v28;
      v24 += (unsigned __int16)*v28 + 1;
      goto LABEL_46;
    }
    if ( v9 != v28 )
    {
LABEL_28:
      *(_QWORD *)v8 = v9;
      if ( *((_BYTE *)v9 + 3) )
        v29 = &v9[2 * v24 + 4];
      else
        v29 = &v9[4 * v24 + 4];
      *(_QWORD *)(v8 + 8) = v29;
      goto LABEL_9;
    }
LABEL_46:
    *(_QWORD *)(v8 - 8) = v20;
    goto LABEL_28;
  }
LABEL_9:
  v12 = *(_QWORD **)(v8 + 8);
  v13 = *v9;
  if ( *((_BYTE *)v9 + 3) )
  {
    memmove(v12 + 1, v12, (size_t)v9 + 8LL * (unsigned __int16)v13 + 16 - (_QWORD)v12);
    *v12 = *a3;
    ++a1[1];
  }
  else
  {
    memmove(v12 + 2, v12, (size_t)v9 + 16 * ((unsigned __int16)v13 + 1LL) - (_QWORD)v12);
    *(_OWORD *)v12 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v9;
  return 0LL;
}
