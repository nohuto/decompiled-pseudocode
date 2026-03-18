/*
 * XREFs of ZwSetVolumeInformationFile @ 0x1406A9C90
 * Callers:
 *     DifZwSetVolumeInformationFileWrapper @ 0x1406495C0 (DifZwSetVolumeInformationFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock);
}
