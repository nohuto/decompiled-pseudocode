/*
 * XREFs of CmpReleaseHiveLoadUnloadRundown @ 0x140BBBB10
 * Callers:
 *     CmpLoadHiveVolatile @ 0x1407CEB00 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x1407CEFE0 (CmpRefreshHive.c)
 *     NtReplaceKey @ 0x1407D0E80 (NtReplaceKey.c)
 *     CmpSyncNextBackupHive @ 0x1407DCD28 (CmpSyncNextBackupHive.c)
 *     CmpLazyCommitWorker @ 0x1407DE690 (CmpLazyCommitWorker.c)
 *     CmUnloadKey @ 0x14092D238 (CmUnloadKey.c)
 *     CmLoadKey @ 0x14092D8C8 (CmLoadKey.c)
 *     CmLoadDifferencingKey @ 0x14092E890 (CmLoadDifferencingKey.c)
 *     CmLoadAppKey @ 0x14092FCDC (CmLoadAppKey.c)
 *     CmpInitHiveFromFile @ 0x140930D5C (CmpInitHiveFromFile.c)
 *     CmpLateUnloadHiveWorker @ 0x140964D00 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 */

void CmpReleaseHiveLoadUnloadRundown()
{
  ExReleaseRundownProtection_0(&CmpHiveLoadUnloadRundown);
  KeLeaveCriticalRegion();
}
