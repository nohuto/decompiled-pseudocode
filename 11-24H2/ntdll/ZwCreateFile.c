/*
 * XREFs of ZwCreateFile @ 0x180160AF0
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x1800026C0 (RtlpFileIsWin32WithRCManifest.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180080610 (EtwpAddLogHeaderToLogFile.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800C64A0 (RtlCreateSystemVolumeInformationFolder.c)
 *     LdrpResMapFile @ 0x180109564 (LdrpResMapFile.c)
 *     RtlpGetVolumeHandle @ 0x18010C9C4 (RtlpGetVolumeHandle.c)
 *     OpenIptDevice @ 0x180114034 (OpenIptDevice.c)
 *     RtlCreateBootStatusDataFile @ 0x18013C450 (RtlCreateBootStatusDataFile.c)
 *     RtlpQueryDiskSpacePolicy @ 0x18015B614 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength)
{
  NTSTATUS result; // eax

  result = 85;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
