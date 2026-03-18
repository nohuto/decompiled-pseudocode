/*
 * XREFs of FsRtlMdlWriteComplete @ 0x14070A440
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall FsRtlMdlWriteComplete(struct _FILE_OBJECT *a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // r10

  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch > 0x98 && FastIoDispatch->MdlWriteComplete )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, RelatedDeviceObject);
  else
    return 0;
}
