/*
 * XREFs of VrpLockDiffHiveTableShared @ 0x14092CE50
 * Callers:
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14092CA0C (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpFindDiffHiveEntryForMountPoint @ 0x14092CD9C (VrpFindDiffHiveEntryForMountPoint.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 VrpLockDiffHiveTableShared()
{
  struct _KTHREAD *CurrentThread; // rax
  char *v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (char *)KeAbPreAcquire((__int64)&gLoadedDiffHivesLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&gLoadedDiffHivesLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&gLoadedDiffHivesLock, 0, v1, (__int64)&gLoadedDiffHivesLock);
  if ( v1 )
    v1[10] = 1;
  return result;
}
