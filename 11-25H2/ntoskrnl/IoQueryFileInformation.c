/*
 * XREFs of IoQueryFileInformation @ 0x1408C1BB0
 * Callers:
 *     <none>
 * Callees:
 *     IopQueryXxxInformation @ 0x1408C1900 (IopQueryXxxInformation.c)
 */

NTSTATUS __stdcall IoQueryFileInformation(
        PFILE_OBJECT FileObject,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        PVOID FileInformation,
        PULONG ReturnedLength)
{
  return IopQueryXxxInformation(
           FileObject,
           FileInformationClass,
           Length,
           0,
           (__int64)FileInformation,
           ReturnedLength,
           1);
}
