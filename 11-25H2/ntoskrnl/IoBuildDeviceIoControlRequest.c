/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x1402D49E0
 * Callers:
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1402D2880 (FsRtlGetVirtualDiskNestingLevel.c)
 *     HalpSetAcpiRealTimeClock @ 0x1406F0518 (HalpSetAcpiRealTimeClock.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1406F60C4 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     FsRtlBalanceReads @ 0x1406FEB30 (FsRtlBalanceReads.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140701068 (FsRtlIssueFileNotificationFsctl.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140701E50 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopLoadFileSystemDriver @ 0x1407066FC (IopLoadFileSystemDriver.c)
 *     IopSetRemoteLink @ 0x1407071C0 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14070D3A8 (IopIssueSystemEnvironmentRequest.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x14074E1A4 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopEtDeferredInitDxgContext @ 0x140750E90 (PopEtDeferredInitDxgContext.c)
 *     RawPerformDevIoCtrl @ 0x14076D7C4 (RawPerformDevIoCtrl.c)
 *     SmKmSendDeviceControl @ 0x14078B1F0 (SmKmSendDeviceControl.c)
 *     VhdVerifyBootDisk @ 0x140819F1C (VhdVerifyBootDisk.c)
 *     VhdiMountVhdFile @ 0x14081A2D0 (VhdiMountVhdFile.c)
 *     FsRtlGetSectorSizeInformation @ 0x140821500 (FsRtlGetSectorSizeInformation.c)
 *     FsRtlIssueDeviceIoControl @ 0x140821B10 (FsRtlIssueDeviceIoControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x140822890 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140822A30 (IoVolumeDeviceNameToGuidPath.c)
 *     NtApphelpCacheControl @ 0x140822DC0 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToDosName @ 0x1408BF350 (IoVolumeDeviceToDosName.c)
 *     IopInvalidateVolumesForDevice @ 0x1409A05FC (IopInvalidateVolumesForDevice.c)
 *     IopGetSetObjectId @ 0x140A23CC0 (IopGetSetObjectId.c)
 *     IopGetVolumeId @ 0x140A23DFC (IopGetVolumeId.c)
 *     FsRtlQueryCachedVdl @ 0x140A31320 (FsRtlQueryCachedVdl.c)
 *     IopCreateArcName @ 0x140A73568 (IopCreateArcName.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140A7DD74 (HalpQueryAcpiRealTimeClock.c)
 *     RawQueryFsSizeInfo @ 0x140A84E18 (RawQueryFsSizeInfo.c)
 *     HalpCallWakeAlarmDriver @ 0x140A933D0 (HalpCallWakeAlarmDriver.c)
 *     IopCreateArcNamesCd @ 0x140C0AC5C (IopCreateArcNamesCd.c)
 *     IopStoreBootDriveLetter @ 0x140C0C1CC (IopStoreBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140C0C6AC (IopGetBootDiskInformation.c)
 *     SbpAddTransportToInstance @ 0x140C4D6B4 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140C4D8A0 (SbpStartLanman.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x1402D4A40 (IopBuildDeviceIoControlRequest.c)
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
