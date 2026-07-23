/*
 * XREFs of IoQueryVolumeInformation @ 0x1409549A0
 * Callers:
 *     <none>
 * Callees:
 *     IopQueryXxxInformation @ 0x140952FC0 (IopQueryXxxInformation.c)
 */

NTSTATUS __stdcall IoQueryVolumeInformation(
        PFILE_OBJECT FileObject,
        FS_INFORMATION_CLASS FsInformationClass,
        ULONG Length,
        PVOID FsInformation,
        PULONG ReturnedLength)
{
  return IopQueryXxxInformation(FileObject, FsInformationClass, Length, 0, (__int64)FsInformation, ReturnedLength, 0);
}
