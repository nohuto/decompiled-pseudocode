/*
 * XREFs of ExAcquireSharedStarveExclusive @ 0x1402D7030
 * Callers:
 *     CcPinFileData @ 0x1402D7150 (CcPinFileData.c)
 *     DifExAcquireSharedStarveExclusiveWrapper @ 0x14060FEF0 (DifExAcquireSharedStarveExclusiveWrapper.c)
 *     CcPinMappedData @ 0x1409CD7E0 (CcPinMappedData.c)
 * Callees:
 *     ExpAcquireSharedStarveExclusive @ 0x1402D8890 (ExpAcquireSharedStarveExclusive.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x140489FF8 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall ExAcquireSharedStarveExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  USHORT Flag; // cx
  unsigned __int8 v4; // r9
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rdx

  Flag = Resource->Flag;
  v4 = 2 - (Wait != 0);
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) == 0 )
    return ExpAcquireSharedStarveExclusive(Resource);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > v4 )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v4, 0LL);
  if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  return ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)Resource);
}
