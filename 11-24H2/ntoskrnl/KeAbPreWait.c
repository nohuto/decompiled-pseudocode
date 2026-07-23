/*
 * XREFs of KeAbPreWait @ 0x14031DCF0
 * Callers:
 *     CcPinFileData @ 0x1402282C0 (CcPinFileData.c)
 *     MiLockControlAreaSectionExtend @ 0x140270E50 (MiLockControlAreaSectionExtend.c)
 *     MiReferenceControlArea @ 0x140271068 (MiReferenceControlArea.c)
 *     FsRtlReleaseEofLock @ 0x1402E0940 (FsRtlReleaseEofLock.c)
 *     FsRtlAcquireEofLock @ 0x1402E13D0 (FsRtlAcquireEofLock.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     FsRtlAcquireHeaderMutex @ 0x14031D7D0 (FsRtlAcquireHeaderMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KiWaitForAllObjects @ 0x14032D1E0 (KiWaitForAllObjects.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x140383B28 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlCheckOplockEx2 @ 0x1403CE7F0 (FsRtlCheckOplockEx2.c)
 *     MiWaitForCollidedFaultComplete @ 0x1404270E4 (MiWaitForCollidedFaultComplete.c)
 *     ExpAcquireFastMutexContended @ 0x140441108 (ExpAcquireFastMutexContended.c)
 *     MiChangingSubsectionProtos @ 0x14067B60C (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x14067D010 (MiWaitForExtentDeletions.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140958F48 (IopWaitAndAcquireFileObjectLock.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140A847CC (CmpWaitOnHiveWriteQueue.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x140A9F5E0 (PfpPrefetchSharedConflictNotifyStart.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140AA83D0 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14028D4F0 (KiAbEntryRemoveFromTree.c)
 */

char __fastcall KeAbPreWait(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al

  *a1 |= 2u;
  if ( *(__int64 *)a1 < 0 )
    KiAbEntryRemoveFromTree(a1, a2, a3, a4);
  a1[9] = 1;
  result = *a1 & 0xFD;
  *a1 = result;
  return result;
}
