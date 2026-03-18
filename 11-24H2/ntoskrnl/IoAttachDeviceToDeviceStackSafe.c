/*
 * XREFs of IoAttachDeviceToDeviceStackSafe @ 0x1403C4FF0
 * Callers:
 *     IoAttachDevice @ 0x140713AB0 (IoAttachDevice.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1403C4D24 (IopAttachDeviceToDeviceStackSafe.c)
 */

NTSTATUS __stdcall IoAttachDeviceToDeviceStackSafe(
        PDEVICE_OBJECT SourceDevice,
        PDEVICE_OBJECT TargetDevice,
        PDEVICE_OBJECT *AttachedToDeviceObject)
{
  return IopAttachDeviceToDeviceStackSafe((__int64)SourceDevice, TargetDevice, AttachedToDeviceObject) == 0LL
       ? 0xC000000E
       : 0;
}
