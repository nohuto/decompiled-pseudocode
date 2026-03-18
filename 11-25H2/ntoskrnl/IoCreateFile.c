/*
 * XREFs of IoCreateFile @ 0x1408EDC10
 * Callers:
 *     DifIoCreateFileWrapper @ 0x14061B2F0 (DifIoCreateFileWrapper.c)
 *     IopInitCrashDumpRegCallback @ 0x140C0B880 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     IopCreateFile @ 0x1408EE530 (IopCreateFile.c)
 */

NTSTATUS __stdcall IoCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG Disposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength,
        CREATE_FILE_TYPE CreateFileType,
        PVOID InternalParameters,
        ULONG Options)
{
  return IopCreateFile(
           (int)FileHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)IoStatusBlock,
           (__int64)AllocationSize,
           FileAttributes,
           ShareAccess,
           Disposition,
           CreateOptions,
           EaBuffer,
           EaLength,
           CreateFileType,
           (__int64)InternalParameters,
           Options,
           0,
           0LL);
}
