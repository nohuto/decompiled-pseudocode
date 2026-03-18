/*
 * XREFs of IofCallDriver @ 0x14035D320
 * Callers:
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1402D2880 (FsRtlGetVirtualDiskNestingLevel.c)
 *     PopQueueQuerySetIrp @ 0x14034DCB8 (PopQueueQuerySetIrp.c)
 *     PopDequeueQuerySetIrp @ 0x14035836C (PopDequeueQuerySetIrp.c)
 *     CcSetValidData @ 0x14035B530 (CcSetValidData.c)
 *     MiIssueAsynchronousFlush @ 0x14035B6FC (MiIssueAsynchronousFlush.c)
 *     IoAsynchronousPageWrite @ 0x14035BA6C (IoAsynchronousPageWrite.c)
 *     IopfCallDriver @ 0x14035C150 (IopfCallDriver.c)
 *     MiSynchronousPageWrite @ 0x14035C250 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14035C508 (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x14035C7E0 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14035CA60 (IoPageReadEx.c)
 *     IopCallDriverReference @ 0x14035D040 (IopCallDriverReference.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     IoSynchronousCallDriver @ 0x14035DF20 (IoSynchronousCallDriver.c)
 *     PoCallDriver @ 0x14035F1F0 (PoCallDriver.c)
 *     HalpPassIrpFromFdoToPdo @ 0x1404D811C (HalpPassIrpFromFdoToPdo.c)
 *     SmKmIssueVolumeIo @ 0x140601980 (SmKmIssueVolumeIo.c)
 *     HalpSetAcpiRealTimeClock @ 0x1406F0518 (HalpSetAcpiRealTimeClock.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1406F60C4 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPccInterface @ 0x1406F81BC (HalpQueryPccInterface.c)
 *     FsRtlBalanceReads @ 0x1406FEB30 (FsRtlBalanceReads.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140701068 (FsRtlIssueFileNotificationFsctl.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140701E50 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopLoadFileSystemDriver @ 0x1407066FC (IopLoadFileSystemDriver.c)
 *     IopSetRemoteLink @ 0x1407071C0 (IopSetRemoteLink.c)
 *     IoSetInformation @ 0x140708720 (IoSetInformation.c)
 *     IopIssueSystemEnvironmentCallout @ 0x14070D380 (IopIssueSystemEnvironmentCallout.c)
 *     PiPagePathSetState @ 0x140716860 (PiPagePathSetState.c)
 *     IopEjectDevice @ 0x140727798 (IopEjectDevice.c)
 *     PipSendGuestAssignedNotification @ 0x140729FD4 (PipSendGuestAssignedNotification.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x14074E1A4 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopPowerAdapterQueryStatus @ 0x14074F2D4 (PopPowerAdapterQueryStatus.c)
 *     PopEtDeferredInitDxgContext @ 0x140750E90 (PopEtDeferredInitDxgContext.c)
 *     RawPerformDevIoCtrl @ 0x14076D7C4 (RawPerformDevIoCtrl.c)
 *     RawQueryFileSystemInformation @ 0x14076D9C0 (RawQueryFileSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x14078978C (SmStorePhysicalRequestIssue.c)
 *     SmKmSendDeviceControl @ 0x14078B1F0 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x14078B2B0 (SmKmSendUsageNotification.c)
 *     ExpQueryPrmInterface @ 0x1407AFE48 (ExpQueryPrmInterface.c)
 *     VhdVerifyBootDisk @ 0x140819F1C (VhdVerifyBootDisk.c)
 *     VhdiMountVhdFile @ 0x14081A2D0 (VhdiMountVhdFile.c)
 *     FsRtlGetSectorSizeInformation @ 0x140821500 (FsRtlGetSectorSizeInformation.c)
 *     FsRtlIssueDeviceIoControl @ 0x140821B10 (FsRtlIssueDeviceIoControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x140822890 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140822A30 (IoVolumeDeviceNameToGuidPath.c)
 *     NtApphelpCacheControl @ 0x140822DC0 (NtApphelpCacheControl.c)
 *     PnpQueryInterface @ 0x14082CC7C (PnpQueryInterface.c)
 *     IopFilterResourceRequirementsCall @ 0x14083168C (IopFilterResourceRequirementsCall.c)
 *     IopSynchronousCall @ 0x140834D44 (IopSynchronousCall.c)
 *     IopDeleteFile @ 0x140844B30 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140845AF0 (IopCloseFile.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     IopGetSetSecurityObject @ 0x14086F330 (IopGetSetSecurityObject.c)
 *     IoVolumeDeviceToDosName @ 0x1408BF350 (IoVolumeDeviceToDosName.c)
 *     IopQueryNameInternal @ 0x1408BF6D0 (IopQueryNameInternal.c)
 *     IopQueryXxxInformation @ 0x1408C1900 (IopQueryXxxInformation.c)
 *     IopSynchronousServiceTail @ 0x1408C5420 (IopSynchronousServiceTail.c)
 *     IopGetFileInformation @ 0x1408ECAD0 (IopGetFileInformation.c)
 *     CmpGetVolumeClusterSize @ 0x1409105D0 (CmpGetVolumeClusterSize.c)
 *     FsRtlSetFileSize @ 0x14093A4A0 (FsRtlSetFileSize.c)
 *     FsRtlGetFileSize @ 0x14093DE60 (FsRtlGetFileSize.c)
 *     NtQueryInformationFile @ 0x140987790 (NtQueryInformationFile.c)
 *     RawReadWriteDeviceControl @ 0x14099D750 (RawReadWriteDeviceControl.c)
 *     IopInvalidateVolumesForDevice @ 0x1409A05FC (IopInvalidateVolumesForDevice.c)
 *     WmipForwardWmiIrp @ 0x1409B5F64 (WmipForwardWmiIrp.c)
 *     CmpFileFlushAndPurge @ 0x1409F83E8 (CmpFileFlushAndPurge.c)
 *     FsRtlQueryKernelEaFile @ 0x140A00250 (FsRtlQueryKernelEaFile.c)
 *     FsRtlSetKernelEaFile @ 0x140A00480 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140A00640 (FsRtlKernelFsControlFile.c)
 *     IopMountVolume @ 0x140A1F624 (IopMountVolume.c)
 *     IopGetSetObjectId @ 0x140A23CC0 (IopGetSetObjectId.c)
 *     IopGetVolumeId @ 0x140A23DFC (IopGetVolumeId.c)
 *     FsRtlQueryInformationFile @ 0x140A2B210 (FsRtlQueryInformationFile.c)
 *     FsRtlQueryCachedVdl @ 0x140A31320 (FsRtlQueryCachedVdl.c)
 *     PopThermalWorker @ 0x140A3C300 (PopThermalWorker.c)
 *     PnpAsynchronousCall @ 0x140A4B038 (PnpAsynchronousCall.c)
 *     IopCreateArcName @ 0x140A73568 (IopCreateArcName.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140A7DD74 (HalpQueryAcpiRealTimeClock.c)
 *     PopFanWorker @ 0x140A7F6A0 (PopFanWorker.c)
 *     RawQueryFsSizeInfo @ 0x140A84E18 (RawQueryFsSizeInfo.c)
 *     HalpCallWakeAlarmDriver @ 0x140A933D0 (HalpCallWakeAlarmDriver.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140AAC920 (FsRtlGetDirectImageOriginalBase.c)
 *     IoVerifyVolume @ 0x140AB22D0 (IoVerifyVolume.c)
 *     PopBatteryWaitTag @ 0x140AB58B0 (PopBatteryWaitTag.c)
 *     IopFreeBandwidthContract @ 0x140ABF604 (IopFreeBandwidthContract.c)
 *     PopBatteryQueryStatus @ 0x140AC26B4 (PopBatteryQueryStatus.c)
 *     IoShutdownSystem @ 0x140B4374C (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140B439D0 (IopShutdownBaseFileSystems.c)
 *     VfIrpSendSynchronousIrp @ 0x140B7DF20 (VfIrpSendSynchronousIrp.c)
 *     ViFilterDispatchGeneric @ 0x140B8D000 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x140B8D0D0 (ViFilterDispatchPnp.c)
 *     IopCreateArcNamesCd @ 0x140C0AC5C (IopCreateArcNamesCd.c)
 *     IopStoreBootDriveLetter @ 0x140C0C1CC (IopStoreBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140C0C6AC (IopGetBootDiskInformation.c)
 *     SbpAddTransportToInstance @ 0x140C4D6B4 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140C4D8A0 (SbpStartLanman.c)
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     IopPoHandleIrp @ 0x140356BE4 (IopPoHandleIrp.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     IopPerfCallDriver @ 0x1404A068C (IopPerfCallDriver.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PiDaDispatch @ 0x1409FE5F0 (PiDaDispatch.c)
 *     IovCallDriver @ 0x140B97D60 (IovCallDriver.c)
 */

