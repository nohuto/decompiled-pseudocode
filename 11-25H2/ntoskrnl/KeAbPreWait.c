/*
 * XREFs of KeAbPreWait @ 0x14029D460
 * Callers:
 *     MiReferenceControlArea @ 0x140219CEC (MiReferenceControlArea.c)
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     KiWaitForAllObjects @ 0x14027DDF0 (KiWaitForAllObjects.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     FsRtlAcquireHeaderMutex @ 0x14029E350 (FsRtlAcquireHeaderMutex.c)
 *     CcPinFileData @ 0x1402D7150 (CcPinFileData.c)
 *     MiWaitForCollidedFaultComplete @ 0x14033DB60 (MiWaitForCollidedFaultComplete.c)
 *     FsRtlAcquireEofLock @ 0x1403760A0 (FsRtlAcquireEofLock.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x1403A2DC4 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlReleaseEofLock @ 0x1403F96E0 (FsRtlReleaseEofLock.c)
 *     MiLockControlAreaSectionExtend @ 0x140417E10 (MiLockControlAreaSectionExtend.c)
 *     ExpAcquireFastMutexContended @ 0x14044AE54 (ExpAcquireFastMutexContended.c)
 *     MiChangingSubsectionProtos @ 0x14066EB8C (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x140670670 (MiWaitForExtentDeletions.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14094B784 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1409888C0 (IopWaitAndAcquireFileObjectLock.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140A837E0 (CmpWaitOnHiveWriteQueue.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x140A9E9D0 (PfpPrefetchSharedConflictNotifyStart.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14029D4A0 (KiAbEntryRemoveFromTree.c)
 */

char __fastcall KeAbPreWait(__int64 *a1)
{
  char result; // al

  *(_BYTE *)a1 |= 2u;
  if ( *a1 < 0 )
    KiAbEntryRemoveFromTree(a1);
  *((_BYTE *)a1 + 9) = 1;
  result = *(_BYTE *)a1 & 0xFD;
  *(_BYTE *)a1 = result;
  return result;
}
