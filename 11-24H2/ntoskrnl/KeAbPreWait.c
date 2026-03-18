/*
 * XREFs of KeAbPreWait @ 0x14033E810
 * Callers:
 *     KiWaitForAllObjects @ 0x140205C00 (KiWaitForAllObjects.c)
 *     MiWaitForCollidedFaultComplete @ 0x14023B89C (MiWaitForCollidedFaultComplete.c)
 *     CcPinFileData @ 0x140272D30 (CcPinFileData.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     FsRtlAcquireHeaderMutex @ 0x14033E2F0 (FsRtlAcquireHeaderMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x14038A1E8 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     FsRtlReleaseEofLock @ 0x1403D8730 (FsRtlReleaseEofLock.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlAcquireEofLock @ 0x14040D140 (FsRtlAcquireEofLock.c)
 *     MiLockControlAreaSectionExtend @ 0x140414FF0 (MiLockControlAreaSectionExtend.c)
 *     MiReferenceControlArea @ 0x140415208 (MiReferenceControlArea.c)
 *     ExpAcquireFastMutexContended @ 0x1404489B8 (ExpAcquireFastMutexContended.c)
 *     MiChangingSubsectionProtos @ 0x14067A42C (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x14067BE30 (MiWaitForExtentDeletions.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140970738 (IopWaitAndAcquireFileObjectLock.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140A882DC (CmpWaitOnHiveWriteQueue.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x140AA4250 (PfpPrefetchSharedConflictNotifyStart.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140AAD350 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14025CEE0 (KiAbEntryRemoveFromTree.c)
 */

char __fastcall KeAbPreWait(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al

  *(_BYTE *)a1 |= 2u;
  if ( *(__int64 *)a1 < 0 )
    KiAbEntryRemoveFromTree((__int64 *)a1, a2, a3);
  *(_BYTE *)(a1 + 9) = 1;
  result = *(_BYTE *)a1 & 0xFD;
  *(_BYTE *)a1 = result;
  return result;
}
