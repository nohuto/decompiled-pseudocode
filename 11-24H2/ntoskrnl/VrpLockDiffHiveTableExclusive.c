/*
 * XREFs of VrpLockDiffHiveTableExclusive @ 0x14092AD7C
 * Callers:
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14092A8CC (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14092AA88 (VrpDereferenceDiffHiveEntry.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 VrpLockDiffHiveTableExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (__int64)KeAbPreAcquire((__int64)&gLoadedDiffHivesLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&gLoadedDiffHivesLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&gLoadedDiffHivesLock, result, (__int64)&gLoadedDiffHivesLock);
  if ( v2 )
    *(_BYTE *)(v2 + 10) = 1;
  return result;
}
