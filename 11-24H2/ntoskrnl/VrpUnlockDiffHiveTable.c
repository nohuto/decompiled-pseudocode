/*
 * XREFs of VrpUnlockDiffHiveTable @ 0x14092ACAC
 * Callers:
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14092A8CC (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14092AA88 (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPoint @ 0x14092AC5C (VrpFindDiffHiveEntryForMountPoint.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

void VrpUnlockDiffHiveTable()
{
  signed __int64 v0; // rdx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&gLoadedDiffHivesLock);
  v0 = gLoadedDiffHivesLock - 16;
  if ( (gLoadedDiffHivesLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (gLoadedDiffHivesLock & 2) != 0
    || (v1 = gLoadedDiffHivesLock,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&gLoadedDiffHivesLock, v0, gLoadedDiffHivesLock)) )
  {
    ExfReleasePushLock(&gLoadedDiffHivesLock);
  }
  KeAbPostRelease((ULONG_PTR)&gLoadedDiffHivesLock);
  KeLeaveCriticalRegion();
}
