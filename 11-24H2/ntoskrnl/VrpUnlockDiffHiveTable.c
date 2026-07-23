/*
 * XREFs of VrpUnlockDiffHiveTable @ 0x14092CDEC
 * Callers:
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14092CA0C (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14092CBC8 (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPoint @ 0x14092CD9C (VrpFindDiffHiveEntryForMountPoint.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
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
