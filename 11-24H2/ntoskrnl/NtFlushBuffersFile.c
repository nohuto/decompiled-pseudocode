/*
 * XREFs of NtFlushBuffersFile @ 0x1409576D0
 * Callers:
 *     <none>
 * Callees:
 *     NtFlushBuffersFileEx @ 0x140957700 (NtFlushBuffersFileEx.c)
 */

NTSTATUS __cdecl NtFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  return NtFlushBuffersFileEx(FileHandle, 0, 0LL, 0, IoStatusBlock);
}
