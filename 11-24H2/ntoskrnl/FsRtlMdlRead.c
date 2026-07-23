/*
 * XREFs of FsRtlMdlRead @ 0x140A5E4A0
 * Callers:
 *     FsRtlMdlReadEx @ 0x140A5E3A0 (FsRtlMdlReadEx.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall FsRtlMdlRead(struct _FILE_OBJECT *a1, __int64 a2)
{
  PFAST_IO_DISPATCH FastIoDispatch; // r11

  FastIoDispatch = IoGetRelatedDeviceObject(a1)->DriverObject->FastIoDispatch;
  if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch > 0x80 && FastIoDispatch->MdlRead )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 0;
}
