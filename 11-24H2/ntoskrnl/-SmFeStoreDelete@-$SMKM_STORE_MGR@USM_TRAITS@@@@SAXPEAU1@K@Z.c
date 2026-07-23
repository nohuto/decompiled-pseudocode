/*
 * XREFs of ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x140377A60
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x140377C80 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 * Callees:
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x1402E8200 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1402E84A0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E8F20 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x1402E93D0 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     ?StLockReleaseExclusive@@YAXPEAUVLOCK@@K@Z @ 0x140360B80 (-StLockReleaseExclusive@@YAXPEAUVLOCK@@K@Z.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreDelete(__int64 a1, int a2)
{
  int v4; // edi
  unsigned int v5; // ebx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD v13[3]; // [rsp+30h] [rbp-D8h] BYREF
  int v14; // [rsp+48h] [rbp-C0h]
  int v15; // [rsp+4Ch] [rbp-BCh]
  __int64 v16; // [rsp+50h] [rbp-B8h]
  _BYTE v17[136]; // [rsp+58h] [rbp-B0h] BYREF

  memset_0(v17, 0, 0x80uLL);
  v15 = 8;
  v13[1] = 0LL;
  v13[2] = 0LL;
  v16 = 0LL;
  v4 = 1;
  v13[0] = v17;
  v14 = 0;
  v5 = 0;
  v12 = 0LL;
  StLockAcquireExclusive((struct VLOCK *)(a1 + 440));
  v6 = 0LL;
  v7 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
LABEL_2:
  if ( v4 )
    goto LABEL_9;
  while ( v6 )
  {
    v7 += 8LL;
    v8 = (unsigned __int16)*(_DWORD *)v6 + 2LL;
    *((_QWORD *)&v12 + 1) = v7;
    if ( v7 >= v6 + 8 * v8 )
    {
      v11 = *(_QWORD *)(v6 + 8);
      if ( v11 )
      {
        v7 = v11 + 16;
        *(_QWORD *)&v12 = *(_QWORD *)(v6 + 8);
        *((_QWORD *)&v12 + 1) = v11 + 16;
        v6 = v11;
      }
      v9 = 0LL;
      if ( v11 )
        v9 = v11 + 16;
    }
    else
    {
      v9 = v7;
    }
    if ( !v9 )
      break;
    v5 = *(_DWORD *)v9;
    if ( *(unsigned __int16 *)(v9 + 4) != a2 )
      goto LABEL_2;
    *(_BYTE *)(v9 + 6) = 0;
    SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, (__int64)v13, (__int64 *)&v12);
LABEL_9:
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      (__int64 *)(a1 + 448),
      v5,
      (__int64)v13);
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v10,
      (__int64)&v12,
      (__int64)v13);
    v7 = *((_QWORD *)&v12 + 1);
    v4 = 0;
    v6 = v12;
  }
  StLockReleaseExclusive((struct VLOCK *)(a1 + 440));
}
