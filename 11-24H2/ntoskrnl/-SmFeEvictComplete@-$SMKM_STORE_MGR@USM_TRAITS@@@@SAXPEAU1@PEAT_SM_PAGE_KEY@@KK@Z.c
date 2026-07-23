/*
 * XREFs of ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1402E7EB8
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14022FD60 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x140279D60 (ExQueueWorkItemToPartition.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E8290 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1402E84A0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E8F00 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E8F20 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x1402E93D0 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictComplete(__int64 a1, unsigned int *a2, int a3, int a4)
{
  unsigned int v4; // ebx
  int v7; // r15d
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // r8
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // eax
  unsigned __int64 v21; // rax
  _OWORD *v22; // rcx
  __int64 v23; // r9
  int v24; // r8d
  _QWORD *v25; // rax
  __int64 v27; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v28; // [rsp+38h] [rbp-C8h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+50h] [rbp-B0h] BYREF
  __int64 Object; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v31[3]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v32; // [rsp+90h] [rbp-70h]
  int v33; // [rsp+94h] [rbp-6Ch]
  _BYTE *v34; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v35[2]; // [rsp+A8h] [rbp-58h] BYREF
  int v36; // [rsp+B8h] [rbp-48h]
  int v37; // [rsp+BCh] [rbp-44h]
  __int64 v38; // [rsp+C0h] [rbp-40h]
  _BYTE v39[136]; // [rsp+C8h] [rbp-38h] BYREF

  v4 = *a2;
  LODWORD(v27) = a4;
  memset_0(v39, 0, 0x80uLL);
  v35[0] = 0LL;
  v35[1] = 0LL;
  v38 = 0LL;
  v36 = 0;
  v7 = 0;
  v34 = v39;
  v28 = 0LL;
  v37 = 8;
  StLockAcquireExclusive((struct VLOCK *)(a1 + 440));
  while ( 1 )
  {
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      a1 + 448,
      v4,
      &v34);
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v8,
      &v28,
      &v34);
    v9 = v28;
    if ( (_QWORD)v28 )
    {
      v10 = *((_QWORD *)&v28 + 1) + 8LL;
      v11 = v10;
      v12 = (unsigned __int16)*(_DWORD *)v28 + 2LL;
      *((_QWORD *)&v28 + 1) += 8LL;
      if ( v10 >= (__int64)v28 + 8 * v12 )
      {
        v21 = *(_QWORD *)(v28 + 8);
        if ( v21 )
        {
          v9 = *(_QWORD *)(v28 + 8);
          *(_QWORD *)&v28 = v9;
          v11 = v21 + 16;
          *((_QWORD *)&v28 + 1) = v21 + 16;
        }
        v10 = (v21 + 16) & ((unsigned __int128)-(__int128)v21 >> 64);
      }
    }
    else
    {
      v11 = *((_QWORD *)&v28 + 1);
      v10 = 0LL;
    }
    *(_BYTE *)(v10 + 6) = 0;
    if ( v36 == -1 || !v36 )
      v13 = v35;
    else
      v13 = &v34[16 * (v36 - 1)];
    if ( *v13 == v9 )
    {
      v13[1] = v11;
    }
    else
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        v13,
        &v34);
      if ( v36 == v24 )
      {
        *v22 = v28;
      }
      else
      {
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
          a1 + 448,
          *(unsigned int *)(v23 + 16),
          &v34);
        if ( v36 == -1 || !v36 )
          v25 = v35;
        else
          v25 = &v34[16 * (v36 - 1)];
        v25[1] = v11;
      }
    }
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
      a1 + 448,
      &v34);
    if ( ++v7 == a3 )
      break;
    ++v4;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 440), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
  KeAbPostRelease(a1 + 440);
  KeLeaveGuardedRegion();
  v14 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)(v27 & 0x3FF) >> 5));
  if ( v14 )
    v15 = (__int64 *)(v14 + 40 * (v27 & 0x1F));
  else
    v15 = 0LL;
  v16 = *v15;
  WorkItem.List.Blink = 0LL;
  BYTE3(Object) = 0;
  v33 = 0;
  v17 = *(_DWORD *)(v16 + 6832) & 0x3FF;
  v27 = 0LL;
  v18 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)v17 >> 5));
  if ( v18 )
    v19 = v18 + 40LL * (v17 & 0x1F);
  else
    v19 = 0LL;
  LOBYTE(v20) = *(_BYTE *)(v19 + 34);
  if ( (v20 & 1) != 0 && !*(_QWORD *)(v16 + 88) )
  {
    _m_prefetchw((const void *)(v19 + 34));
    LOBYTE(v20) = _InterlockedOr8((volatile signed __int8 *)(v19 + 34), 2u);
    if ( (v20 & 2) == 0 )
    {
      v20 = guard_dispatch_icall_no_overrides(a1, &v27);
      if ( v20 >= 0 )
      {
        v31[1] = v31;
        v31[0] = v31;
        WorkItem.WorkerRoutine = (void (__fastcall *)(void *))SmKmStoreDeleteWhenEmptyWorker;
        WorkItem.Parameter = &WorkItem;
        WorkItem.List.Blink = 0LL;
        Object = 393216LL;
        v33 = 0;
        v31[2] = a1;
        v32 = v17;
        WorkItem.List.Flink = 0LL;
        if ( v27 )
          ExQueueWorkItemToPartition((ULONG_PTR)&WorkItem, 1, 0xFFFFFFFF, v27);
        else
          ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
        LOBYTE(v20) = KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
      }
    }
  }
  return v20;
}
