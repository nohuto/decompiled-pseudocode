/*
 * XREFs of CcMdlWriteComplete @ 0x140A6CFD0
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     CcMdlWriteComplete2 @ 0x140461194 (CcMdlWriteComplete2.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall CcMdlWriteComplete(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, PMDL MdlChain)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // r10

  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( !FastIoDispatch
    || FastIoDispatch->SizeOfFastIoDispatch <= 0x98
    || !FastIoDispatch->MdlWriteComplete
    || !(unsigned __int8)guard_dispatch_icall_no_overrides(FileObject, FileOffset, MdlChain, RelatedDeviceObject) )
  {
    CcMdlWriteComplete2((__int64)FileObject, (__int64 *)FileOffset, MdlChain);
  }
}
