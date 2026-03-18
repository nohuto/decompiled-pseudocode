/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x1406A6D30
 * Callers:
 *     DifZwQueryVolumeInformationFileWrapper @ 0x140646BF0 (DifZwQueryVolumeInformationFileWrapper.c)
 *     PfpQueryFileExtentsRequest @ 0x140745C48 (PfpQueryFileExtentsRequest.c)
 *     SmKmIsVolumeIoPossible @ 0x140799CF0 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x14079A748 (SmKmStoreFileCreate.c)
 *     CmpGetVolumeClusterSize @ 0x140930B1C (CmpGetVolumeClusterSize.c)
 *     CmpGetVolumeLogFileSizeCap @ 0x140930E60 (CmpGetVolumeLogFileSizeCap.c)
 *     EtwpCreateLogFile @ 0x1409DA6AC (EtwpCreateLogFile.c)
 *     EtwpFinalizeHeader @ 0x1409DBD1C (EtwpFinalizeHeader.c)
 *     PopValidateHiberFileSize @ 0x140A782BC (PopValidateHiberFileSize.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryVolumeInformationFile(
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
