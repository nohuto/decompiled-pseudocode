/*
 * XREFs of CcDereferencePartition @ 0x140279D10
 * Callers:
 *     CcForEachPartition @ 0x14021AA70 (CcForEachPartition.c)
 *     CcGetDirtyPages @ 0x14021ABB0 (CcGetDirtyPages.c)
 *     CcCoalescingCallBack @ 0x140263B80 (CcCoalescingCallBack.c)
 *     CcFreeWorkQueueEntry @ 0x140279C5C (CcFreeWorkQueueEntry.c)
 *     CcZeroData @ 0x14040BA30 (CcZeroData.c)
 *     CcReapPrivateVolumeCachemapWorkerThread @ 0x14042FBD0 (CcReapPrivateVolumeCachemapWorkerThread.c)
 *     CcIsThereDirtyData @ 0x14047B410 (CcIsThereDirtyData.c)
 *     CcQueueLazyWriteScanThread @ 0x140577A50 (CcQueueLazyWriteScanThread.c)
 *     CcDeferWrite @ 0x1405785D0 (CcDeferWrite.c)
 *     CcDeletePartition @ 0x140579B7C (CcDeletePartition.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 */

char __fastcall CcDereferencePartition(__int64 a1)
{
  signed __int64 v1; // rax
  char v2; // bl
  bool v3; // cc
  signed __int64 v4; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1296), 0xFFFFFFFFFFFFFFFFuLL);
  v2 = 0;
  v3 = v1 <= 1;
  v4 = v1 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v2 = 1;
    KeSetEvent((PRKEVENT)(a1 + 1328), 0, 0);
  }
  return v2;
}
