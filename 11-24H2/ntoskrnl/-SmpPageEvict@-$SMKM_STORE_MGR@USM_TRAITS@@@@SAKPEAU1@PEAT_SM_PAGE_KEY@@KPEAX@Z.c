/*
 * XREFs of ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x1402E8F50
 * Callers:
 *     MiStoreEvictPageFile @ 0x140337B90 (MiStoreEvictPageFile.c)
 * Callees:
 *     SmKmStoreDereference @ 0x14022FA28 (SmKmStoreDereference.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14029F070 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x1402A1234 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x1402E9110 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     SmFpAllocate @ 0x1402E96E0 (SmFpAllocate.c)
 *     MmStoreEvictComplete @ 0x1402E9818 (MmStoreEvictComplete.c)
 *     SmFpFree @ 0x140421480 (SmFpFree.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140608B24 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(__int64 a1, _DWORD *a2, unsigned int a3, __int64 a4)
{
  _DWORD *v6; // rsi
  int v7; // eax
  unsigned int v8; // r15d
  int v9; // r14d
  unsigned int v10; // ebp
  __int64 v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // r13
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rax
  int v18; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v19; // [rsp+A8h] [rbp+20h] BYREF
  int v20; // [rsp+ACh] [rbp+24h]

  v20 = HIDWORD(a4);
  v19 = a3;
  v18 = 0;
  v6 = 0LL;
  v7 = SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictInitiate(a1, a2, &v19, &v18);
  v8 = v18;
  v9 = v7;
  v10 = v19;
  if ( v18 > v19 )
    MmStoreEvictComplete(*(_QWORD *)(a1 + 2096), v19 + *a2, v18 - v19);
  if ( v9 != 1024 )
  {
    v11 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)(v9 & 0x3FF) >> 5));
    v12 = v11 ? (__int64 *)(v11 + 40LL * (v9 & 0x1F)) : 0LL;
    v13 = *v12;
    v18 = *(_DWORD *)(a1 + 2000) & 1;
    v14 = (_QWORD *)SmFpAllocate((PEX_SPIN_LOCK)(a1 + 1584), v18);
    v15 = v14;
    if ( !v14 )
      goto LABEL_9;
    v14[1] = 0LL;
    *v14 = 0LL;
    v16 = SmFpAllocate((PEX_SPIN_LOCK)(a1 + 1584), v18);
    v6 = (_DWORD *)v16;
    if ( !v16
      || (*(_DWORD *)(v16 + 4) = 0,
          *(_QWORD *)(v16 + 16) = 0LL,
          *(_QWORD *)(v16 + 24) = 0LL,
          *(_DWORD *)v16 = 1,
          *(_DWORD *)(v16 + 8) = *a2,
          *(_DWORD *)(v16 + 12) = v10,
          *(_QWORD *)(v16 + 32) = v15,
          (int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(v15, a1, v9, v16) < 0) )
    {
LABEL_9:
      if ( v13 )
      {
        SMKM_STORE_MGR<SM_TRAITS>::SmFeSetEvictFailed(a1, a2, v10);
        SmKmStoreDereference(a1, *(_DWORD *)(v13 + 6832));
      }
      if ( v6 )
        SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(a1, v6, (__int64)v15);
      if ( v15 )
        SmFpFree(a1 + 1584, 0LL, v15, v15);
    }
  }
  return v8;
}
