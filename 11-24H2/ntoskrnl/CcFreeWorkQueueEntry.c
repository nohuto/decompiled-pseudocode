/*
 * XREFs of CcFreeWorkQueueEntry @ 0x140279C5C
 * Callers:
 *     CcPostWorkQueueAsyncRead @ 0x14027372C (CcPostWorkQueueAsyncRead.c)
 *     CcWriteBehind @ 0x1402798D4 (CcWriteBehind.c)
 *     CcCachemapUninitWorkerThread @ 0x14027AAB0 (CcCachemapUninitWorkerThread.c)
 *     CcAsyncLazywriteWorker @ 0x14027B0C8 (CcAsyncLazywriteWorker.c)
 *     CcWaitForUninitializeCacheMap @ 0x14044F570 (CcWaitForUninitializeCacheMap.c)
 *     CcSerializeWithLazyWriter @ 0x1404A4FF4 (CcSerializeWithLazyWriter.c)
 *     CcQuickLazyWriteScanForVolume @ 0x1404AFD40 (CcQuickLazyWriteScanForVolume.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C0AEC (CcAsyncLazywriteWorkerMulti.c)
 *     CcUninitializeCacheMap @ 0x1404D3ED0 (CcUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x1404D4DF0 (CcWorkerThread.c)
 *     CcMapAndCopyInToCache @ 0x1404D6C60 (CcMapAndCopyInToCache.c)
 *     CcAsyncReadWorker @ 0x1404D8CA0 (CcAsyncReadWorker.c)
 *     CcCompleteAsyncReadWorker @ 0x1404D95C0 (CcCompleteAsyncReadWorker.c)
 *     CcCompleteAsyncWriteBehind @ 0x14057B504 (CcCompleteAsyncWriteBehind.c)
 * Callees:
 *     CcDereferencePartition @ 0x140279D10 (CcDereferencePartition.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

__int64 __fastcall CcFreeWorkQueueEntry(_SLIST_ENTRY *P, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v6; // rdi
  _SLIST_ENTRY *Next; // rbx
  _GENERAL_LOOKASIDE *L; // rcx
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v6 = *((_QWORD *)&P[8].Next + 1);
  Next = P[9].Next;
  L = CurrentPrcb->PPLookasideList[6].P;
  ++L->TotalFrees;
  if ( LOWORD(L->ListHead.Alignment) < L->Depth
    || (++L->FreeMisses, L = CurrentPrcb->PPLookasideList[6].L,
                         ++L->TotalFrees,
                         LOWORD(L->ListHead.Alignment) < L->Depth) )
  {
    RtlpInterlockedPushEntrySList(&L->ListHead, P);
  }
  else
  {
    ++L->FreeMisses;
    if ( (void (__stdcall *)(PVOID))L->FreeEx == ExFreePool )
      ExFreePool(P);
    else
      guard_dispatch_icall_no_overrides(P, P, CurrentPrcb, a4);
  }
  result = CcDereferencePartition(v6);
  if ( Next )
  {
    result = _InterlockedDecrement64((volatile signed __int64 *)&Next->Next + 1);
    if ( result <= -1 )
      __fastfail(0xEu);
  }
  return result;
}
