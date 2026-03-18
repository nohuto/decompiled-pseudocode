/*
 * XREFs of ZwOpenFile @ 0x1406A6A70
 * Callers:
 *     DbgkPostModuleMessage @ 0x140485670 (DbgkPostModuleMessage.c)
 *     EtwpGetDriverDataDosPath @ 0x1404D4284 (EtwpGetDriverDataDosPath.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x1405A1E04 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwOpenFileWrapper @ 0x140641870 (DifZwOpenFileWrapper.c)
 *     BiLogFileOwnerProcess @ 0x14069777C (BiLogFileOwnerProcess.c)
 *     HalpAcquirePccInterface @ 0x140703E24 (HalpAcquirePccInterface.c)
 *     IopIsNotNativeDriverImage @ 0x1407125F4 (IopIsNotNativeDriverImage.c)
 *     IopValidateJunctionTarget @ 0x140713438 (IopValidateJunctionTarget.c)
 *     IoAttachDevice @ 0x140713AB0 (IoAttachDevice.c)
 *     PiOpenDirectoryWithRoot @ 0x14071FD18 (PiOpenDirectoryWithRoot.c)
 *     PpLastGoodDeleteFilesCallback @ 0x140722890 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1407357CC (IopFileUtilClearAttributes.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140735AF0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140737FA4 (PiDrvDbQuerySystemPathWin32.c)
 *     PopLoadFileInMemory @ 0x1407493F4 (PopLoadFileInMemory.c)
 *     PspLocateSystemDll @ 0x140771E70 (PspLocateSystemDll.c)
 *     PsCheckProcessFileSigningLevel @ 0x1407761B0 (PsCheckProcessFileSigningLevel.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1407AA304 (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpTranslateNtPath @ 0x1407BD4F4 (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x1407C1EAC (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1407C27E0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1407C9C14 (ApiSetpLoadSchemaImage.c)
 *     AslDoesDirectoryExistNtPath @ 0x1408086A8 (AslDoesDirectoryExistNtPath.c)
 *     AslDoesFileExistNtPath @ 0x140808764 (AslDoesFileExistNtPath.c)
 *     AslpPathWildcardAllocMatchNode @ 0x14080B190 (AslpPathWildcardAllocMatchNode.c)
 *     BiCreatePartitionDevice @ 0x14081344C (BiCreatePartitionDevice.c)
 *     BiCreateVhdRamdiskBootDevice @ 0x1408138C8 (BiCreateVhdRamdiskBootDevice.c)
 *     BiGetNtPartitionPath @ 0x140813BA8 (BiGetNtPartitionPath.c)
 *     BiIsBootRamdisk @ 0x140814230 (BiIsBootRamdisk.c)
 *     ExpGetGlobalLocaleSection @ 0x140906FB4 (ExpGetGlobalLocaleSection.c)
 *     CmpOpenHiveFile @ 0x14092FE64 (CmpOpenHiveFile.c)
 *     CmpLogHiveFileInaccessible @ 0x1409305F4 (CmpLogHiveFileInaccessible.c)
 *     DbgkSendSystemDllMessages @ 0x140939F18 (DbgkSendSystemDllMessages.c)
 *     KsepSdbMapToMemory @ 0x14095CECC (KsepSdbMapToMemory.c)
 *     IoGetDeviceObjectPointer @ 0x140967A30 (IoGetDeviceObjectPointer.c)
 *     PiInitializeDDB @ 0x1409C7B30 (PiInitializeDDB.c)
 *     NtGetNlsSectionPtr @ 0x140A08EB0 (NtGetNlsSectionPtr.c)
 *     MiCreateSectionForDriver @ 0x140A1882C (MiCreateSectionForDriver.c)
 *     PopBootStatGet @ 0x140A3F048 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x140A3F42C (PopBootStatSet.c)
 *     SiOpenDevice @ 0x140A51A9C (SiOpenDevice.c)
 *     PiGetDriverImageDirectory @ 0x140A58824 (PiGetDriverImageDirectory.c)
 *     KsepShimDatabaseTime @ 0x140A61BF8 (KsepShimDatabaseTime.c)
 *     ExpGetPartitionTableInfo @ 0x140A640EC (ExpGetPartitionTableInfo.c)
 *     PopValidateHiberFileSize @ 0x140A782BC (PopValidateHiberFileSize.c)
 *     RtlLockBootStatusData @ 0x140A7C200 (RtlLockBootStatusData.c)
 *     DbgkpSectionToFileHandle @ 0x140A83008 (DbgkpSectionToFileHandle.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140A86C10 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x140A89228 (BiGetDriveLayoutInformation.c)
 *     MiOpenHotPatchFile @ 0x140A9FE3C (MiOpenHotPatchFile.c)
 *     PopBootStatRestoreDefaults @ 0x140AABC04 (PopBootStatRestoreDefaults.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140AAEF40 (BiIsVolumePartitionInformationRetained.c)
 *     ExpGetDriveGeometry @ 0x140AB2680 (ExpGetDriveGeometry.c)
 *     BiGetPhysicalDriveName @ 0x140AB54BC (BiGetPhysicalDriveName.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 *     IopMarkBootPartition @ 0x140C1CD70 (IopMarkBootPartition.c)
 *     IopApplySystemPartitionProt @ 0x140C1E168 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140C20670 (PipCriticalDeviceWaitCallback.c)
 *     IopFileUtilRename @ 0x140C2640C (IopFileUtilRename.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140C328E4 (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x140C5D730 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140C5D8B0 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140C5E0F0 (CimfsInitializeBootDisk.c)
 *     RamdiskStart @ 0x140C5E688 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(FileHandle, *(_QWORD *)&DesiredAccess);
}
