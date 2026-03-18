/*
 * XREFs of FsRtlMdlRead @ 0x140A65CD0
 * Callers:
 *     FsRtlMdlReadEx @ 0x140A65BD0 (FsRtlMdlReadEx.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall FsRtlMdlRead(struct _FILE_OBJECT *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  PFAST_IO_DISPATCH FastIoDispatch; // r11

  FastIoDispatch = IoGetRelatedDeviceObject(a1)->DriverObject->FastIoDispatch;
  if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch > 0x80 && FastIoDispatch->MdlRead )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  else
    return 0;
}
