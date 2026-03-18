/*
 * XREFs of FsRtlPrepareMdlWrite @ 0x140A5ABA0
 * Callers:
 *     FsRtlPrepareMdlWriteEx @ 0x140A5AAF0 (FsRtlPrepareMdlWriteEx.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall FsRtlPrepareMdlWrite(struct _FILE_OBJECT *a1)
{
  PFAST_IO_DISPATCH FastIoDispatch; // r11

  FastIoDispatch = IoGetRelatedDeviceObject(a1)->DriverObject->FastIoDispatch;
  if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch > 0x90 && FastIoDispatch->PrepareMdlWrite )
    return guard_dispatch_icall_no_overrides(a1);
  else
    return 0;
}
