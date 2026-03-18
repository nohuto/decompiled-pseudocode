/*
 * XREFs of ExTryToAcquireResourceExclusiveLite @ 0x140656E80
 * Callers:
 *     DifExTryToAcquireResourceExclusiveLiteWrapper @ 0x1406213B0 (DifExTryToAcquireResourceExclusiveLiteWrapper.c)
 * Callees:
 *     ExAcquireFastResourceExclusive @ 0x1403DD040 (ExAcquireFastResourceExclusive.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ExpTryToAcquireResourceExclusiveLite @ 0x14065704C (ExpTryToAcquireResourceExclusiveLite.c)
 */

BOOLEAN __stdcall ExTryToAcquireResourceExclusiveLite(PERESOURCE Resource)
{
  USHORT Flag; // cx
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rdx

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) == 0 )
    return ExpTryToAcquireResourceExclusiveLite(Resource);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  return ExAcquireFastResourceExclusive((ULONG_PTR)Resource, 0LL, 0);
}
