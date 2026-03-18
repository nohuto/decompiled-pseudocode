/*
 * XREFs of IopAllocateIrpCleanup @ 0x140A0C064
 * Callers:
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1407129A0 (IopSetEaOrQuotaInformationFile.c)
 *     IoSetInformation @ 0x140714820 (IoSetInformation.c)
 *     NtQueryQuotaInformationFile @ 0x140717C10 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140718380 (NtSetVolumeInformationFile.c)
 *     BuildQueryDirectoryIrp @ 0x1408C48F0 (BuildQueryDirectoryIrp.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140A0BC30 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x140A60FA0 (NtSetEaFile.c)
 * Callees:
 *     IopReleaseFileObjectLock @ 0x14031D520 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall IopAllocateIrpCleanup(_DWORD *BugCheckParameter2, PVOID Object)
{
  if ( Object )
    ObfDereferenceObject(Object);
  if ( (BugCheckParameter2[20] & 2) != 0 )
    IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2);
  return ObfDereferenceObject(BugCheckParameter2);
}
