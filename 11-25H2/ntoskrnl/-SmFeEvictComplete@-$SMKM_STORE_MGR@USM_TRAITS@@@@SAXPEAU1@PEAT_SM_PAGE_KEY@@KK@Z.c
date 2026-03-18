/*
 * XREFs of ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1403D4BC4
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14034B1F0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     ?StLockReleaseExclusive@@YAXPEAUVLOCK@@K@Z @ 0x14031F750 (-StLockReleaseExclusive@@YAXPEAUVLOCK@@K@Z.c)
 *     ExQueueWorkItemToPartition @ 0x1403AC7C0 (ExQueueWorkItemToPartition.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403D4F70 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1403D5180 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403D5BE0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x1403D5C00 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x1403D5C30 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictComplete(__int64 a1, unsigned int *a2, int a3, int a4)
{
  unsigned int v4; // ebx
  int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // r8
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rdx
  int v21; // eax
  unsigned __int64 v22; // rax
  _OWORD *v23; // rcx
  __int64 v24; // r9
  int v25; // r8d
  _QWORD *v26; // rax
  __int64 v28; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v29; // [rsp+38h] [rbp-C8h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+50h] [rbp-B0h] BYREF
  __int64 Object; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v32[3]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v33; // [rsp+90h] [rbp-70h]
  int v34; // [rsp+94h] [rbp-6Ch]
  _BYTE *v35; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v36[2]; // [rsp+A8h] [rbp-58h] BYREF
  int v37; // [rsp+B8h] [rbp-48h]
  int v38; // [rsp+BCh] [rbp-44h]
  __int64 v39; // [rsp+C0h] [rbp-40h]
  _BYTE v40[136]; // [rsp+C8h] [rbp-38h] BYREF

  v4 = *a2;
  LODWORD(v28) = a4;
  memset_0(v40, 0, 0x80uLL);
  v36[0] = 0LL;
  v36[1] = 0LL;
  v39 = 0LL;
  v37 = 0;
  v7 = 0;
  v35 = v40;
  v29 = 0LL;
  v38 = 8;
  StLockAcquireExclusive((struct VLOCK *)(a1 + 440));
  while ( 1 )
  {
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      a1 + 448,
      v4,
      &v35);
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v8,
      &v29,
      &v35);
    v9 = v29;
    if ( (_QWORD)v29 )
    {
      v10 = *((_QWORD *)&v29 + 1) + 8LL;
      v11 = v10;
      v12 = (unsigned __int16)*(_DWORD *)v29 + 2LL;
      *((_QWORD *)&v29 + 1) += 8LL;
      if ( v10 >= (__int64)v29 + 8 * v12 )
      {
        v22 = *(_QWORD *)(v29 + 8);
        if ( v22 )
        {
          v9 = *(_QWORD *)(v29 + 8);
          *(_QWORD *)&v29 = v9;
          v11 = v22 + 16;
          *((_QWORD *)&v29 + 1) = v22 + 16;
        }
        v10 = (v22 + 16) & ((unsigned __int128)-(__int128)v22 >> 64);
      }
    }
    else
    {
      v11 = *((_QWORD *)&v29 + 1);
      v10 = 0LL;
    }
    *(_BYTE *)(v10 + 6) = 0;
    if ( v37 == -1 || !v37 )
      v13 = v36;
    else
      v13 = &v35[16 * (v37 - 1)];
    if ( *v13 == v9 )
    {
      v13[1] = v11;
    }
    else
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        v13,
        &v35);
      if ( v37 == v25 )
      {
        *v23 = v29;
      }
      else
      {
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
          a1 + 448,
          *(unsigned int *)(v24 + 16),
          &v35);
        if ( v37 == -1 || !v37 )
          v26 = v36;
        else
          v26 = &v35[16 * (v37 - 1)];
        v26[1] = v11;
      }
    }
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
      a1 + 448,
      &v35);
    if ( ++v7 == a3 )
      break;
    ++v4;
  }
  StLockReleaseExclusive(a1 + 440, v14);
  v15 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)(v28 & 0x3FF) >> 5));
  if ( v15 )
    v16 = (__int64 *)(v15 + 40 * (v28 & 0x1F));
  else
    v16 = 0LL;
  v17 = *v16;
  WorkItem.List.Blink = 0LL;
  BYTE3(Object) = 0;
  v34 = 0;
  v18 = *(_DWORD *)(v17 + 6832) & 0x3FF;
  v28 = 0LL;
  v19 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)v18 >> 5));
  if ( v19 )
    v20 = v19 + 40LL * (v18 & 0x1F);
  else
    v20 = 0LL;
  LOBYTE(v21) = *(_BYTE *)(v20 + 34);
  if ( (v21 & 1) != 0 && !*(_QWORD *)(v17 + 88) )
  {
    _m_prefetchw((const void *)(v20 + 34));
    LOBYTE(v21) = _InterlockedOr8((volatile signed __int8 *)(v20 + 34), 2u);
    if ( (v21 & 2) == 0 )
    {
      v21 = guard_dispatch_icall_no_overrides(a1, &v28);
      if ( v21 >= 0 )
      {
        v32[1] = v32;
        v32[0] = v32;
        WorkItem.WorkerRoutine = (void (__fastcall *)(void *))SmKmStoreDeleteWhenEmptyWorker;
        WorkItem.Parameter = &WorkItem;
        WorkItem.List.Blink = 0LL;
        Object = 393216LL;
        v34 = 0;
        v32[2] = a1;
        v33 = v18;
        WorkItem.List.Flink = 0LL;
        if ( v28 )
          ExQueueWorkItemToPartition(&WorkItem, 1, 0xFFFFFFFF, v28);
        else
          ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
        LOBYTE(v21) = KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
      }
    }
  }
  return v21;
}
