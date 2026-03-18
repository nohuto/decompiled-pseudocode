/*
 * XREFs of ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14060A564
 * Callers:
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14037BED0 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     ?StLockReleaseExclusive@@YAXPEAUVLOCK@@K@Z @ 0x1402B9440 (-StLockReleaseExclusive@@YAXPEAUVLOCK@@K@Z.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14037B420 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14037BEA0 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x14037C350 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeSetEvictFailed(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v3; // ebx
  int v6; // esi
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int128 v12; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v13[3]; // [rsp+30h] [rbp-89h] BYREF
  int v14; // [rsp+48h] [rbp-71h]
  int v15; // [rsp+4Ch] [rbp-6Dh]
  __int64 v16; // [rsp+50h] [rbp-69h]
  _BYTE v17[136]; // [rsp+58h] [rbp-61h] BYREF

  v3 = *a2;
  memset_0(v17, 0, 0x80uLL);
  v13[1] = 0LL;
  v13[2] = 0LL;
  v16 = 0LL;
  v14 = 0;
  v12 = 0LL;
  v13[0] = v17;
  v6 = 0;
  v15 = 8;
  StLockAcquireExclusive((struct VLOCK *)(a1 + 440));
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    (__int64 *)(a1 + 448),
    v3,
    (__int64)v13);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
    v7,
    (__int64)&v12,
    (__int64)v13);
  v8 = *((_QWORD *)&v12 + 1);
  v9 = v12;
  do
  {
    if ( v9 )
    {
      v8 += 8LL;
      v10 = v8;
      if ( v8 >= v9 + 8 * ((unsigned __int64)(unsigned __int16)*(_DWORD *)v9 + 2) )
      {
        v11 = *(_QWORD *)(v9 + 8);
        if ( v11 )
        {
          v9 = *(_QWORD *)(v9 + 8);
          v8 = v11 + 16;
        }
        v10 = (v11 + 16) & ((unsigned __int128)-(__int128)v11 >> 64);
      }
    }
    else
    {
      v10 = 0LL;
    }
    *(_BYTE *)(v10 + 7) |= 1u;
    ++v6;
    *(_BYTE *)(v10 + 6) = 3;
  }
  while ( v6 != a3 );
  StLockReleaseExclusive((struct VLOCK *)(a1 + 440));
}
