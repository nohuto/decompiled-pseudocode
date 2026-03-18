/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x1402678C0
 * Callers:
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140499090 (FsRtlGetVirtualDiskNestingLevel.c)
 *     HalpSetAcpiRealTimeClock @ 0x1406FC25C (HalpSetAcpiRealTimeClock.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140701EB4 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     FsRtlBalanceReads @ 0x14070AA10 (FsRtlBalanceReads.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14070CF48 (FsRtlIssueFileNotificationFsctl.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14070DD30 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopLoadFileSystemDriver @ 0x1407127FC (IopLoadFileSystemDriver.c)
 *     IopSetRemoteLink @ 0x1407132C0 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x1407194A8 (IopIssueSystemEnvironmentRequest.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x14075A774 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopEtDeferredInitDxgContext @ 0x14075D8C0 (PopEtDeferredInitDxgContext.c)
 *     RawPerformDevIoCtrl @ 0x14077CAF4 (RawPerformDevIoCtrl.c)
 *     SmKmSendDeviceControl @ 0x14079A5B8 (SmKmSendDeviceControl.c)
 *     VhdVerifyBootDisk @ 0x140829D1C (VhdVerifyBootDisk.c)
 *     VhdiMountVhdFile @ 0x14082A068 (VhdiMountVhdFile.c)
 *     FsRtlGetSectorSizeInformation @ 0x140965DD0 (FsRtlGetSectorSizeInformation.c)
 *     FsRtlIssueDeviceIoControl @ 0x1409663E0 (FsRtlIssueDeviceIoControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x140967330 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1409674D0 (IoVolumeDeviceNameToGuidPath.c)
 *     NtApphelpCacheControl @ 0x140967860 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToDosName @ 0x140967FB0 (IoVolumeDeviceToDosName.c)
 *     IopInvalidateVolumesForDevice @ 0x1409A4954 (IopInvalidateVolumesForDevice.c)
 *     IopGetSetObjectId @ 0x140A2D300 (IopGetSetObjectId.c)
 *     IopGetVolumeId @ 0x140A2D43C (IopGetVolumeId.c)
 *     FsRtlQueryCachedVdl @ 0x140A371D0 (FsRtlQueryCachedVdl.c)
 *     IopCreateArcName @ 0x140A75840 (IopCreateArcName.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140A813F4 (HalpQueryAcpiRealTimeClock.c)
 *     RawQueryFsSizeInfo @ 0x140A89C08 (RawQueryFsSizeInfo.c)
 *     HalpCallWakeAlarmDriver @ 0x140A97700 (HalpCallWakeAlarmDriver.c)
 *     IopCreateArcNamesCd @ 0x140C1BE30 (IopCreateArcNamesCd.c)
 *     IopStoreBootDriveLetter @ 0x140C1D39C (IopStoreBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140C1D87C (IopGetBootDiskInformation.c)
 *     SbpAddTransportToInstance @ 0x140C5EA34 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140C5EC20 (SbpStartLanman.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x140267920 (IopBuildDeviceIoControlRequest.c)
 */

PIRP __stdcall IoBuildDeviceIoControlRequest(
        ULONG IoControlCode,
        PDEVICE_OBJECT DeviceObject,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        BOOLEAN InternalDeviceIoControl,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  void *retaddr; // [rsp+58h] [rbp+0h]

  return (PIRP)IopBuildDeviceIoControlRequest(
                 IoControlCode,
                 DeviceObject,
                 InputBuffer,
                 InputBufferLength,
                 OutputBuffer,
                 OutputBufferLength,
                 InternalDeviceIoControl,
                 Event,
                 IoStatusBlock,
                 retaddr);
}
