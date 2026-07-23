/*
 * XREFs of ?BTreeInsert@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x1402E7670
 * Callers:
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z @ 0x1402E7434 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z.c)
 * Callees:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x1402E7840 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     SmArrayGrow @ 0x14037A5B0 (SmArrayGrow.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsert(
        __int64 *a1,
        unsigned int *a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  _QWORD *v4; // r11
  int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rcx
  _DWORD *v11; // r8
  __int64 v12; // r10
  unsigned int v13; // edx
  unsigned int v14; // eax
  _DWORD *v15; // r8

  v3 = *a2;
  v4 = (_QWORD *)(a3 + 8);
  if ( *(_DWORD *)(a3 + 24) == -1 )
  {
    *v4 = 0LL;
    v8 = 0;
LABEL_6:
    v12 = *a1;
    if ( *a1 )
    {
      while ( 1 )
      {
        v13 = -1;
        v14 = (unsigned __int16)*(_DWORD *)v12;
        if ( HIBYTE(*(_DWORD *)v12) )
        {
          if ( (unsigned __int16)*(_DWORD *)v12 )
          {
            do
            {
              if ( *(_DWORD *)(v12 + 8LL * ((v14 + v13) >> 1) + 16) < v3 )
                v13 = (v14 + v13) >> 1;
              else
                v14 = (v14 + v13) >> 1;
            }
            while ( v13 + 1 != v14 );
          }
        }
        else if ( (unsigned __int16)*(_DWORD *)v12 )
        {
          do
          {
            if ( *(_DWORD *)(v12 + 16LL * ((v14 + v13) >> 1) + 16) > v3 )
              v14 = (v14 + v13) >> 1;
            else
              v13 = (v14 + v13) >> 1;
          }
          while ( v13 + 1 != v14 );
        }
        if ( *(_BYTE *)(v12 + 3) )
          break;
        if ( v8 )
        {
          *v4 = v12;
          v4[1] = v12 + 16 * (v14 + 1LL);
          v4 += 2;
        }
        if ( v14 )
          v12 = *(_QWORD *)(v12 + 16LL * (v14 - 1) + 24);
        else
          v12 = *(_QWORD *)(v12 + 8);
      }
      *v4 = v12;
      v15 = (_DWORD *)(v12 + 8 * (v14 + 2LL));
      v4[1] = v15;
      if ( v8 )
        *(_DWORD *)(a3 + 24) = (((__int64)v4 - *(_QWORD *)a3) >> 4) + 1;
      if ( v14 < (unsigned __int16)*(_DWORD *)v12 && *v15 == v3 )
        return 3221225812LL;
    }
    else if ( !v8 )
    {
      *v4 = 0LL;
      v4[1] = 0LL;
    }
    return B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
             a1,
             a3,
             a2);
  }
  *(_DWORD *)(a3 + 24) = 0;
  v8 = 1;
  v9 = *a1;
  v10 = 0LL;
  if ( v9 )
    v10 = *(unsigned __int8 *)(v9 + 2);
  v11 = (_DWORD *)(a3 + 28);
  if ( *v11 >= (unsigned int)v10 || (unsigned int)SmArrayGrow(v10, a2, v11, a3) )
  {
    v4 = *(_QWORD **)a3;
    goto LABEL_6;
  }
  return 3221225626LL;
}
