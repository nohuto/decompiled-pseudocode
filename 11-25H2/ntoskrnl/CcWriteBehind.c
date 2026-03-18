/*
 * XREFs of CcWriteBehind @ 0x1403AC318
 * Callers:
 *     CcWaitForUninitializeCacheMap @ 0x1403AA230 (CcWaitForUninitializeCacheMap.c)
 *     CcCachemapUninitWorkerThread @ 0x1403ABE90 (CcCachemapUninitWorkerThread.c)
 *     CcWorkerThread @ 0x1404DBCE0 (CcWorkerThread.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ExAllocatePoolWithTagFromNode @ 0x1402D9F00 (ExAllocatePoolWithTagFromNode.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x1403AC55C (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     CcReferencePrivateVolumeCacheMap @ 0x1403AC690 (CcReferencePrivateVolumeCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x1403AC6BC (CcFreeWorkQueueEntry.c)
 *     ExQueueWorkItemToPartition @ 0x1403AC7C0 (ExQueueWorkItemToPartition.c)
 *     CcWriteBehindInternal @ 0x1403AC840 (CcWriteBehindInternal.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CcWriteBehind(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  void *v4; // rsi
  __int64 v5; // r15
  __int64 v7; // rdx
  struct _KPRCB *CurrentPrcb; // r13
  _SLIST_ENTRY *v9; // r12
  _GENERAL_LOOKASIDE *P; // r14
  PSLIST_ENTRY v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  _GENERAL_LOOKASIDE *L; // r14
  __int64 Size; // rdx
  __int64 Type; // rcx
  ULONG_PTR v19; // r9
  ULONG_PTR PoolWithTagFromNode; // rax
  _QWORD v21[16]; // [rsp+30h] [rbp-D8h] BYREF
  int v22; // [rsp+B0h] [rbp-58h]
  __int64 v23; // [rsp+B8h] [rbp-50h]
  _SLIST_ENTRY *v24; // [rsp+C0h] [rbp-48h]
  __int64 v25; // [rsp+C8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 536);
  v4 = 0LL;
  v5 = a3;
  if ( !a3 )
  {
    v7 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] % (unsigned int)CcNumberNumaNodes;
    if ( CcEnablePerVolumeLazyWriter )
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 600) + 8 * v7 + 64);
    else
      v5 = *(_QWORD *)(v3 + 8 * v7 + 128);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = *(_SLIST_ENTRY **)(a1 + 600);
  P = CurrentPrcb->PPLookasideList[6].P;
  ++P->TotalAllocates;
  v11 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v11 )
    goto LABEL_5;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[6].L;
  ++L->TotalAllocates;
  v11 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v11
    || (Size = L->Size,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v11 = (PSLIST_ENTRY)guard_dispatch_icall_no_overrides(Type, Size)) != 0LL) )
  {
LABEL_5:
    LODWORD(v11->Next) = CurrentPrcb->Number;
  }
  if ( v11 )
  {
    *((_QWORD *)&v11[8].Next + 1) = v3;
    v11[9].Next = v9;
    *((_QWORD *)&v11[9].Next + 1) = v5;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 + 1296)) <= 1 )
      __fastfail(0xEu);
    CcReferencePrivateVolumeCacheMap(v9);
    v12 = a2;
    *((_QWORD *)&v11[1].Next + 1) = a2;
    LODWORD(v11[8].Next) = 2;
    *((_QWORD *)&v11->Next + 1) = 0LL;
    v11->Next = 0LL;
    v11[1].Next = (_SLIST_ENTRY *)a1;
    if ( (unsigned __int8)CcIsWriteBehindThreadpoolAtLowPriority(v3, v13, v14) )
    {
      if ( !*(_QWORD *)(v3 + 1256)
        && !*(_DWORD *)(a1 + 524)
        && (*(_DWORD *)(a1 + 152) & 0x10000) == 0
        && !*(_BYTE *)(v3 + 1294) )
      {
        v19 = *(unsigned int *)(v5 + 24);
        LODWORD(v19) = v19 | 0x80000000;
        PoolWithTagFromNode = ExAllocatePoolWithTagFromNode(v15, 0x50uLL, 0x71576343uLL, v19);
        v4 = (void *)PoolWithTagFromNode;
        if ( PoolWithTagFromNode )
        {
          *(_QWORD *)(PoolWithTagFromNode + 56) = v3;
          *(_DWORD *)(PoolWithTagFromNode + 32) = 1;
          *(_QWORD *)(PoolWithTagFromNode + 64) = v9;
          *(_QWORD *)(PoolWithTagFromNode + 72) = v5;
          *((_BYTE *)&v11[3].Next + 8) = 1;
          LOWORD(v11[2].Next) = 1;
          BYTE2(v11[2].Next) = 6;
          HIDWORD(v11[2].Next) = 0;
          v11[3].Next = (PSLIST_ENTRY)((char *)v11 + 40);
          *((_QWORD *)&v11[2].Next + 1) = (char *)v11 + 40;
          *(_QWORD *)(PoolWithTagFromNode + 16) = CcWriteBehindInternal;
          *(_QWORD *)(PoolWithTagFromNode + 24) = v11;
          *(_QWORD *)PoolWithTagFromNode = 0LL;
          ExQueueWorkItemToPartition(PoolWithTagFromNode);
          KeWaitForSingleObject(&v11[2], Executive, 0, 0, 0LL);
LABEL_13:
          CcFreeWorkQueueEntry(v11);
          goto LABEL_14;
        }
      }
    }
  }
  else
  {
    v12 = a2;
  }
  memset_0(v21, 0, 0xA0uLL);
  if ( !v11 )
  {
    v23 = v3;
    v11 = (PSLIST_ENTRY)v21;
    v24 = v9;
    v25 = v5;
    v22 = 2;
    v21[1] = 0LL;
    v21[0] = 0LL;
    v21[2] = a1;
    v21[3] = v12;
  }
  *((_BYTE *)&v11[3].Next + 8) = 0;
  CcWriteBehindInternal(v11);
  if ( v11 != (PSLIST_ENTRY)v21 && v11 )
    goto LABEL_13;
LABEL_14:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x71576343u);
}
