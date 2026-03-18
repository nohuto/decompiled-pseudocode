/*
 * XREFs of CcAllocateWorkQueueEntry @ 0x1403AC58C
 * Callers:
 *     CcQueueLazyWriteScanThreadForVolume @ 0x1403A9EE0 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcAsyncCopyRead @ 0x1403AAC00 (CcAsyncCopyRead.c)
 *     CcNotifyOfMappedWrite @ 0x14040ECD8 (CcNotifyOfMappedWrite.c)
 *     CcScheduleReadAheadNuma @ 0x140499150 (CcScheduleReadAheadNuma.c)
 *     CcLazyWriteScan @ 0x1404BE770 (CcLazyWriteScan.c)
 *     CcQueueLazyWriteScanThread @ 0x1405772C0 (CcQueueLazyWriteScanThread.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x140577BE8 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 * Callees:
 *     CcReferencePrivateVolumeCacheMap @ 0x1403AC690 (CcReferencePrivateVolumeCacheMap.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CcAllocateWorkQueueEntry(__int64 a1, _SLIST_ENTRY *a2, __int64 a3, PSLIST_ENTRY *a4)
{
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rbx
  PSLIST_ENTRY v10; // r10
  _GENERAL_LOOKASIDE *L; // rbx
  __int64 Size; // rdx
  __int64 Type; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[6].P;
  ++P->TotalAllocates;
  v10 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v10 )
    goto LABEL_2;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[6].L;
  ++L->TotalAllocates;
  v10 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v10
    || (Size = L->Size,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v10 = (PSLIST_ENTRY)guard_dispatch_icall_no_overrides(Type, Size)) != 0LL) )
  {
LABEL_2:
    LODWORD(v10->Next) = CurrentPrcb->Number;
  }
  *a4 = v10;
  if ( !v10 )
    return 3221225626LL;
  *((_QWORD *)&v10[8].Next + 1) = a1;
  v10[9].Next = a2;
  *((_QWORD *)&v10[9].Next + 1) = a3;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1296)) <= 1 )
    __fastfail(0xEu);
  CcReferencePrivateVolumeCacheMap(a2);
  return 0LL;
}
