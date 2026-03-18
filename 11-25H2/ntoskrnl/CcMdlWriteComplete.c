/*
 * XREFs of CcMdlWriteComplete @ 0x140A6AA20
 * Callers:
 *     <none>
 * Callees:
 *     CcMdlWriteComplete2 @ 0x1402D2A60 (CcMdlWriteComplete2.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall CcMdlWriteComplete(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, PMDL MdlChain)
{
  PFAST_IO_DISPATCH FastIoDispatch; // r10

  FastIoDispatch = IoGetRelatedDeviceObject(FileObject)->DriverObject->FastIoDispatch;
  if ( !FastIoDispatch
    || FastIoDispatch->SizeOfFastIoDispatch <= 0x98
    || !FastIoDispatch->MdlWriteComplete
    || !(unsigned __int8)guard_dispatch_icall_no_overrides(FileObject) )
  {
    CcMdlWriteComplete2((__int64)FileObject, (__int64 *)FileOffset, MdlChain);
  }
}
