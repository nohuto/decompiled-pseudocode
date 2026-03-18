/*
 * XREFs of CcAllocateWorkQueueEntry @ 0x1402A7D3C
 * Callers:
 *     CcAsyncCopyRead @ 0x1402A94F0 (CcAsyncCopyRead.c)
 *     CcNotifyOfMappedWrite @ 0x14036BCAC (CcNotifyOfMappedWrite.c)
 *     CcLazyWriteScan @ 0x14043BAE8 (CcLazyWriteScan.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x14043C240 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcScheduleReadAheadNuma @ 0x1404992C0 (CcScheduleReadAheadNuma.c)
 *     CcQueueLazyWriteScanThread @ 0x14057A5C0 (CcQueueLazyWriteScanThread.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x14057AEF8 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 * Callees:
 *     CcReferencePrivateVolumeCacheMap @ 0x1402A7E40 (CcReferencePrivateVolumeCacheMap.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CcAllocateWorkQueueEntry(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rbx
  __int64 v10; // r10
  _GENERAL_LOOKASIDE *L; // rbx
  __int64 v12; // r9
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[6].P;
  ++P->TotalAllocates;
  v10 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v10 )
    goto LABEL_4;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[6].L;
  ++L->TotalAllocates;
  v10 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v10
    || (Size = L->Size,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v10 = guard_dispatch_icall_no_overrides(Type, Size, Tag, v12)) != 0) )
  {
LABEL_4:
    *(_DWORD *)v10 = CurrentPrcb->Number;
  }
  *a4 = v10;
  if ( !v10 )
    return 3221225626LL;
  *(_QWORD *)(v10 + 136) = a1;
  *(_QWORD *)(v10 + 144) = a2;
  *(_QWORD *)(v10 + 152) = a3;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1296)) <= 1 )
    __fastfail(0xEu);
  CcReferencePrivateVolumeCacheMap(a2);
  return 0LL;
}
