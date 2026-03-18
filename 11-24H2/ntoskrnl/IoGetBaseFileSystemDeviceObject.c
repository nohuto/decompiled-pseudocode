/*
 * XREFs of IoGetBaseFileSystemDeviceObject @ 0x140372F00
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x140372004 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140372ABC (FsRtlAcquireFileForModWriteEx.c)
 *     IopSynchronousServiceTail @ 0x1408C3300 (IopSynchronousServiceTail.c)
 *     PnpHandleProcessWalkWorker @ 0x1408EFCA0 (PnpHandleProcessWalkWorker.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140942350 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFile @ 0x140943180 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409D1DE0 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409D2090 (FsRtlReleaseFileForCcFlush.c)
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
