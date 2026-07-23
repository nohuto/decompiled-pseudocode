/*
 * XREFs of WmipReleaseSmbiosLockShared @ 0x140A75DE8
 * Callers:
 *     WmipReadSMBiosSysInfo @ 0x14064A91C (WmipReadSMBiosSysInfo.c)
 *     PoBroadcastSystemState @ 0x140B66DA4 (PoBroadcastSystemState.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 */

void WmipReleaseSmbiosLockShared()
{
  ExReleaseResourceLite(&WmipSMBiosLock);
  KeLeaveCriticalRegion();
}
