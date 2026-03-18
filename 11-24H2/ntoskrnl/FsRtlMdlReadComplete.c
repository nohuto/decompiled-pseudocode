/*
 * XREFs of FsRtlMdlReadComplete @ 0x14057F950
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall FsRtlMdlReadComplete(struct _FILE_OBJECT *a1, __int64 a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // r9

  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch > 0x88 && FastIoDispatch->MdlReadComplete )
    return guard_dispatch_icall_no_overrides(a1, a2, RelatedDeviceObject, FastIoDispatch);
  else
    return 0;
}
