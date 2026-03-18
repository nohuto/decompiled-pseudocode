/*
 * XREFs of HvUnlockHiveFlusherExclusive @ 0x140BB9A98
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1404648A0 (CmpRecheckHiveVolumePolicy.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x1404C65D4 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmShutdownSystem1 @ 0x1406679A8 (CmShutdownSystem1.c)
 *     HvpMakeHiveReadOnly @ 0x1406683E8 (HvpMakeHiveReadOnly.c)
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 *     CmDumpKeyToFile @ 0x1407CCD84 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x1407CE060 (CmSaveMergedKeys.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407D7EEC (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1407D7F7C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmReplaceKey @ 0x1407DA2E8 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1407DC2B8 (CmpFlushBackupHive.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmpUnblockTwoHiveWrites @ 0x14090A9D0 (CmpUnblockTwoHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x14090AFE4 (CmpBlockTwoHiveWrites.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x14090B474 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpFlushHive @ 0x14097D2B4 (CmpFlushHive.c)
 *     HvpFinishPrimaryWrite @ 0x140982E40 (HvpFinishPrimaryWrite.c)
 *     CmpTransMgrPrepare @ 0x140A04E88 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x140A06BAC (CmpTransMgrSyncHive.c)
 *     CmpUnblockHiveWrites @ 0x140A496EC (CmpUnblockHiveWrites.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140A882DC (CmpWaitOnHiveWriteQueue.c)
 * Callees:
 *     CmSiRWLockReleaseExclusive @ 0x1409FD900 (CmSiRWLockReleaseExclusive.c)
 */

__int64 __fastcall HvUnlockHiveFlusherExclusive(__int64 a1)
{
  return CmSiRWLockReleaseExclusive((volatile signed __int64 *)(a1 + 72));
}
