/*
 * XREFs of IopAllocateIrpCleanup @ 0x14098A8E4
 * Callers:
 *     NtSetInformationFile @ 0x1402A04A0 (NtSetInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1407068A0 (IopSetEaOrQuotaInformationFile.c)
 *     IoSetInformation @ 0x140708720 (IoSetInformation.c)
 *     NtQueryQuotaInformationFile @ 0x14070BB10 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x14070C280 (NtSetVolumeInformationFile.c)
 *     BuildQueryDirectoryIrp @ 0x1408C6A20 (BuildQueryDirectoryIrp.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14098A4B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x140A5F1F0 (NtSetEaFile.c)
 * Callees:
 *     IopReleaseFileObjectLock @ 0x140285FF0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall IopAllocateIrpCleanup(_DWORD *BugCheckParameter2, PVOID Object)
{
  if ( Object )
    ObfDereferenceObject(Object);
  if ( (BugCheckParameter2[20] & 2) != 0 )
    IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2);
  return ObfDereferenceObject(BugCheckParameter2);
}
