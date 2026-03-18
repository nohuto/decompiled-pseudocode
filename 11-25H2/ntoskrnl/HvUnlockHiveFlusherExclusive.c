/*
 * XREFs of HvUnlockHiveFlusherExclusive @ 0x140BA9B20
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x140465694 (CmpRecheckHiveVolumePolicy.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x1404C5D54 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmShutdownSystem1 @ 0x14065C0A4 (CmShutdownSystem1.c)
 *     HvpMakeHiveReadOnly @ 0x14065C918 (HvpMakeHiveReadOnly.c)
 *     CmpLoadHiveThread @ 0x1407BB850 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407BC620 (CmpMountPreloadedHives.c)
 *     CmDumpKeyToFile @ 0x1407BD56C (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x1407BE848 (CmSaveMergedKeys.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407C8754 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1407C87E4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmReplaceKey @ 0x1407CAB24 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1407CCAF8 (CmpFlushBackupHive.c)
 *     CmpUnblockTwoHiveWrites @ 0x14083EC40 (CmpUnblockTwoHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x14083F0C8 (CmpBlockTwoHiveWrites.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x14083F4D0 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpTransMgrSyncHive @ 0x140865CE8 (CmpTransMgrSyncHive.c)
 *     CmpTransMgrPrepare @ 0x14086632C (CmpTransMgrPrepare.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 *     HvpFinishPrimaryWrite @ 0x1409F7550 (HvpFinishPrimaryWrite.c)
 *     CmpUnblockHiveWrites @ 0x140A445B0 (CmpUnblockHiveWrites.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140A837E0 (CmpWaitOnHiveWriteQueue.c)
 * Callees:
 *     CmSiRWLockReleaseExclusive @ 0x1409F4E3C (CmSiRWLockReleaseExclusive.c)
 */

__int64 __fastcall HvUnlockHiveFlusherExclusive(__int64 a1)
{
  return CmSiRWLockReleaseExclusive((volatile signed __int64 *)(a1 + 72));
}
