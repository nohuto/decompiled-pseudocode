/*
 * XREFs of ZwDeviceIoControlFile @ 0x1406A7490
 * Callers:
 *     PopFlushAndHold @ 0x1404CE964 (PopFlushAndHold.c)
 *     DifZwDeviceIoControlFileWrapper @ 0x14063D5F0 (DifZwDeviceIoControlFileWrapper.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140718298 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1407AA444 (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407B4BF8 (ExpGetSystemWriteConstraintInformation.c)
 *     ExpTranslateNtPath @ 0x1407BD944 (ExpTranslateNtPath.c)
 *     BiCreateVhdRamdiskBootDevice @ 0x140814008 (BiCreateVhdRamdiskBootDevice.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x140814878 (BiGetVolumeDiskExtentsInformation.c)
 *     BiIsBootRamdisk @ 0x140814970 (BiIsBootRamdisk.c)
 *     SiGetDeviceNumberInformation @ 0x140816678 (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140816754 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140816854 (SiIssueSynchronousIoctl.c)
 *     SiQueryProperty @ 0x140A48990 (SiQueryProperty.c)
 *     SiGetDiskPartitionInformation @ 0x140A48AD8 (SiGetDiskPartitionInformation.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140A4AED8 (PfSnVolumeCheckIsSdBus.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x140A4F244 (PfSnVolumeCheckSeekPenalty.c)
 *     ExpGetPartitionTableInfo @ 0x140A5C9EC (ExpGetPartitionTableInfo.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140A816E8 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140A856F4 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140AA9E1C (BiIsVolumePartitionInformationRetained.c)
 *     ExpGetDriveGeometry @ 0x140AAD5F0 (ExpGetDriveGeometry.c)
 *     BiGetPartitionInformation @ 0x140AB033C (BiGetPartitionInformation.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140C34A24 (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x140C5F888 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140C5FA00 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140C5FD24 (VhdiQueryVolumeVhdFilePath.c)
 *     CimfsInitializeBootDisk @ 0x140C60240 (CimfsInitializeBootDisk.c)
 *     RamdiskStart @ 0x140C607D8 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeviceIoControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
