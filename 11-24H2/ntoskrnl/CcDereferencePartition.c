/*
 * XREFs of CcDereferencePartition @ 0x1402A7F20
 * Callers:
 *     CcFreeWorkQueueEntry @ 0x1402A7E6C (CcFreeWorkQueueEntry.c)
 *     CcReapPrivateVolumeCachemapWorkerThread @ 0x1402C9E90 (CcReapPrivateVolumeCachemapWorkerThread.c)
 *     CcZeroData @ 0x1402CC9B0 (CcZeroData.c)
 *     CcCoalescingCallBack @ 0x14043C700 (CcCoalescingCallBack.c)
 *     CcForEachPartition @ 0x140470EE8 (CcForEachPartition.c)
 *     CcGetDirtyPages @ 0x140471FC0 (CcGetDirtyPages.c)
 *     CcIsThereDirtyData @ 0x140480940 (CcIsThereDirtyData.c)
 *     CcQueueLazyWriteScanThread @ 0x14057A5C0 (CcQueueLazyWriteScanThread.c)
 *     CcDeferWrite @ 0x14057B140 (CcDeferWrite.c)
 *     CcDeletePartition @ 0x14057C6EC (CcDeletePartition.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
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
