/*
 * XREFs of NtOpenFile @ 0x1409556C0
 * Callers:
 *     DifNtOpenFileWrapper @ 0x140633F30 (DifNtOpenFileWrapper.c)
 * Callees:
 *     IopCreateFile @ 0x1409557C0 (IopCreateFile.c)
 */

NTSTATUS __stdcall NtOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  return IopCreateFile(
           (int)FileHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)IoStatusBlock,
           0LL,
           0,
           ShareAccess,
           1,
           OpenOptions,
           0LL,
           0,
           0,
           0LL,
           0,
           32,
           0LL);
}
