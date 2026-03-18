/*
 * XREFs of IoGetBaseFileSystemDeviceObject @ 0x14035C100
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x14035B210 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14035BCBC (FsRtlAcquireFileForModWriteEx.c)
 *     IopSynchronousServiceTail @ 0x1408C5420 (IopSynchronousServiceTail.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14093DA50 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFile @ 0x14093E880 (FsRtlReleaseFile.c)
 *     PnpHandleProcessWalkWorker @ 0x1409867D0 (PnpHandleProcessWalkWorker.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409CEE20 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409CF0D0 (FsRtlReleaseFileForCcFlush.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetBaseFileSystemDeviceObject(PFILE_OBJECT FileObject)
{
  PVPB Vpb; // rax
  PDEVICE_OBJECT result; // rax
  PVPB v3; // rdx

  Vpb = FileObject->Vpb;
  if ( !Vpb || (result = Vpb->DeviceObject) == 0LL )
  {
    if ( (FileObject->Flags & 0x800) != 0 )
      return FileObject->DeviceObject;
    v3 = FileObject->DeviceObject->Vpb;
    if ( !v3 )
      return FileObject->DeviceObject;
    result = v3->DeviceObject;
    if ( !result )
      return FileObject->DeviceObject;
  }
  return result;
}
