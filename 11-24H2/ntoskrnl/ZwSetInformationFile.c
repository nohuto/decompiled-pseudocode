/*
 * XREFs of ZwSetInformationFile @ 0x1406A68F0
 * Callers:
 *     DifZwSetInformationFileWrapper @ 0x1406482E0 (DifZwSetInformationFileWrapper.c)
 *     CmpDeleteCorruptedFile @ 0x140668CA8 (CmpDeleteCorruptedFile.c)
 *     PpLastGoodDeleteFilesCallback @ 0x140722890 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1407357CC (IopFileUtilClearAttributes.c)
 *     PopCreateHiberFile @ 0x140751D30 (PopCreateHiberFile.c)
 *     SmKmStoreFileCreate @ 0x14079A748 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x14079AEB4 (SmKmStoreFileDelete.c)
 *     EtwpSavePersistedLogger @ 0x1407AFE60 (EtwpSavePersistedLogger.c)
 *     CmpCmdRenameHive @ 0x1407D5930 (CmpCmdRenameHive.c)
 *     CmpFlushBackupHive @ 0x1407DC2B8 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x1407DC93C (CmpWriteOffsetArrayToFile.c)
 *     MiCreatePagingFile @ 0x1407EE364 (MiCreatePagingFile.c)
 *     CmpOpenHiveFile @ 0x14092FE64 (CmpOpenHiveFile.c)
 *     CmpCmdHiveClose @ 0x14097CFB0 (CmpCmdHiveClose.c)
 *     CmpDoFileSetSizeEx @ 0x140980EB4 (CmpDoFileSetSizeEx.c)
 *     EtwpRealtimeSaveState @ 0x1409D75AC (EtwpRealtimeSaveState.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1409D8668 (EtwpRealtimeZeroTruncateLogfile.c)
 *     EtwpCreateLogFile @ 0x1409DA6AC (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x1409DAB48 (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x1409DBD1C (EtwpFinalizeHeader.c)
 *     PopResizeHiberFile @ 0x140A78054 (PopResizeHiberFile.c)
 *     IopFileUtilRename @ 0x140C2640C (IopFileUtilRename.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock);
}
