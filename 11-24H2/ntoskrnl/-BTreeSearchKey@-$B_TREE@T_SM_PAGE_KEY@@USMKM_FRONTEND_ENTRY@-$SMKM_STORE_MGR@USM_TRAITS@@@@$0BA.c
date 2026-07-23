/*
 * XREFs of ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1402E84A0
 * Callers:
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z @ 0x1402E7434 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1402E7EB8 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x1402E8200 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x1402E8680 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmProcessIoCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKJK@Z @ 0x1402E8AC0 (-SmProcessIoCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKJK@Z.c)
 *     ?SmFeCheckPresent@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x1402F6760 (-SmFeCheckPresent@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x140377A60 (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140608B24 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14060C9CC (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 * Callees:
 *     SmArrayGrow @ 0x14037A5B0 (SmArrayGrow.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // r11
  unsigned int v5; // ebx
  int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rcx
  _DWORD *v10; // r8
  __int64 v11; // r10
  unsigned int v12; // edx
  unsigned int v13; // eax
  _DWORD *v14; // r8

  v3 = (_QWORD *)(a3 + 8);
  v5 = a2;
  if ( *(_DWORD *)(a3 + 24) == -1 )
  {
    *v3 = 0LL;
    v7 = 0;
LABEL_6:
    v11 = *a1;
    if ( *a1 )
    {
      while ( 1 )
      {
        v12 = -1;
        v13 = (unsigned __int16)*(_DWORD *)v11;
        if ( HIBYTE(*(_DWORD *)v11) )
        {
          if ( (unsigned __int16)*(_DWORD *)v11 )
          {
            do
            {
              if ( *(_DWORD *)(v11 + 8LL * ((v13 + v12) >> 1) + 16) < v5 )
                v12 = (v13 + v12) >> 1;
              else
                v13 = (v13 + v12) >> 1;
            }
            while ( v12 + 1 != v13 );
          }
        }
        else if ( (unsigned __int16)*(_DWORD *)v11 )
        {
          do
          {
            if ( *(_DWORD *)(v11 + 16LL * ((v13 + v12) >> 1) + 16) > v5 )
              v13 = (v13 + v12) >> 1;
            else
              v12 = (v13 + v12) >> 1;
          }
          while ( v12 + 1 != v13 );
        }
        if ( *(_BYTE *)(v11 + 3) )
          break;
        if ( v7 )
        {
          *v3 = v11;
          v3[1] = v11 + 16 * (v13 + 1LL);
          v3 += 2;
        }
        if ( v13 )
          v11 = *(_QWORD *)(v11 + 16LL * (v13 - 1) + 24);
        else
          v11 = *(_QWORD *)(v11 + 8);
      }
      *v3 = v11;
      v14 = (_DWORD *)(v11 + 8 * (v13 + 2LL));
      v3[1] = v14;
      if ( v7 )
        *(_DWORD *)(a3 + 24) = (((__int64)v3 - *(_QWORD *)a3) >> 4) + 1;
      if ( v13 < (unsigned __int16)*(_DWORD *)v11 && *v14 == v5 )
        return 0LL;
    }
    else if ( !v7 )
    {
      *v3 = 0LL;
      v3[1] = 0LL;
    }
    return 3221226021LL;
  }
  *(_DWORD *)(a3 + 24) = 0;
  v7 = 1;
  v8 = *a1;
  v9 = 0LL;
  if ( v8 )
    v9 = *(unsigned __int8 *)(v8 + 2);
  v10 = (_DWORD *)(a3 + 28);
  if ( *v10 >= (unsigned int)v9 || (unsigned int)SmArrayGrow(v9, a2, v10, a3) )
  {
    v3 = *(_QWORD **)a3;
    goto LABEL_6;
  }
  return 3221225626LL;
}
