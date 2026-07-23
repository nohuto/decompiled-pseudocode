/*
 * XREFs of VrpLockDiffHiveTableExclusive @ 0x14092CEBC
 * Callers:
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14092CA0C (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14092CBC8 (VrpDereferenceDiffHiveEntry.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *VrpLockDiffHiveTableExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  char *result; // rax
  char *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (char *)KeAbPreAcquire((__int64)&gLoadedDiffHivesLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&gLoadedDiffHivesLock, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(&gLoadedDiffHivesLock, result, (__int64)&gLoadedDiffHivesLock);
  if ( v2 )
    v2[10] = 1;
  return result;
}
