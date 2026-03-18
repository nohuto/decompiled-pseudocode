/*
 * XREFs of IoQueryVolumeInformation @ 0x140A4AFA0
 * Callers:
 *     <none>
 * Callees:
 *     IopQueryXxxInformation @ 0x1408C1900 (IopQueryXxxInformation.c)
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
