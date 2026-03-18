/*
 * XREFs of IoAttachDeviceToDeviceStack @ 0x1403C50F0
 * Callers:
 *     HalpAddDevice @ 0x1406FE8E0 (HalpAddDevice.c)
 *     VfFilterAttach @ 0x140B9CD90 (VfFilterAttach.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1403C4D24 (IopAttachDeviceToDeviceStackSafe.c)
 */

PDEVICE_OBJECT __stdcall IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return IopAttachDeviceToDeviceStackSafe((__int64)SourceDevice, TargetDevice, 0LL);
}
