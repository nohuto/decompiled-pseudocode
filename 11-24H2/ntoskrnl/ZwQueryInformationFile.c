/*
 * XREFs of ZwQueryInformationFile @ 0x1406A6630
 * Callers:
 *     CmpAdjustFileCFSafety @ 0x1404B2D88 (CmpAdjustFileCFSafety.c)
 *     DbgkCaptureLiveKernelDump @ 0x14057EAD8 (DbgkCaptureLiveKernelDump.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405925BC (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x14059E56C (IopLiveDumpValidateDumpFileHandle.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x1405A1E04 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwQueryInformationFileWrapper @ 0x140644FE0 (DifZwQueryInformationFileWrapper.c)
 *     RtlFileMapMapView @ 0x1406966E4 (RtlFileMapMapView.c)
 *     BiLogFileOwnerProcess @ 0x14069777C (BiLogFileOwnerProcess.c)
 *     IopFileUtilClearAttributes @ 0x1407357CC (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x140745C48 (PfpQueryFileExtentsRequest.c)
 *     PopLoadFileInMemory @ 0x1407493F4 (PopLoadFileInMemory.c)
 *     PopCreateHiberFile @ 0x140751D30 (PopCreateHiberFile.c)
 *     PopZeroHiberFile @ 0x14075333C (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x14079A748 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x14079B5E8 (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x1407C21BC (CMFGetFileSizeEx.c)
 *     CmpInitHiveFromFile @ 0x14092EC1C (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x14092FE64 (CmpOpenHiveFile.c)
 *     AslFileMappingCreate @ 0x140959A94 (AslFileMappingCreate.c)
 *     CmpCmdHiveClose @ 0x14097CFB0 (CmpCmdHiveClose.c)
 *     CmpGetFileSize @ 0x140982B9C (CmpGetFileSize.c)
 *     EtwpUpdateFileHeader @ 0x1409DAB48 (EtwpUpdateFileHeader.c)
 *     KsepShimDatabaseTime @ 0x140A61BF8 (KsepShimDatabaseTime.c)
 *     PopValidateHiberFileSize @ 0x140A782BC (PopValidateHiberFileSize.c)
 *     EtwpRealtimeRestoreState @ 0x140AAECB8 (EtwpRealtimeRestoreState.c)
 *     EmInitSystem @ 0x140C607D0 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationFile(
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
