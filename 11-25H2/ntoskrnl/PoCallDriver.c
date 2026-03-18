/*
 * XREFs of PoCallDriver @ 0x14035F1F0
 * Callers:
 *     IoCancelFileOpen @ 0x1406EE040 (IoCancelFileOpen.c)
 *     ViFilterDispatchPower @ 0x140B8D290 (ViFilterDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 */

NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
