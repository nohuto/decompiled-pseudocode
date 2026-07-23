/*
 * XREFs of NtCreateFile @ 0x140955730
 * Callers:
 *     DifNtCreateFileWrapper @ 0x140633810 (DifNtCreateFileWrapper.c)
 * Callees:
 *     IopCreateFile @ 0x1409557C0 (IopCreateFile.c)
 */

NTSTATUS __stdcall NtCreateFile(
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
  return IopCreateFile(
           (int)FileHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)IoStatusBlock,
           (__int64)AllocationSize,
           FileAttributes,
           ShareAccess,
           CreateDisposition,
           CreateOptions,
           (__int64)EaBuffer,
           EaLength,
           0,
           0LL,
           0,
           32,
           0LL);
}
