/*
 * XREFs of ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14060C9CC
 * Callers:
 *     ?SmProcessIoCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKJK@Z @ 0x1402E8AC0 (-SmProcessIoCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKJK@Z.c)
 *     ?SmEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14060C95C (-SmEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU-$SMKM_STORE@USM_TRA.c)
 * Callees:
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x1402E8200 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1402E84A0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E8F20 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x1402E93D0 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     ?StLockReleaseExclusive@@YAXPEAUVLOCK@@K@Z @ 0x140360B80 (-StLockReleaseExclusive@@YAXPEAUVLOCK@@K@Z.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreEvictKeys(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v3; // ebx
  int v6; // edi
  int v7; // esi
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int128 v13; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v14[3]; // [rsp+30h] [rbp-89h] BYREF
  int v15; // [rsp+48h] [rbp-71h]
  int v16; // [rsp+4Ch] [rbp-6Dh]
  __int64 v17; // [rsp+50h] [rbp-69h]
  _BYTE v18[136]; // [rsp+58h] [rbp-61h] BYREF

  v3 = *a2;
  memset_0(v18, 0, 0x80uLL);
  v14[1] = 0LL;
  v14[2] = 0LL;
  v17 = 0LL;
  v6 = 0;
  v15 = 0;
  v14[0] = v18;
  v13 = 0LL;
  v7 = 1;
  v16 = 8;
  StLockAcquireExclusive((struct VLOCK *)(a1 + 440));
  v8 = 0LL;
  while ( 1 )
  {
    if ( v7 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        (__int64 *)(a1 + 448),
        v3,
        (__int64)v14);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v9,
        (__int64)&v13,
        (__int64)v14);
      v8 = v13;
      v7 = 0;
    }
    if ( v8 )
    {
      v10 = *((_QWORD *)&v13 + 1) + 8LL;
      v11 = (unsigned __int16)*(_DWORD *)v8 + 2LL;
      *((_QWORD *)&v13 + 1) = v10;
      if ( v10 >= v8 + 8 * v11 )
      {
        v12 = *(_QWORD *)(v8 + 8);
        if ( v12 )
        {
          v8 = *(_QWORD *)(v8 + 8);
          *(_QWORD *)&v13 = v12;
          *((_QWORD *)&v13 + 1) = v12 + 16;
        }
        v10 = (v12 + 16) & ((unsigned __int128)-(__int128)v12 >> 64);
      }
    }
    else
    {
      v10 = 0LL;
    }
    if ( *(_BYTE *)(v10 + 6) == 3 )
    {
      *(_BYTE *)(v10 + 6) = 0;
      SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, (__int64)v14, (__int64 *)&v13);
      v8 = v13;
      v7 = 1;
    }
    if ( ++v6 == a3 )
      break;
    ++v3;
  }
  StLockReleaseExclusive((struct VLOCK *)(a1 + 440));
}
