/*
 * XREFs of FsRtlInitializeFileLocks @ 0x140C1B150
 * Callers:
 *     FsRtlInitSystem @ 0x140C1AD7C (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x1404549D0 (ExInitializeNPagedLookasideListInternal.c)
 *     ExInitializePagedLookasideList @ 0x140A914C0 (ExInitializePagedLookasideList.c)
 */

LIST_ENTRY *FsRtlInitializeFileLocks()
{
  LIST_ENTRY *result; // rax

  ExInitializeNPagedLookasideListInternal((__int64)&FsRtlSharedLockLookasideList, 0LL, 0LL, 512, 56, 1752386630, 16, 0);
  ExInitializeNPagedLookasideListInternal(
    (__int64)&FsRtlExclusiveLockLookasideList,
    0LL,
    0LL,
    512,
    72,
    2019904582,
    16,
    0);
  ExInitializeNPagedLookasideListInternal((__int64)&FsRtlWaitingLockLookasideList, 0LL, 0LL, 512, 32, 1819757638, 16, 0);
  ExInitializeNPagedLookasideListInternal(
    (__int64)&FsRtlLockTreeNodeLookasideList,
    0LL,
    0LL,
    512,
    56,
    1852591174,
    16,
    0);
  ExInitializeNPagedLookasideListInternal((__int64)&FsRtlLockInfoLookasideList, 0LL, 0LL, 512, 64, 1768705094, 8, 0);
  ExInitializePagedLookasideList(&FsRtlFileLockLookasideList, 0LL, 0LL, 0, 0x60uLL, 0x6C664C46u, 8u);
  FsRtlCreateLockInfo.Owner = 0LL;
  result = &FsRtlCreateLockInfo.Event.Header.WaitListHead;
  FsRtlCreateLockInfo.Contention = 0;
  FsRtlCreateLockInfo.Event.Header.SignalState = 0;
  FsRtlFileLockCancelCollideLock = 0LL;
  FsRtlFileLockCancelCollideList = 0LL;
  FsRtlCreateLockInfo.Event.Header.WaitListHead.Blink = &FsRtlCreateLockInfo.Event.Header.WaitListHead;
  FsRtlCreateLockInfo.Event.Header.WaitListHead.Flink = &FsRtlCreateLockInfo.Event.Header.WaitListHead;
  FsRtlCreateLockInfo.Count = 1;
  LOWORD(FsRtlCreateLockInfo.Event.Header.Lock) = 1;
  FsRtlCreateLockInfo.Event.Header.Size = 6;
  return result;
}
