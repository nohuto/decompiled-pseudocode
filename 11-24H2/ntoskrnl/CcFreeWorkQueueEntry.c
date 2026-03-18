/*
 * XREFs of CcFreeWorkQueueEntry @ 0x1402A7E6C
 * Callers:
 *     CcCachemapUninitWorkerThread @ 0x1402A7660 (CcCachemapUninitWorkerThread.c)
 *     CcWriteBehind @ 0x1402A7ADC (CcWriteBehind.c)
 *     CcAsyncLazywriteWorker @ 0x1402A8E24 (CcAsyncLazywriteWorker.c)
 *     CcWaitForUninitializeCacheMap @ 0x14045A120 (CcWaitForUninitializeCacheMap.c)
 *     CcSerializeWithLazyWriter @ 0x1404AADF4 (CcSerializeWithLazyWriter.c)
 *     CcQuickLazyWriteScanForVolume @ 0x1404B54A0 (CcQuickLazyWriteScanForVolume.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C768C (CcAsyncLazywriteWorkerMulti.c)
 *     CcUninitializeCacheMap @ 0x1404DA4B0 (CcUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x1404DB3D0 (CcWorkerThread.c)
 *     CcMapAndCopyInToCache @ 0x1404DD240 (CcMapAndCopyInToCache.c)
 *     CcAsyncReadWorker @ 0x1404DF280 (CcAsyncReadWorker.c)
 *     CcCompleteAsyncReadWorker @ 0x1404DFBA0 (CcCompleteAsyncReadWorker.c)
 *     CcPostWorkQueueAsyncRead @ 0x1404DFCEC (CcPostWorkQueueAsyncRead.c)
 *     CcCompleteAsyncWriteBehind @ 0x14057E074 (CcCompleteAsyncWriteBehind.c)
 * Callees:
 *     CcDereferencePartition @ 0x1402A7F20 (CcDereferencePartition.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 */

__int64 __fastcall CcFreeWorkQueueEntry(struct _SLIST_ENTRY *P, __int64 a2, __int64 a3, __int64 a4)
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
