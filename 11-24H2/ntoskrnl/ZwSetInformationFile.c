/*
 * XREFs of ZwSetInformationFile @ 0x1406A7890
 * Callers:
 *     DifZwSetInformationFileWrapper @ 0x1406468A0 (DifZwSetInformationFileWrapper.c)
 *     CmpDeleteCorruptedFile @ 0x140669E80 (CmpDeleteCorruptedFile.c)
 *     PpLastGoodDeleteFilesCallback @ 0x140720420 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1407336FC (IopFileUtilClearAttributes.c)
 *     PopCreateHiberFile @ 0x140750050 (PopCreateHiberFile.c)
 *     SmKmStoreFileCreate @ 0x14079A858 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x14079AFC4 (SmKmStoreFileDelete.c)
 *     EtwpSavePersistedLogger @ 0x1407B02B0 (EtwpSavePersistedLogger.c)
 *     CmpCmdRenameHive @ 0x1407D5E20 (CmpCmdRenameHive.c)
 *     CmpFlushBackupHive @ 0x1407DC808 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x1407DCE8C (CmpWriteOffsetArrayToFile.c)
 *     MiCreatePagingFile @ 0x1407EE934 (MiCreatePagingFile.c)
 *     CmpOpenHiveFile @ 0x140931FA4 (CmpOpenHiveFile.c)
 *     CmpCmdHiveClose @ 0x1409657C0 (CmpCmdHiveClose.c)
 *     CmpDoFileSetSizeEx @ 0x1409696C4 (CmpDoFileSetSizeEx.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1409D3170 (EtwpRealtimeZeroTruncateLogfile.c)
 *     EtwpCreateLogFile @ 0x1409D51BC (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x1409D5658 (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x1409D652C (EtwpFinalizeHeader.c)
 *     PopResizeHiberFile @ 0x140A72354 (PopResizeHiberFile.c)
 *     EtwpRealtimeSaveState @ 0x140AA5D18 (EtwpRealtimeSaveState.c)
 *     IopFileUtilRename @ 0x140C2845C (IopFileUtilRename.c)
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
  return KiServiceInternal(FileHandle);
}
