/*
 * XREFs of FsRtlMdlReadComplete @ 0x14057C630
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall FsRtlMdlReadComplete(struct _FILE_OBJECT *a1)
{
  PFAST_IO_DISPATCH FastIoDispatch; // r9

  FastIoDispatch = IoGetRelatedDeviceObject(a1)->DriverObject->FastIoDispatch;
  if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch > 0x88 && FastIoDispatch->MdlReadComplete )
    return guard_dispatch_icall_no_overrides(a1);
  else
    return 0;
}
