/*
 * XREFs of PoCallDriver @ 0x1403756A0
 * Callers:
 *     IoCancelFileOpen @ 0x1406F9E00 (IoCancelFileOpen.c)
 *     ViFilterDispatchPower @ 0x140B9D270 (ViFilterDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 */

NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
