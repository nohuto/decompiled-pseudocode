/*
 * XREFs of IoGetRelatedDeviceObject @ 0x14025C530
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x14025A8C4 (FsRtlReleaseFileForModWrite.c)
 *     CcSetValidData @ 0x14025ABE4 (CcSetValidData.c)
 *     MiIssueAsynchronousFlush @ 0x14025ADBC (MiIssueAsynchronousFlush.c)
 *     IoAsynchronousPageWrite @ 0x14025B12C (IoAsynchronousPageWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14025B37C (FsRtlAcquireFileForModWriteEx.c)
 *     MiSynchronousPageWrite @ 0x14025B804 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14025BAA8 (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x14025BD80 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14025C000 (IoPageReadEx.c)
 *     PnpGetRelatedTargetDevice @ 0x14025D974 (PnpGetRelatedTargetDevice.c)
 *     IopfCompleteRequest @ 0x1403CCDE0 (IopfCompleteRequest.c)
 *     CcZeroData @ 0x14040BA30 (CcZeroData.c)
 *     FsRtlGetFileExtents @ 0x14057CC20 (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x14057CD90 (FsRtlMdlReadComplete.c)
 *     FsRtlMdlWriteComplete @ 0x140708000 (FsRtlMdlWriteComplete.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14070AAE8 (FsRtlIssueFileNotificationFsctl.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140710530 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x140710E50 (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x140711640 (IoAttachDevice.c)
 *     IoSetInformation @ 0x1407123B0 (IoSetInformation.c)
 *     NtQueryQuotaInformationFile @ 0x1407157A0 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140715F10 (NtSetVolumeInformationFile.c)
 *     PiPagePathSetState @ 0x1407204F0 (PiPagePathSetState.c)
 *     PopGetPolicyDeviceObject @ 0x140758C74 (PopGetPolicyDeviceObject.c)
 *     RawSetInformation @ 0x14077CAF8 (RawSetInformation.c)
 *     SmKmIsVolumeIoPossible @ 0x140799E00 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x14079A788 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x14079B558 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x14079E520 (SmpUtilsGetControlDevice.c)
 *     MiCreatePagingFile @ 0x1407EE934 (MiCreatePagingFile.c)
 *     VhdiMountVhdFile @ 0x14082A898 (VhdiMountVhdFile.c)
 *     IopDeleteFile @ 0x14083E070 (IopDeleteFile.c)
 *     IopCloseFile @ 0x14083E330 (IopCloseFile.c)
 *     IopGetSetSecurityObject @ 0x14087DA20 (IopGetSetSecurityObject.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     IopReadFile @ 0x1408BDFD0 (IopReadFile.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x1408C22B0 (BuildQueryDirectoryIrp.c)
 *     IoGetDeviceObjectPointer @ 0x1409504C0 (IoGetDeviceObjectPointer.c)
 *     IopQueryNameInternal @ 0x140950DC0 (IopQueryNameInternal.c)
 *     IopQueryXxxInformation @ 0x140952FC0 (IopQueryXxxInformation.c)
 *     IopOpenLinkOrRenameTarget @ 0x140955124 (IopOpenLinkOrRenameTarget.c)
 *     IopGetBasicInformationFile @ 0x1409567DC (IopGetBasicInformationFile.c)
 *     NtQueryEaFile @ 0x140956950 (NtQueryEaFile.c)
 *     NtQueryVolumeInformationFile @ 0x140957060 (NtQueryVolumeInformationFile.c)
 *     IopFlushBuffersFile @ 0x140957794 (IopFlushBuffersFile.c)
 *     IopGetFileInformation @ 0x140957CC0 (IopGetFileInformation.c)
 *     NtQueryInformationFile @ 0x140957E20 (NtQueryInformationFile.c)
 *     NtUnlockFile @ 0x14095AC90 (NtUnlockFile.c)
 *     CmpFileFlushAndPurge @ 0x140969824 (CmpFileFlushAndPurge.c)
 *     FsRtlSetFileSize @ 0x14098A000 (FsRtlSetFileSize.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14098C5C0 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlGetFileSize @ 0x14098C9D0 (FsRtlGetFileSize.c)
 *     FsRtlReleaseFile @ 0x14098D3F0 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409C1C10 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409C1EC0 (FsRtlReleaseFileForCcFlush.c)
 *     NtLockFile @ 0x1409C2A10 (NtLockFile.c)
 *     IopParseFile @ 0x1409E89F0 (IopParseFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1409F5D70 (FsRtlQueryKernelEaFile.c)
 *     FsRtlSetKernelEaFile @ 0x1409F5FA0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1409F6160 (FsRtlKernelFsControlFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140A0AE70 (NtNotifyChangeDirectoryFileEx.c)
 *     IopGetSetObjectId @ 0x140A21D40 (IopGetSetObjectId.c)
 *     IopGetVolumeId @ 0x140A21E7C (IopGetVolumeId.c)
 *     FsRtlQueryInformationFile @ 0x140A23950 (FsRtlQueryInformationFile.c)
 *     FsRtlQueryCachedVdl @ 0x140A2C020 (FsRtlQueryCachedVdl.c)
 *     CcMdlReadComplete @ 0x140A31FF0 (CcMdlReadComplete.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140A54590 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x140A54640 (FsRtlPrepareMdlWrite.c)
 *     NtSetEaFile @ 0x140A59680 (NtSetEaFile.c)
 *     FsRtlMdlReadEx @ 0x140A5E3A0 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x140A5E4A0 (FsRtlMdlRead.c)
 *     CcMdlWriteComplete @ 0x140A66690 (CcMdlWriteComplete.c)
 *     IopReadFileScatter @ 0x140A8AFD8 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A920EC (IopWriteFileGather.c)
 *     WmipGetFilePDO @ 0x140A93DA4 (WmipGetFilePDO.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140AACB00 (FsRtlGetDirectImageOriginalBase.c)
 *     IopFreeBandwidthContract @ 0x140ABE044 (IopFreeBandwidthContract.c)
 *     NtCopyFileChunk @ 0x140ABE950 (NtCopyFileChunk.c)
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
