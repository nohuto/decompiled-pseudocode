/*
 * XREFs of CcDereferencePartition @ 0x1403AC770
 * Callers:
 *     CcForEachPartition @ 0x14035EBE4 (CcForEachPartition.c)
 *     CcGetDirtyPages @ 0x14035ED90 (CcGetDirtyPages.c)
 *     CcZeroData @ 0x1403A6B60 (CcZeroData.c)
 *     CcCoalescingCallBack @ 0x1403A7700 (CcCoalescingCallBack.c)
 *     CcFreeWorkQueueEntry @ 0x1403AC6BC (CcFreeWorkQueueEntry.c)
 *     CcIsThereDirtyData @ 0x14047FB20 (CcIsThereDirtyData.c)
 *     CcReapPrivateVolumeCachemapWorkerThread @ 0x1404C5860 (CcReapPrivateVolumeCachemapWorkerThread.c)
 *     CcQueueLazyWriteScanThread @ 0x1405772C0 (CcQueueLazyWriteScanThread.c)
 *     CcDeferWrite @ 0x140577E30 (CcDeferWrite.c)
 *     CcDeletePartition @ 0x1405793DC (CcDeletePartition.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
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
