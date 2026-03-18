/*
 * XREFs of CmpAcquireHiveLoadUnloadRundown @ 0x140BA9B58
 * Callers:
 *     CmpLoadHiveVolatile @ 0x1407BEDF8 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x1407BF2D8 (CmpRefreshHive.c)
 *     NtReplaceKey @ 0x1407C1280 (NtReplaceKey.c)
 *     CmpSyncNextBackupHive @ 0x1407CD018 (CmpSyncNextBackupHive.c)
 *     CmpLazyCommitWorker @ 0x1407CE980 (CmpLazyCommitWorker.c)
 *     CmUnloadKey @ 0x1408644F8 (CmUnloadKey.c)
 *     CmpInitHiveFromFile @ 0x14090E4F0 (CmpInitHiveFromFile.c)
 *     CmLoadKey @ 0x140910E98 (CmLoadKey.c)
 *     CmLoadAppKey @ 0x1409122B0 (CmLoadAppKey.c)
 *     CmLoadDifferencingKey @ 0x140913148 (CmLoadDifferencingKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140A42470 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 */

BOOLEAN CmpAcquireHiveLoadUnloadRundown()
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v1; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = ExAcquireRundownProtection_0(&CmpHiveLoadUnloadRundown);
  if ( !v1 )
    KeLeaveCriticalRegion();
  return v1;
}
