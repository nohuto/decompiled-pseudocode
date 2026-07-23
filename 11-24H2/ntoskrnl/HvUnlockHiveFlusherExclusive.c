/*
 * XREFs of HvUnlockHiveFlusherExclusive @ 0x140BBBA98
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x14045AFD0 (CmpRecheckHiveVolumePolicy.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x1404BFA34 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmShutdownSystem1 @ 0x140666298 (CmShutdownSystem1.c)
 *     HvpMakeHiveReadOnly @ 0x140666CD8 (HvpMakeHiveReadOnly.c)
 *     CmpLoadHiveThread @ 0x1407CB550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 *     CmDumpKeyToFile @ 0x1407CD274 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x1407CE550 (CmSaveMergedKeys.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407D8440 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1407D84D0 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmReplaceKey @ 0x1407DA838 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1407DC808 (CmpFlushBackupHive.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpUnblockTwoHiveWrites @ 0x1408E20F0 (CmpUnblockTwoHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x1408E2704 (CmpBlockTwoHiveWrites.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1408E2B94 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 *     HvpFinishPrimaryWrite @ 0x14096B650 (HvpFinishPrimaryWrite.c)
 *     CmpTransMgrPrepare @ 0x140A013B8 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x140A030DC (CmpTransMgrSyncHive.c)
 *     CmpUnblockHiveWrites @ 0x140A4040C (CmpUnblockHiveWrites.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140A847CC (CmpWaitOnHiveWriteQueue.c)
 * Callees:
 *     CmSiRWLockReleaseExclusive @ 0x1409F6640 (CmSiRWLockReleaseExclusive.c)
 */

__int64 __fastcall HvUnlockHiveFlusherExclusive(__int64 a1)
{
  return CmSiRWLockReleaseExclusive((volatile signed __int64 *)(a1 + 72));
}
