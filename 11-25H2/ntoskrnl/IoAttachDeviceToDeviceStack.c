/*
 * XREFs of IoAttachDeviceToDeviceStack @ 0x1402A1FB0
 * Callers:
 *     HalpAddDevice @ 0x1406F2AF0 (HalpAddDevice.c)
 *     VfFilterAttach @ 0x140B8CDB0 (VfFilterAttach.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1402A1BDC (IopAttachDeviceToDeviceStackSafe.c)
 */

PDEVICE_OBJECT __stdcall IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return IopAttachDeviceToDeviceStackSafe((__int64)SourceDevice, TargetDevice, 0LL);
}
