/*
 * XREFs of ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z @ 0x14037A3BC
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x140246820 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@E@Z @ 0x140379F54 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 * Callees:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14028F470 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?StLockReleaseExclusive@@YAXPEAUVLOCK@@K@Z @ 0x1402B9440 (-StLockReleaseExclusive@@YAXPEAUVLOCK@@K@Z.c)
 *     ?BTreeInsert@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x14037A5F0 (-BTreeInsert@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14037B420 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14037B600 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14037BEA0 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x14037C350 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(__int64 a1, __int16 *a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v5; // rdi
  struct VLOCK *v6; // r12
  unsigned int v7; // r14d
  unsigned __int64 v8; // r15
  __int16 *v9; // r13
  int v10; // ecx
  unsigned int v11; // ebx
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned int v14; // r9d
  unsigned int v15; // r10d
  unsigned __int64 v16; // rdx
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
  v10 = 0;
LABEL_2:
  if ( (unsigned __int64)v9 >= v8 )
  {
    StLockReleaseExclusive(v6);
    while ( (unsigned __int64)a2 < v8 )
    {
      SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(*(_QWORD **)(*(_QWORD *)a2 + 32LL), v5, a2[7], *(_QWORD *)a2);
      a2 += 8;
    }
    return 0;
  }
  else
  {
    v11 = *((_DWORD *)v9 + 2);
    v12 = v5 + 448;
    v24 = (unsigned __int16)v9[6] + v10;
    v28 = v12;
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      v12,
      v11,
      v29);
    v26 = 0LL;
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v13,
      &v26,
      v29);
    if ( !(_QWORD)v26 )
      goto LABEL_6;
    v16 = *((_QWORD *)&v26 + 1) + 8LL;
    v17 = (unsigned __int16)*(_DWORD *)v26 + 2LL;
    *((_QWORD *)&v26 + 1) = v16;
    if ( v16 >= (__int64)v26 + 8 * v17 )
    {
      v22 = *(_QWORD *)(v26 + 8);
      if ( v22 )
      {
        *(_QWORD *)&v26 = *(_QWORD *)(v26 + 8);
        *((_QWORD *)&v26 + 1) = v22 + 16;
      }
      v16 = (v22 + 16) & ((unsigned __int128)-(__int128)v22 >> 64);
    }
    if ( v16 && (v14 >= *(_DWORD *)v16 || v15 >= *(_DWORD *)v16) )
    {
      v18 = (*(_BYTE *)(v16 + 7) & 1) != 0 ? -1073740747 : -1073740682;
    }
    else
    {
LABEL_6:
      WORD2(v25) = v9[7];
      while ( 1 )
      {
        LODWORD(v25) = v11;
        v18 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsert(
                v12,
                &v25,
                v29);
        if ( v18 < 0 )
          break;
        v10 = v24;
        if ( ++v7 == v24 )
        {
          v5 = v27;
          v9 += 8;
          goto LABEL_2;
        }
        v12 = v28;
        ++v11;
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
        SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(v19, (_DWORD)v20, v23, v14, 2);
        v7 -= v23;
        if ( !v7 )
          break;
        v20 += 8;
      }
      while ( (unsigned __int64)(v20 - 4) < v8 );
    }
    StLockReleaseExclusive(v6);
  }
  return (unsigned int)v18;
}
