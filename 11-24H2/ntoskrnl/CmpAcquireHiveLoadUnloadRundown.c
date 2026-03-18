/*
 * XREFs of CmpAcquireHiveLoadUnloadRundown @ 0x140BB9AD0
 * Callers:
 *     CmpLoadHiveVolatile @ 0x1407CE610 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x1407CEAF0 (CmpRefreshHive.c)
 *     NtReplaceKey @ 0x1407D0990 (NtReplaceKey.c)
 *     CmpSyncNextBackupHive @ 0x1407DC7D8 (CmpSyncNextBackupHive.c)
 *     CmpLazyCommitWorker @ 0x1407DE140 (CmpLazyCommitWorker.c)
 *     CmUnloadKey @ 0x14092B0F8 (CmUnloadKey.c)
 *     CmLoadKey @ 0x14092B788 (CmLoadKey.c)
 *     CmLoadDifferencingKey @ 0x14092C750 (CmLoadDifferencingKey.c)
 *     CmLoadAppKey @ 0x14092DB9C (CmLoadAppKey.c)
 *     CmpInitHiveFromFile @ 0x14092EC1C (CmpInitHiveFromFile.c)
 *     CmpLateUnloadHiveWorker @ 0x14097C4F0 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 */

BOOLEAN CmpAcquireHiveLoadUnloadRundown()
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v1; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = ExAcquireRundownProtection(&CmpHiveLoadUnloadRundown);
  if ( !v1 )
    KeLeaveCriticalRegion();
  return v1;
}
