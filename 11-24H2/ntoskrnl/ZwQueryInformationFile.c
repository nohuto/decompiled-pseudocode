/*
 * XREFs of ZwQueryInformationFile @ 0x1406A75D0
 * Callers:
 *     CmpAdjustFileCFSafety @ 0x1404AD590 (CmpAdjustFileCFSafety.c)
 *     DbgkCaptureLiveKernelDump @ 0x14057BF68 (DbgkCaptureLiveKernelDump.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x14058F5E0 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x14059B4EC (IopLiveDumpValidateDumpFileHandle.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14059ED44 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwQueryInformationFileWrapper @ 0x1406435A0 (DifZwQueryInformationFileWrapper.c)
 *     RtlFileMapMapView @ 0x1406977B4 (RtlFileMapMapView.c)
 *     BiLogFileOwnerProcess @ 0x1406987FC (BiLogFileOwnerProcess.c)
 *     IopFileUtilClearAttributes @ 0x1407336FC (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x140743F38 (PfpQueryFileExtentsRequest.c)
 *     PopLoadFileInMemory @ 0x140747724 (PopLoadFileInMemory.c)
 *     PopCreateHiberFile @ 0x140750050 (PopCreateHiberFile.c)
 *     PopZeroHiberFile @ 0x14075165C (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x14079A858 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x14079B6F8 (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x1407C33F0 (CMFGetFileSizeEx.c)
 *     CmpInitHiveFromFile @ 0x140930D5C (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x140931FA4 (CmpOpenHiveFile.c)
 *     AslFileMappingCreate @ 0x140941554 (AslFileMappingCreate.c)
 *     CmpCmdHiveClose @ 0x1409657C0 (CmpCmdHiveClose.c)
 *     CmpGetFileSize @ 0x14096B3AC (CmpGetFileSize.c)
 *     EtwpUpdateFileHeader @ 0x1409D5658 (EtwpUpdateFileHeader.c)
 *     KsepShimDatabaseTime @ 0x140A5A4EC (KsepShimDatabaseTime.c)
 *     PopValidateHiberFileSize @ 0x140A725BC (PopValidateHiberFileSize.c)
 *     EtwpRealtimeRestoreState @ 0x140AA9B94 (EtwpRealtimeRestoreState.c)
 *     EmInitSystem @ 0x140C62920 (EmInitSystem.c)
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
  return KiServiceInternal(FileHandle);
}
