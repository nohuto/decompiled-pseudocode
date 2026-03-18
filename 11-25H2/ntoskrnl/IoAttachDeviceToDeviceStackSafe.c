/*
 * XREFs of IoAttachDeviceToDeviceStackSafe @ 0x1402A1EB0
 * Callers:
 *     IoAttachDevice @ 0x1407079B0 (IoAttachDevice.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1402A1BDC (IopAttachDeviceToDeviceStackSafe.c)
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
