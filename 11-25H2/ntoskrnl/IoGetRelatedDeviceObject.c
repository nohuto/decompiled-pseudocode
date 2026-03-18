/*
 * XREFs of IoGetRelatedDeviceObject @ 0x14035CFA0
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x14035B210 (FsRtlReleaseFileForModWrite.c)
 *     CcSetValidData @ 0x14035B530 (CcSetValidData.c)
 *     MiIssueAsynchronousFlush @ 0x14035B6FC (MiIssueAsynchronousFlush.c)
 *     IoAsynchronousPageWrite @ 0x14035BA6C (IoAsynchronousPageWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14035BCBC (FsRtlAcquireFileForModWriteEx.c)
 *     MiSynchronousPageWrite @ 0x14035C250 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14035C508 (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x14035C7E0 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14035CA60 (IoPageReadEx.c)
 *     PnpGetRelatedTargetDevice @ 0x14035E4A8 (PnpGetRelatedTargetDevice.c)
 *     CcZeroData @ 0x1403A6B60 (CcZeroData.c)
 *     FsRtlGetFileExtents @ 0x14057C4C0 (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x14057C630 (FsRtlMdlReadComplete.c)
 *     FsRtlMdlWriteComplete @ 0x1406FE560 (FsRtlMdlWriteComplete.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140701068 (FsRtlIssueFileNotificationFsctl.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1407068A0 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x1407071C0 (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x1407079B0 (IoAttachDevice.c)
 *     IoSetInformation @ 0x140708720 (IoSetInformation.c)
 *     NtQueryQuotaInformationFile @ 0x14070BB10 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x14070C280 (NtSetVolumeInformationFile.c)
 *     PiPagePathSetState @ 0x140716860 (PiPagePathSetState.c)
 *     PopGetPolicyDeviceObject @ 0x14074DFB0 (PopGetPolicyDeviceObject.c)
 *     RawSetInformation @ 0x14076D918 (RawSetInformation.c)
 *     SmKmIsVolumeIoPossible @ 0x14078A928 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x14078B2B0 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x14078C080 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x14078F050 (SmpUtilsGetControlDevice.c)
 *     MiCreatePagingFile @ 0x1407DE4C4 (MiCreatePagingFile.c)
 *     VhdiMountVhdFile @ 0x14081A2D0 (VhdiMountVhdFile.c)
 *     IoGetDeviceObjectPointer @ 0x140822F90 (IoGetDeviceObjectPointer.c)
 *     IopDeleteFile @ 0x140844B30 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140845AF0 (IopCloseFile.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     IopGetSetSecurityObject @ 0x14086F330 (IopGetSetSecurityObject.c)
 *     IopQueryNameInternal @ 0x1408BF6D0 (IopQueryNameInternal.c)
 *     IopQueryXxxInformation @ 0x1408C1900 (IopQueryXxxInformation.c)
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x1408C6A20 (BuildQueryDirectoryIrp.c)
 *     IopGetFileInformation @ 0x1408ECAD0 (IopGetFileInformation.c)
 *     IopGetBasicInformationFile @ 0x1408ED534 (IopGetBasicInformationFile.c)
 *     IopOpenLinkOrRenameTarget @ 0x1408ED610 (IopOpenLinkOrRenameTarget.c)
 *     NtQueryEaFile @ 0x140935870 (NtQueryEaFile.c)
 *     IopReadFile @ 0x140935F80 (IopReadFile.c)
 *     NtQueryVolumeInformationFile @ 0x140936F60 (NtQueryVolumeInformationFile.c)
 *     IopFlushBuffersFile @ 0x140938E14 (IopFlushBuffersFile.c)
 *     FsRtlSetFileSize @ 0x14093A4A0 (FsRtlSetFileSize.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14093DA50 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlGetFileSize @ 0x14093DE60 (FsRtlGetFileSize.c)
 *     FsRtlReleaseFile @ 0x14093E880 (FsRtlReleaseFile.c)
 *     NtLockFile @ 0x1409869D0 (NtLockFile.c)
 *     NtQueryInformationFile @ 0x140987790 (NtQueryInformationFile.c)
 *     NtUnlockFile @ 0x140989F40 (NtUnlockFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14098A4B0 (NtNotifyChangeDirectoryFileEx.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409CEE20 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409CF0D0 (FsRtlReleaseFileForCcFlush.c)
 *     IopParseFile @ 0x1409F4AF0 (IopParseFile.c)
 *     CmpFileFlushAndPurge @ 0x1409F83E8 (CmpFileFlushAndPurge.c)
 *     FsRtlQueryKernelEaFile @ 0x140A00250 (FsRtlQueryKernelEaFile.c)
 *     FsRtlSetKernelEaFile @ 0x140A00480 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140A00640 (FsRtlKernelFsControlFile.c)
 *     IopGetSetObjectId @ 0x140A23CC0 (IopGetSetObjectId.c)
 *     IopGetVolumeId @ 0x140A23DFC (IopGetVolumeId.c)
 *     FsRtlQueryInformationFile @ 0x140A2B210 (FsRtlQueryInformationFile.c)
 *     FsRtlQueryCachedVdl @ 0x140A31320 (FsRtlQueryCachedVdl.c)
 *     CcMdlReadComplete @ 0x140A35CB0 (CcMdlReadComplete.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140A5AAF0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x140A5ABA0 (FsRtlPrepareMdlWrite.c)
 *     NtSetEaFile @ 0x140A5F1F0 (NtSetEaFile.c)
 *     FsRtlMdlReadEx @ 0x140A636B0 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x140A637B0 (FsRtlMdlRead.c)
 *     CcMdlWriteComplete @ 0x140A6AA20 (CcMdlWriteComplete.c)
 *     IopReadFileScatter @ 0x140A89998 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A9170C (IopWriteFileGather.c)
 *     WmipGetFilePDO @ 0x140A93244 (WmipGetFilePDO.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140AAC920 (FsRtlGetDirectImageOriginalBase.c)
 *     IopFreeBandwidthContract @ 0x140ABF604 (IopFreeBandwidthContract.c)
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
