/*
 * XREFs of ZwDeviceIoControlFile @ 0x1406A64F0
 * Callers:
 *     PopFlushAndHold @ 0x1404D551C (PopFlushAndHold.c)
 *     DifZwDeviceIoControlFileWrapper @ 0x14063F030 (DifZwDeviceIoControlFileWrapper.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14071A708 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1407AA304 (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407B47A8 (ExpGetSystemWriteConstraintInformation.c)
 *     ExpTranslateNtPath @ 0x1407BD4F4 (ExpTranslateNtPath.c)
 *     BiCreateVhdRamdiskBootDevice @ 0x1408138C8 (BiCreateVhdRamdiskBootDevice.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x140814138 (BiGetVolumeDiskExtentsInformation.c)
 *     BiIsBootRamdisk @ 0x140814230 (BiIsBootRamdisk.c)
 *     SiGetDeviceNumberInformation @ 0x140815F38 (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140816014 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140816114 (SiIssueSynchronousIoctl.c)
 *     SiQueryProperty @ 0x140A518C0 (SiQueryProperty.c)
 *     SiGetDiskPartitionInformation @ 0x140A51A08 (SiGetDiskPartitionInformation.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140A52EE4 (PfSnVolumeCheckIsSdBus.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x140A57A9C (PfSnVolumeCheckSeekPenalty.c)
 *     ExpGetPartitionTableInfo @ 0x140A640EC (ExpGetPartitionTableInfo.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140A86C10 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140A892F4 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140AAEF40 (BiIsVolumePartitionInformationRetained.c)
 *     ExpGetDriveGeometry @ 0x140AB2680 (ExpGetDriveGeometry.c)
 *     BiGetPartitionInformation @ 0x140AB6074 (BiGetPartitionInformation.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140C328E4 (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x140C5D730 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140C5D8B0 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140C5DBD4 (VhdiQueryVolumeVhdFilePath.c)
 *     CimfsInitializeBootDisk @ 0x140C5E0F0 (CimfsInitializeBootDisk.c)
 *     RamdiskStart @ 0x140C5E688 (RamdiskStart.c)
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
  return KiServiceInternal(FileHandle, Event, ApcRoutine);
}
