/*
 * XREFs of CcFreeWorkQueueEntry @ 0x1403AC6BC
 * Callers:
 *     CcWaitForUninitializeCacheMap @ 0x1403AA230 (CcWaitForUninitializeCacheMap.c)
 *     CcPostWorkQueueAsyncRead @ 0x1403AA564 (CcPostWorkQueueAsyncRead.c)
 *     CcAsyncLazywriteWorker @ 0x1403AB228 (CcAsyncLazywriteWorker.c)
 *     CcCachemapUninitWorkerThread @ 0x1403ABE90 (CcCachemapUninitWorkerThread.c)
 *     CcWriteBehind @ 0x1403AC318 (CcWriteBehind.c)
 *     CcSerializeWithLazyWriter @ 0x1404A9B10 (CcSerializeWithLazyWriter.c)
 *     CcQuickLazyWriteScanForVolume @ 0x1404B5A00 (CcQuickLazyWriteScanForVolume.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C8A30 (CcAsyncLazywriteWorkerMulti.c)
 *     CcUninitializeCacheMap @ 0x1404DADC0 (CcUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x1404DBCE0 (CcWorkerThread.c)
 *     CcMapAndCopyInToCache @ 0x1404DDB50 (CcMapAndCopyInToCache.c)
 *     CcAsyncReadWorker @ 0x1404DFB90 (CcAsyncReadWorker.c)
 *     CcCompleteAsyncReadWorker @ 0x1404E04B0 (CcCompleteAsyncReadWorker.c)
 *     CcCompleteAsyncWriteBehind @ 0x14057AD54 (CcCompleteAsyncWriteBehind.c)
 * Callees:
 *     CcDereferencePartition @ 0x1403AC770 (CcDereferencePartition.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

__int64 __fastcall CcFreeWorkQueueEntry(_SLIST_ENTRY *P)
{
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v3; // rdi
  _SLIST_ENTRY *Next; // rbx
  _GENERAL_LOOKASIDE *L; // rcx
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = *((_QWORD *)&P[8].Next + 1);
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
      guard_dispatch_icall_no_overrides(P, P);
  }
  result = CcDereferencePartition(v3);
  if ( Next )
  {
    result = _InterlockedDecrement64((volatile signed __int64 *)&Next->Next + 1);
    if ( result <= -1 )
      __fastfail(0xEu);
  }
  return result;
}
