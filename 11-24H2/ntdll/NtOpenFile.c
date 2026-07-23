/*
 * XREFs of NtOpenFile @ 0x1801606B0
 * Callers:
 *     RtlpMUIEnumerateFolder @ 0x180001138 (RtlpMUIEnumerateFolder.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800033D8 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x18000402C (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpCheckRelativeDrive @ 0x180008A90 (RtlpCheckRelativeDrive.c)
 *     RtlGetImageFileMachines @ 0x18006F0C0 (RtlGetImageFileMachines.c)
 *     LdrpMapDllNtFileName @ 0x18008DF20 (LdrpMapDllNtFileName.c)
 *     LdrpMapResourceFile @ 0x180093250 (LdrpMapResourceFile.c)
 *     RtlpCreateNewDirectoryReference @ 0x180094EF0 (RtlpCreateNewDirectoryReference.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800C7618 (LdrpFindLoadedDllByMappingFile.c)
 *     SaferpIsV2PolicyPresent @ 0x1800EB04C (SaferpIsV2PolicyPresent.c)
 *     SaferpIsDllAllowed @ 0x1800EB17C (SaferpIsDllAllowed.c)
 *     AvrfMiniLoadDll @ 0x180103EC4 (AvrfMiniLoadDll.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x180110C68 (RtlpOpenAndMapCustomCultureFile.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1801118CC (LdrpCnvrtShortToLongFileName.c)
 *     LdrpCheckAppDirType @ 0x180113030 (LdrpCheckAppDirType.c)
 *     RtlpSysVolTakeOwnership @ 0x180142820 (RtlpSysVolTakeOwnership.c)
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
