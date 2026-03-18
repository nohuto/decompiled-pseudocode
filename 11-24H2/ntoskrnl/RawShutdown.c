/*
 * XREFs of RawShutdown @ 0x14077CA40
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     IoDeleteDevice @ 0x1403F1B00 (IoDeleteDevice.c)
 *     IoUnregisterFileSystem @ 0x140714D40 (IoUnregisterFileSystem.c)
 *     RawScanDeletedList @ 0x1409A4080 (RawScanDeletedList.c)
 */

__int64 __fastcall RawShutdown(__int64 a1, IRP *a2)
{
  RawScanDeletedList();
  IoUnregisterFileSystem(RawDeviceDiskObject);
  IoUnregisterFileSystem(RawDeviceCdRomObject);
  IoUnregisterFileSystem(RawDeviceTapeObject);
  IoDeleteDevice(RawDeviceTapeObject);
  IoDeleteDevice(RawDeviceCdRomObject);
  IoDeleteDevice(RawDeviceDiskObject);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 1);
  return 0LL;
}
