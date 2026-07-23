/*
 * XREFs of IopAllocateIrpCleanup @ 0x140A0B2A4
 * Callers:
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140710530 (IopSetEaOrQuotaInformationFile.c)
 *     IoSetInformation @ 0x1407123B0 (IoSetInformation.c)
 *     NtQueryQuotaInformationFile @ 0x1407157A0 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140715F10 (NtSetVolumeInformationFile.c)
 *     BuildQueryDirectoryIrp @ 0x1408C22B0 (BuildQueryDirectoryIrp.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140A0AE70 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x140A59680 (NtSetEaFile.c)
 * Callees:
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall IopAllocateIrpCleanup(_DWORD *BugCheckParameter2, PVOID Object)
{
  if ( Object )
    ObfDereferenceObject(Object);
  if ( (BugCheckParameter2[20] & 2) != 0 )
    IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2);
  return ObfDereferenceObject(BugCheckParameter2);
}
