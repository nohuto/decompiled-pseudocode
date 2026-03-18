/*
 * XREFs of VrpLockDiffHiveTableShared @ 0x14092AD10
 * Callers:
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14092A8CC (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpFindDiffHiveEntryForMountPoint @ 0x14092AC5C (VrpFindDiffHiveEntryForMountPoint.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 VrpLockDiffHiveTableShared()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&gLoadedDiffHivesLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&gLoadedDiffHivesLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&gLoadedDiffHivesLock, 0, v1, (__int64)&gLoadedDiffHivesLock);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  return result;
}
