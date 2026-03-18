/*
 * XREFs of IoGetRelatedDeviceObject @ 0x140373C70
 * Callers:
 *     CcZeroData @ 0x1402CC9B0 (CcZeroData.c)
 *     FsRtlReleaseFileForModWrite @ 0x140372004 (FsRtlReleaseFileForModWrite.c)
 *     CcSetValidData @ 0x140372324 (CcSetValidData.c)
 *     MiIssueAsynchronousFlush @ 0x1403724FC (MiIssueAsynchronousFlush.c)
 *     IoAsynchronousPageWrite @ 0x14037286C (IoAsynchronousPageWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140372ABC (FsRtlAcquireFileForModWriteEx.c)
 *     MiSynchronousPageWrite @ 0x140372F44 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x1403731E8 (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x1403734C0 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x140373740 (IoPageReadEx.c)
 *     PnpGetRelatedTargetDevice @ 0x1403750B4 (PnpGetRelatedTargetDevice.c)
 *     IopfCompleteRequest @ 0x1403DBB10 (IopfCompleteRequest.c)
 *     FsRtlGetFileExtents @ 0x14057F7E0 (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x14057F950 (FsRtlMdlReadComplete.c)
 *     FsRtlMdlWriteComplete @ 0x14070A440 (FsRtlMdlWriteComplete.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14070CF48 (FsRtlIssueFileNotificationFsctl.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1407129A0 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x1407132C0 (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x140713AB0 (IoAttachDevice.c)
 *     IoSetInformation @ 0x140714820 (IoSetInformation.c)
 *     NtQueryQuotaInformationFile @ 0x140717C10 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140718380 (NtSetVolumeInformationFile.c)
 *     PiPagePathSetState @ 0x140722960 (PiPagePathSetState.c)
 *     PopGetPolicyDeviceObject @ 0x14075A584 (PopGetPolicyDeviceObject.c)
 *     RawSetInformation @ 0x14077CC48 (RawSetInformation.c)
 *     SmKmIsVolumeIoPossible @ 0x140799CF0 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x14079A678 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x14079B448 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x14079E410 (SmpUtilsGetControlDevice.c)
 *     MiCreatePagingFile @ 0x1407EE364 (MiCreatePagingFile.c)
 *     VhdiMountVhdFile @ 0x14082A068 (VhdiMountVhdFile.c)
 *     IopDeleteFile @ 0x140841DB0 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140842070 (IopCloseFile.c)
 *     IopGetSetSecurityObject @ 0x1408796F0 (IopGetSetSecurityObject.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     IopReadFile @ 0x1408C0610 (IopReadFile.c)
 *     IopXxxControlFile @ 0x1408C1970 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x1408C48F0 (BuildQueryDirectoryIrp.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140942350 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlGetFileSize @ 0x140942760 (FsRtlGetFileSize.c)
 *     FsRtlReleaseFile @ 0x140943180 (FsRtlReleaseFile.c)
 *     FsRtlSetFileSize @ 0x14094588C (FsRtlSetFileSize.c)
 *     IoGetDeviceObjectPointer @ 0x140967A30 (IoGetDeviceObjectPointer.c)
 *     IopQueryNameInternal @ 0x140968330 (IopQueryNameInternal.c)
 *     IopQueryXxxInformation @ 0x14096A530 (IopQueryXxxInformation.c)
 *     IopOpenLinkOrRenameTarget @ 0x14096C6C4 (IopOpenLinkOrRenameTarget.c)
 *     IopGetBasicInformationFile @ 0x14096DFD0 (IopGetBasicInformationFile.c)
 *     IopGetFileInformation @ 0x14096E140 (IopGetFileInformation.c)
 *     IopFlushBuffersFile @ 0x14096E4A4 (IopFlushBuffersFile.c)
 *     NtQueryEaFile @ 0x14096E890 (NtQueryEaFile.c)
 *     NtQueryVolumeInformationFile @ 0x14096EFA0 (NtQueryVolumeInformationFile.c)
 *     NtQueryInformationFile @ 0x14096F610 (NtQueryInformationFile.c)
 *     NtUnlockFile @ 0x140972480 (NtUnlockFile.c)
 *     CmpFileFlushAndPurge @ 0x140981014 (CmpFileFlushAndPurge.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409D1DE0 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409D2090 (FsRtlReleaseFileForCcFlush.c)
 *     NtLockFile @ 0x1409D2BE0 (NtLockFile.c)
 *     IopParseFile @ 0x1409F4690 (IopParseFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1409FD030 (FsRtlQueryKernelEaFile.c)
 *     FsRtlSetKernelEaFile @ 0x1409FD260 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1409FD420 (FsRtlKernelFsControlFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140A0BC30 (NtNotifyChangeDirectoryFileEx.c)
 *     IopGetSetObjectId @ 0x140A2D300 (IopGetSetObjectId.c)
 *     IopGetVolumeId @ 0x140A2D43C (IopGetVolumeId.c)
 *     FsRtlQueryInformationFile @ 0x140A2EF10 (FsRtlQueryInformationFile.c)
 *     FsRtlQueryCachedVdl @ 0x140A371D0 (FsRtlQueryCachedVdl.c)
 *     CcMdlReadComplete @ 0x140A3C810 (CcMdlReadComplete.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140A5CD70 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x140A5CE20 (FsRtlPrepareMdlWrite.c)
 *     NtSetEaFile @ 0x140A60FA0 (NtSetEaFile.c)
 *     FsRtlMdlReadEx @ 0x140A65BD0 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x140A65CD0 (FsRtlMdlRead.c)
 *     CcMdlWriteComplete @ 0x140A6CFD0 (CcMdlWriteComplete.c)
 *     IopReadFileScatter @ 0x140A8E968 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A958BC (IopWriteFileGather.c)
 *     WmipGetFilePDO @ 0x140A97574 (WmipGetFilePDO.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140AB1B90 (FsRtlGetDirectImageOriginalBase.c)
 *     IopFreeBandwidthContract @ 0x140AC2D5C (IopFreeBandwidthContract.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetRelatedDeviceObject(PFILE_OBJECT FileObject)
{
  PVPB Vpb; // rax
  PVPB v2; // rax
  PDEVICE_OBJECT result; // rax
  PVOID FileObjectExtension; // rdx
  struct _DEVICE_OBJECT **v5; // rcx
  struct _DEVICE_OBJECT *i; // rcx
  struct _DEVICE_OBJECT *v7; // rdx
  PDEVICE_OBJECT v8; // rcx

  Vpb = FileObject->Vpb;
  if ( (!Vpb || (result = Vpb->DeviceObject) == 0LL)
    && ((FileObject->Flags & 0x800) != 0
     || (v2 = FileObject->DeviceObject->Vpb) == 0LL
     || (result = v2->DeviceObject) == 0LL) )
  {
    result = FileObject->DeviceObject;
  }
  if ( result->AttachedDevice )
  {
    FileObjectExtension = FileObject->FileObjectExtension;
    if ( FileObjectExtension
      && (v5 = (struct _DEVICE_OBJECT **)*((_QWORD *)FileObjectExtension + 2)) != 0LL
      && (v7 = *v5) != 0LL )
    {
      v8 = result;
      while ( v8 != v7 )
      {
        v8 = v8->AttachedDevice;
        if ( !v8 )
          goto LABEL_8;
      }
      return v7;
    }
    else
    {
LABEL_8:
      for ( i = result->AttachedDevice; i; i = i->AttachedDevice )
        result = i;
    }
  }
  return result;
}
