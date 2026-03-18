/*
 * XREFs of RawShutdown @ 0x14076D710
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     IoDeleteDevice @ 0x1402FDA50 (IoDeleteDevice.c)
 *     IoUnregisterFileSystem @ 0x140708C40 (IoUnregisterFileSystem.c)
 *     RawScanDeletedList @ 0x14099F1A0 (RawScanDeletedList.c)
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
