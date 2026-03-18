/*
 * XREFs of HvLockHiveFlusherExclusive @ 0x140BB9AB4
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1404648A0 (CmpRecheckHiveVolumePolicy.c)
 *     CmShutdownSystem1 @ 0x1406679A8 (CmShutdownSystem1.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x140668020 (CmpLockKcbStackFlusherLocksExclusive.c)
 *     HvpMakeHiveReadOnly @ 0x1406683E8 (HvpMakeHiveReadOnly.c)
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 *     CmDumpKeyToFile @ 0x1407CCD84 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x1407CE060 (CmSaveMergedKeys.c)
 *     NtCompressKey @ 0x1407CF9F0 (NtCompressKey.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407D7EEC (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1407D7F7C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmReplaceKey @ 0x1407DA2E8 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1407DC2B8 (CmpFlushBackupHive.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmpBlockTwoHiveWrites @ 0x14090AFE4 (CmpBlockTwoHiveWrites.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x14090B474 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpFlushHive @ 0x14097D2B4 (CmpFlushHive.c)
 *     HvpFinishPrimaryWrite @ 0x140982E40 (HvpFinishPrimaryWrite.c)
 *     CmpTransMgrPrepare @ 0x140A04E88 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x140A06BAC (CmpTransMgrSyncHive.c)
 *     CmpBlockHiveWrites @ 0x140A2BEB0 (CmpBlockHiveWrites.c)
 * Callees:
 *     CmpVolumeManagerLockContextListExclusive @ 0x140A02430 (CmpVolumeManagerLockContextListExclusive.c)
 */

__int64 __fastcall HvLockHiveFlusherExclusive(__int64 a1)
{
  return CmpVolumeManagerLockContextListExclusive((unsigned __int64 *)(a1 + 72));
}
