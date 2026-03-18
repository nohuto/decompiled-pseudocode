/*
 * XREFs of WmipReleaseSmbiosLockShared @ 0x140A7BAE8
 * Callers:
 *     WmipReadSMBiosSysInfo @ 0x14064C35C (WmipReadSMBiosSysInfo.c)
 *     PoBroadcastSystemState @ 0x140B64C6C (PoBroadcastSystemState.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 */

void WmipReleaseSmbiosLockShared()
{
  ExReleaseResourceLite(&WmipSMBiosLock);
  KeLeaveCriticalRegion();
}
