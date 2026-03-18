/*
 * XREFs of CcWriteBehind @ 0x1402A7ADC
 * Callers:
 *     CcCachemapUninitWorkerThread @ 0x1402A7660 (CcCachemapUninitWorkerThread.c)
 *     CcWaitForUninitializeCacheMap @ 0x14045A120 (CcWaitForUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x1404DB3D0 (CcWorkerThread.c)
 * Callees:
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x1402A7D0C (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     CcReferencePrivateVolumeCacheMap @ 0x1402A7E40 (CcReferencePrivateVolumeCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x1402A7E6C (CcFreeWorkQueueEntry.c)
 *     ExQueueWorkItemToPartition @ 0x1402A7F70 (ExQueueWorkItemToPartition.c)
 *     CcWriteBehindInternal @ 0x1402A81F0 (CcWriteBehindInternal.c)
 *     ExAllocatePoolWithTagFromNode @ 0x1402AC224 (ExAllocatePoolWithTagFromNode.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CcWriteBehind(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  void *v4; // rsi
  __int64 v5; // r15
  __int64 v7; // rdx
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v9; // r12
  _GENERAL_LOOKASIDE *P; // r14
  _BYTE *v11; // rdi
  _GENERAL_LOOKASIDE *L; // r14
  __int64 v13; // r9
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // r9
  ULONG_PTR PoolWithTagFromNode; // rax
  _QWORD v21[16]; // [rsp+30h] [rbp-D8h] BYREF
  int v22; // [rsp+B0h] [rbp-58h]
  __int64 v23; // [rsp+B8h] [rbp-50h]
  __int64 v24; // [rsp+C0h] [rbp-48h]
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
  v9 = *(_QWORD *)(a1 + 600);
  P = CurrentPrcb->PPLookasideList[6].P;
  ++P->TotalAllocates;
  v11 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v11 )
    goto LABEL_7;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[6].L;
  ++L->TotalAllocates;
  v11 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v11
    || (Size = L->Size,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v11 = (_BYTE *)guard_dispatch_icall_no_overrides(Type, Size, Tag, v13)) != 0LL) )
  {
LABEL_7:
    *(_DWORD *)v11 = CurrentPrcb->Number;
  }
  if ( v11 )
  {
    *((_QWORD *)v11 + 17) = v3;
    *((_QWORD *)v11 + 18) = v9;
    *((_QWORD *)v11 + 19) = v5;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 + 1296)) <= 1 )
      __fastfail(0xEu);
    CcReferencePrivateVolumeCacheMap(v9);
    v17 = a2;
    *((_QWORD *)v11 + 3) = a2;
    *((_DWORD *)v11 + 32) = 2;
    *((_QWORD *)v11 + 1) = 0LL;
    *(_QWORD *)v11 = 0LL;
    *((_QWORD *)v11 + 2) = a1;
    if ( (unsigned __int8)CcIsWriteBehindThreadpoolAtLowPriority(v3) )
    {
      if ( !*(_QWORD *)(v3 + 1256)
        && !*(_DWORD *)(a1 + 524)
        && (*(_DWORD *)(a1 + 152) & 0x10000) == 0
        && !*(_BYTE *)(v3 + 1294) )
      {
        v19 = *(unsigned int *)(v5 + 24);
        LODWORD(v19) = v19 | 0x80000000;
        PoolWithTagFromNode = ExAllocatePoolWithTagFromNode(v18, 80LL, 1901552451LL, v19);
        v4 = (void *)PoolWithTagFromNode;
        if ( PoolWithTagFromNode )
        {
          *(_QWORD *)(PoolWithTagFromNode + 56) = v3;
          *(_DWORD *)(PoolWithTagFromNode + 32) = 1;
          *(_QWORD *)(PoolWithTagFromNode + 64) = v9;
          *(_QWORD *)(PoolWithTagFromNode + 72) = v5;
          v11[56] = 1;
          *((_WORD *)v11 + 16) = 1;
          v11[34] = 6;
          *((_DWORD *)v11 + 9) = 0;
          *((_QWORD *)v11 + 6) = v11 + 40;
          *((_QWORD *)v11 + 5) = v11 + 40;
          *(_QWORD *)(PoolWithTagFromNode + 16) = CcWriteBehindInternal;
          *(_QWORD *)(PoolWithTagFromNode + 24) = v11;
          *(_QWORD *)PoolWithTagFromNode = 0LL;
          ExQueueWorkItemToPartition(PoolWithTagFromNode);
          KeWaitForSingleObject(v11 + 32, Executive, 0, 0, 0LL);
LABEL_15:
          CcFreeWorkQueueEntry(v11);
          goto LABEL_16;
        }
      }
    }
  }
  else
  {
    v17 = a2;
  }
  memset_0(v21, 0, 0xA0uLL);
  if ( !v11 )
  {
    v23 = v3;
    v11 = v21;
    v24 = v9;
    v25 = v5;
    v22 = 2;
    v21[1] = 0LL;
    v21[0] = 0LL;
    v21[2] = a1;
    v21[3] = v17;
  }
  v11[56] = 0;
  CcWriteBehindInternal(v11);
  if ( v11 != (_BYTE *)v21 && v11 )
    goto LABEL_15;
LABEL_16:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x71576343u);
}
