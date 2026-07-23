/*
 * XREFs of ZwSetEaFile @ 0x1406AA7B0
 * Callers:
 *     DifZwSetEaFileWrapper @ 0x140646410 (DifZwSetEaFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEaFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID Buffer, ULONG Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
