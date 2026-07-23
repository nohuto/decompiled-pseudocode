/*
 * XREFs of ZwOpenFile @ 0x1406A7A10
 * Callers:
 *     DbgkPostModuleMessage @ 0x140480C54 (DbgkPostModuleMessage.c)
 *     EtwpGetDriverDataDosPath @ 0x1404CD494 (EtwpGetDriverDataDosPath.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14059ED44 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwOpenFileWrapper @ 0x14063FE30 (DifZwOpenFileWrapper.c)
 *     BiLogFileOwnerProcess @ 0x1406987FC (BiLogFileOwnerProcess.c)
 *     HalpAcquirePccInterface @ 0x1407019E4 (HalpAcquirePccInterface.c)
 *     IopIsNotNativeDriverImage @ 0x140710184 (IopIsNotNativeDriverImage.c)
 *     IopValidateJunctionTarget @ 0x140710FC8 (IopValidateJunctionTarget.c)
 *     IoAttachDevice @ 0x140711640 (IoAttachDevice.c)
 *     PiOpenDirectoryWithRoot @ 0x14071D8A8 (PiOpenDirectoryWithRoot.c)
 *     PpLastGoodDeleteFilesCallback @ 0x140720420 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1407336FC (IopFileUtilClearAttributes.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140733A20 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140735ED4 (PiDrvDbQuerySystemPathWin32.c)
 *     PopLoadFileInMemory @ 0x140747724 (PopLoadFileInMemory.c)
 *     PspLocateSystemDll @ 0x140772090 (PspLocateSystemDll.c)
 *     PsCheckProcessFileSigningLevel @ 0x1407763D0 (PsCheckProcessFileSigningLevel.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1407AA444 (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpTranslateNtPath @ 0x1407BD944 (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x1407C30E0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1407C3A10 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1407CA104 (ApiSetpLoadSchemaImage.c)
 *     AslDoesDirectoryExistNtPath @ 0x140808DE8 (AslDoesDirectoryExistNtPath.c)
 *     AslDoesFileExistNtPath @ 0x140808EA4 (AslDoesFileExistNtPath.c)
 *     AslpPathWildcardAllocMatchNode @ 0x14080B8D0 (AslpPathWildcardAllocMatchNode.c)
 *     BiCreatePartitionDevice @ 0x140813B8C (BiCreatePartitionDevice.c)
 *     BiCreateVhdRamdiskBootDevice @ 0x140814008 (BiCreateVhdRamdiskBootDevice.c)
 *     BiGetNtPartitionPath @ 0x1408142E8 (BiGetNtPartitionPath.c)
 *     BiIsBootRamdisk @ 0x140814970 (BiIsBootRamdisk.c)
 *     ExpGetGlobalLocaleSection @ 0x1408DD9C4 (ExpGetGlobalLocaleSection.c)
 *     DbgkSendSystemDllMessages @ 0x1408F541C (DbgkSendSystemDllMessages.c)
 *     CmpOpenHiveFile @ 0x140931FA4 (CmpOpenHiveFile.c)
 *     CmpLogHiveFileInaccessible @ 0x140932734 (CmpLogHiveFileInaccessible.c)
 *     KsepSdbMapToMemory @ 0x14094498C (KsepSdbMapToMemory.c)
 *     IoGetDeviceObjectPointer @ 0x1409504C0 (IoGetDeviceObjectPointer.c)
 *     PiInitializeDDB @ 0x1409B8DD4 (PiInitializeDDB.c)
 *     NtGetNlsSectionPtr @ 0x140A053E0 (NtGetNlsSectionPtr.c)
 *     MiCreateSectionForDriver @ 0x140A1199C (MiCreateSectionForDriver.c)
 *     PopBootStatGet @ 0x140A348F8 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x140A34CDC (PopBootStatSet.c)
 *     SiOpenDevice @ 0x140A48B6C (SiOpenDevice.c)
 *     PiGetDriverImageDirectory @ 0x140A4FFD4 (PiGetDriverImageDirectory.c)
 *     KsepShimDatabaseTime @ 0x140A5A4EC (KsepShimDatabaseTime.c)
 *     ExpGetPartitionTableInfo @ 0x140A5C9EC (ExpGetPartitionTableInfo.c)
 *     PopValidateHiberFileSize @ 0x140A725BC (PopValidateHiberFileSize.c)
 *     RtlLockBootStatusData @ 0x140A76500 (RtlLockBootStatusData.c)
 *     DbgkpSectionToFileHandle @ 0x140A7DB28 (DbgkpSectionToFileHandle.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140A816E8 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x140A85628 (BiGetDriveLayoutInformation.c)
 *     PopBootStatRestoreDefaults @ 0x140AA6BD8 (PopBootStatRestoreDefaults.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140AA9E1C (BiIsVolumePartitionInformationRetained.c)
 *     ExpGetDriveGeometry @ 0x140AAD5F0 (ExpGetDriveGeometry.c)
 *     BiGetPhysicalDriveName @ 0x140AAF94C (BiGetPhysicalDriveName.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 *     IopMarkBootPartition @ 0x140C1EDB0 (IopMarkBootPartition.c)
 *     IopApplySystemPartitionProt @ 0x140C201A8 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140C226B0 (PipCriticalDeviceWaitCallback.c)
 *     IopFileUtilRename @ 0x140C2845C (IopFileUtilRename.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140C34A24 (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x140C5F888 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140C5FA00 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140C60240 (CimfsInitializeBootDisk.c)
 *     RamdiskStart @ 0x140C607D8 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
