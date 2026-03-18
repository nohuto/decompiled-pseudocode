/*
 * XREFs of FsRtlMdlWriteComplete @ 0x1406FE560
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall FsRtlMdlWriteComplete(struct _FILE_OBJECT *a1)
{
  PFAST_IO_DISPATCH FastIoDispatch; // r10

  FastIoDispatch = IoGetRelatedDeviceObject(a1)->DriverObject->FastIoDispatch;
  if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch > 0x98 && FastIoDispatch->MdlWriteComplete )
    return guard_dispatch_icall_no_overrides(a1);
  else
    return 0;
}
