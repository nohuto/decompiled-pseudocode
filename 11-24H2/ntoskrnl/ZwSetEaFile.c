/*
 * XREFs of ZwSetEaFile @ 0x1406A9810
 * Callers:
 *     DifZwSetEaFileWrapper @ 0x140647E50 (DifZwSetEaFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEaFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID Buffer, ULONG Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock);
}
