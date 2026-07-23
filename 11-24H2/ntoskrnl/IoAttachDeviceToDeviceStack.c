/*
 * XREFs of IoAttachDeviceToDeviceStack @ 0x1403B3CB0
 * Callers:
 *     HalpAddDevice @ 0x1406FC520 (HalpAddDevice.c)
 *     VfFilterAttach @ 0x140B9ED90 (VfFilterAttach.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1403B38E4 (IopAttachDeviceToDeviceStackSafe.c)
 */

PDEVICE_OBJECT __stdcall IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return IopAttachDeviceToDeviceStackSafe((__int64)SourceDevice, TargetDevice, 0LL);
}
