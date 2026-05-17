/*
 * XREFs of NtOpenFile @ 0x180163880
 * Callers:
 *     RtlGetImageFileMachines @ 0x180015120 (RtlGetImageFileMachines.c)
 *     LdrpMapDllNtFileName @ 0x180072240 (LdrpMapDllNtFileName.c)
 *     RtlpCreateNewDirectoryReference @ 0x1800A1A30 (RtlpCreateNewDirectoryReference.c)
 *     LdrpMapResourceFile @ 0x1800A2100 (LdrpMapResourceFile.c)
 *     RtlpCheckRelativeDrive @ 0x1800AEF70 (RtlpCheckRelativeDrive.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800CBEB8 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800E2898 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800E34EC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     SaferpIsV2PolicyPresent @ 0x1800F1C7C (SaferpIsV2PolicyPresent.c)
 *     SaferpIsDllAllowed @ 0x1800F1DAC (SaferpIsDllAllowed.c)
 *     AvrfMiniLoadDll @ 0x18010B9A4 (AvrfMiniLoadDll.c)
 *     RtlpMUIEnumerateFolder @ 0x18010DBCC (RtlpMUIEnumerateFolder.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1801189C4 (RtlpOpenAndMapCustomCultureFile.c)
 *     LdrpCnvrtShortToLongFileName @ 0x180119888 (LdrpCnvrtShortToLongFileName.c)
 *     LdrpCheckAppDirType @ 0x18011B140 (LdrpCheckAppDirType.c)
 *     RtlpSysVolTakeOwnership @ 0x1801459E0 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  NTSTATUS result; // eax

  result = 51;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