NTSTATUS __stdcall IofCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *v4; // rcx
  __int64 MajorFunction; // rdx
  NTSTATUS (__stdcall *v6)(PDEVICE_OBJECT, PIRP); // r8

  if ( IopDispatchCallDriver )
  {
    if ( IopDispatchCallDriver == 3 )
      return IopPerfCallDriver(DeviceObject, (ULONG_PTR)Irp);
    else
      return IovCallDriver(DeviceObject, (ULONG_PTR)Irp);
  }
  else
  {
    if ( --Irp->CurrentLocation <= 0 )
      KeBugCheckEx(0x35u, (ULONG_PTR)Irp, 0LL, 0LL, 0LL);
    v4 = Irp->Tail.Overlay.CurrentStackLocation - 1;
    Irp->Tail.Overlay.CurrentStackLocation = v4;
    v4->DeviceObject = DeviceObject;
    MajorFunction = v4->MajorFunction;
    if ( (_BYTE)MajorFunction == 22 && (unsigned __int8)(v4->MinorFunction - 2) <= 1u )
    {
      return IopPoHandleIrp(Irp);
    }
    else
    {
      v6 = DeviceObject->DriverObject->MajorFunction[MajorFunction];
      if ( (char *)v6 == (char *)&IopInvalidDeviceRequest )
      {
        Irp->IoStatus.Status = -1073741808;
        IofCompleteRequest(Irp, 0);
        return -1073741808;
      }
      else if ( (char *)v6 == (char *)PiDaDispatch )
      {
        return PiDaDispatch(DeviceObject, Irp);
      }
      else if ( v6 == IofCallDriver )
      {
        return IofCallDriver(DeviceObject, Irp);
      }
      else
      {
        return guard_dispatch_icall_no_overrides(DeviceObject, Irp);
      }
    }
  }
}
