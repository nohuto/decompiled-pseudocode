/*
 * XREFs of ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z @ 0x1402E7434
 * Callers:
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@E@Z @ 0x1402E6EC4 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x1402F5B40 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 * Callees:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14029F070 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?BTreeInsert@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x1402E7670 (-BTreeInsert@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1402E84A0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x1402E8680 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E8F20 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x1402E93D0 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     ?StLockReleaseExclusive@@YAXPEAUVLOCK@@K@Z @ 0x140360B80 (-StLockReleaseExclusive@@YAXPEAUVLOCK@@K@Z.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(__int64 a1, __int16 *a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v5; // rdi
  struct VLOCK *v6; // r12
  unsigned int v7; // r14d
  unsigned __int64 v8; // r15
  __int16 *v9; // r13
  unsigned __int64 v10; // rdx
  int v11; // ecx
  unsigned int v12; // ebx
  __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned int v15; // r9d
  unsigned int v16; // r10d
  __int64 v17; // rax
  int v18; // edi
  int v19; // r13d
  __int16 *v20; // rsi
  unsigned __int64 v22; // rax
  unsigned int v23; // ebx
  int v24; // [rsp+30h] [rbp-D0h]
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h]
  _QWORD v29[3]; // [rsp+60h] [rbp-A0h] BYREF
  int v30; // [rsp+78h] [rbp-88h]
  int v31; // [rsp+7Ch] [rbp-84h]
  __int64 v32; // [rsp+80h] [rbp-80h]
  _BYTE v33[136]; // [rsp+88h] [rbp-78h] BYREF

  v3 = a3;
  v5 = a1;
  v27 = a1;
  memset_0(v33, 0, 0x80uLL);
  v25 = 0x1000000000000LL;
  v29[1] = 0LL;
  v6 = (struct VLOCK *)(v5 + 440);
  v29[2] = 0LL;
  v7 = 0;
  v32 = 0LL;
  v8 = (unsigned __int64)&a2[8 * v3];
  v30 = 0;
  v9 = a2;
  v29[0] = v33;
  v31 = 8;
  StLockAcquireExclusive((struct VLOCK *)(v5 + 440));
  v11 = 0;
LABEL_2:
  if ( (unsigned __int64)v9 >= v8 )
  {
    StLockReleaseExclusive(v6, v10);
    while ( (unsigned __int64)a2 < v8 )
    {
      SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(*(_QWORD **)(*(_QWORD *)a2 + 32LL), v5, a2[7], *(_QWORD *)a2);
      a2 += 8;
    }
    return 0;
  }
  else
  {
    v12 = *((_DWORD *)v9 + 2);
    v13 = v5 + 448;
    v24 = (unsigned __int16)v9[6] + v11;
    v28 = v13;
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      v13,
      v12,
      v29);
    v26 = 0LL;
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v14,
      &v26,
      v29);
    if ( !(_QWORD)v26 )
      goto LABEL_6;
    v10 = *((_QWORD *)&v26 + 1) + 8LL;
    v17 = (unsigned __int16)*(_DWORD *)v26 + 2LL;
    *((_QWORD *)&v26 + 1) = v10;
    if ( v10 >= (__int64)v26 + 8 * v17 )
    {
      v22 = *(_QWORD *)(v26 + 8);
      if ( v22 )
      {
        *(_QWORD *)&v26 = *(_QWORD *)(v26 + 8);
        *((_QWORD *)&v26 + 1) = v22 + 16;
      }
      v10 = (v22 + 16) & ((unsigned __int128)-(__int128)v22 >> 64);
    }
    if ( v10 && (v15 >= *(_DWORD *)v10 || v16 >= *(_DWORD *)v10) )
    {
      v18 = (*(_BYTE *)(v10 + 7) & 1) != 0 ? -1073740747 : -1073740682;
    }
    else
    {
LABEL_6:
      WORD2(v25) = v9[7];
      while ( 1 )
      {
        LODWORD(v25) = v12;
        v18 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsert(
                v13,
                &v25,
                v29);
        if ( v18 < 0 )
          break;
        v11 = v24;
        if ( ++v7 == v24 )
        {
          v5 = v27;
          v9 += 8;
          goto LABEL_2;
        }
        v13 = v28;
        ++v12;
      }
    }
    if ( v7 && (unsigned __int64)a2 < v8 )
    {
      v19 = v27;
      v20 = a2 + 4;
      do
      {
        v23 = (unsigned __int16)v20[2];
        if ( v7 <= v23 )
          v23 = v7;
        SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(v19, (_DWORD)v20, v23, v15, 2);
        v7 -= v23;
        if ( !v7 )
          break;
        v20 += 8;
      }
      while ( (unsigned __int64)(v20 - 4) < v8 );
    }
    StLockReleaseExclusive(v6, v10);
  }
  return (unsigned int)v18;
}
