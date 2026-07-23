/*
 * XREFs of PoCallDriver @ 0x14025DF60
 * Callers:
 *     IoCancelFileOpen @ 0x1406F7A40 (IoCancelFileOpen.c)
 *     ViFilterDispatchPower @ 0x140B9F270 (ViFilterDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 */

NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
