/*
 * XREFs of HvLockHiveFlusherExclusive @ 0x140BBBAB4
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x14045AFD0 (CmpRecheckHiveVolumePolicy.c)
 *     CmShutdownSystem1 @ 0x140666298 (CmShutdownSystem1.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x140666910 (CmpLockKcbStackFlusherLocksExclusive.c)
 *     HvpMakeHiveReadOnly @ 0x140666CD8 (HvpMakeHiveReadOnly.c)
 *     CmpLoadHiveThread @ 0x1407CB550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 *     CmDumpKeyToFile @ 0x1407CD274 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x1407CE550 (CmSaveMergedKeys.c)
 *     NtCompressKey @ 0x1407CFEE0 (NtCompressKey.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407D8440 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1407D84D0 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmReplaceKey @ 0x1407DA838 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1407DC808 (CmpFlushBackupHive.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpBlockTwoHiveWrites @ 0x1408E2704 (CmpBlockTwoHiveWrites.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1408E2B94 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 *     HvpFinishPrimaryWrite @ 0x14096B650 (HvpFinishPrimaryWrite.c)
 *     CmpTransMgrPrepare @ 0x140A013B8 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x140A030DC (CmpTransMgrSyncHive.c)
 *     CmpBlockHiveWrites @ 0x140A1FD70 (CmpBlockHiveWrites.c)
 * Callees:
 *     CmpVolumeManagerLockContextListExclusive @ 0x1409FF8F8 (CmpVolumeManagerLockContextListExclusive.c)
 */

char *__fastcall HvLockHiveFlusherExclusive(__int64 a1)
{
  return CmpVolumeManagerLockContextListExclusive((unsigned __int64 *)(a1 + 72));
}
