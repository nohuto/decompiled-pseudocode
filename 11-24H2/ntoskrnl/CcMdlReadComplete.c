/*
 * XREFs of CcMdlReadComplete @ 0x140A3C810
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CcMdlReadComplete2 @ 0x140A3C878 (CcMdlReadComplete2.c)
 */

void __stdcall CcMdlReadComplete(PFILE_OBJECT FileObject, PMDL MdlChain)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rcx
  struct _DRIVER_OBJECT *DriverObject; // r8
  PFAST_IO_DISPATCH FastIoDispatch; // r9

  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DriverObject = RelatedDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  if ( !FastIoDispatch
    || FastIoDispatch->SizeOfFastIoDispatch <= 0x98
    || !FastIoDispatch->MdlReadComplete
    || !(unsigned __int8)guard_dispatch_icall_no_overrides(FileObject, MdlChain, RelatedDeviceObject, FastIoDispatch) )
  {
    CcMdlReadComplete2(RelatedDeviceObject, MdlChain, DriverObject);
  }
}
