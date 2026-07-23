/*
 * XREFs of NtNotifyChangeDirectoryFile @ 0x140A0AE10
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeDirectoryFileEx @ 0x140A0AE70 (NtNotifyChangeDirectoryFileEx.c)
 */

NTSTATUS __cdecl NtNotifyChangeDirectoryFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        ULONG CompletionFilter,
        BOOLEAN WatchTree)
{
  return NtNotifyChangeDirectoryFileEx(
           FileHandle,
           Event,
           ApcRoutine,
           ApcContext,
           IoStatusBlock,
           Buffer,
           Length,
           CompletionFilter,
           WatchTree,
           DirectoryNotifyInformation);
}
