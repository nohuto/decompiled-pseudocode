/*
 * XREFs of ZwCancelIoFile @ 0x1406A7F50
 * Callers:
 *     DifZwCancelIoFileWrapper @ 0x14063B0E0 (DifZwCancelIoFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelIoFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
