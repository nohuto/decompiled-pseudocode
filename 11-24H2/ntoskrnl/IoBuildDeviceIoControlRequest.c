/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x14025EEA0
 * Callers:
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140493A20 (FsRtlGetVirtualDiskNestingLevel.c)
 *     HalpSetAcpiRealTimeClock @ 0x1406F9E9C (HalpSetAcpiRealTimeClock.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1406FFAF4 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     FsRtlBalanceReads @ 0x1407085D0 (FsRtlBalanceReads.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14070AAE8 (FsRtlIssueFileNotificationFsctl.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14070B8D0 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopLoadFileSystemDriver @ 0x14071038C (IopLoadFileSystemDriver.c)
 *     IopSetRemoteLink @ 0x140710E50 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140717038 (IopIssueSystemEnvironmentRequest.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x140758E64 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopEtDeferredInitDxgContext @ 0x14075C860 (PopEtDeferredInitDxgContext.c)
 *     RawPerformDevIoCtrl @ 0x14077C9A4 (RawPerformDevIoCtrl.c)
 *     SmKmSendDeviceControl @ 0x14079A6C8 (SmKmSendDeviceControl.c)
 *     VhdVerifyBootDisk @ 0x14082A54C (VhdVerifyBootDisk.c)
 *     VhdiMountVhdFile @ 0x14082A898 (VhdiMountVhdFile.c)
 *     IopInvalidateVolumesForDevice @ 0x1408AEAB4 (IopInvalidateVolumesForDevice.c)
 *     FsRtlGetSectorSizeInformation @ 0x14094E860 (FsRtlGetSectorSizeInformation.c)
 *     FsRtlIssueDeviceIoControl @ 0x14094EE70 (FsRtlIssueDeviceIoControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x14094FDC0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14094FF60 (IoVolumeDeviceNameToGuidPath.c)
 *     NtApphelpCacheControl @ 0x1409502F0 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToDosName @ 0x140950A40 (IoVolumeDeviceToDosName.c)
 *     IopGetSetObjectId @ 0x140A21D40 (IopGetSetObjectId.c)
 *     IopGetVolumeId @ 0x140A21E7C (IopGetVolumeId.c)
 *     FsRtlQueryCachedVdl @ 0x140A2C020 (FsRtlQueryCachedVdl.c)
 *     IopCreateArcName @ 0x140A6FCE0 (IopCreateArcName.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140A7BE54 (HalpQueryAcpiRealTimeClock.c)
 *     RawQueryFsSizeInfo @ 0x140A86008 (RawQueryFsSizeInfo.c)
 *     HalpCallWakeAlarmDriver @ 0x140A93F30 (HalpCallWakeAlarmDriver.c)
 *     IopCreateArcNamesCd @ 0x140C1DE70 (IopCreateArcNamesCd.c)
 *     IopStoreBootDriveLetter @ 0x140C1F3DC (IopStoreBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140C1F8BC (IopGetBootDiskInformation.c)
 *     SbpAddTransportToInstance @ 0x140C60B84 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140C60D70 (SbpStartLanman.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x14025EF00 (IopBuildDeviceIoControlRequest.c)
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
