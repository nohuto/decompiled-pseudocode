/*
 * XREFs of IoStartNextPacket @ 0x140456E30
 * Callers:
 *     DifIoStartNextPacketWrapper @ 0x14061F2F0 (DifIoStartNextPacketWrapper.c)
 * Callees:
 *     IopStartNextPacketByKeyEx @ 0x140456E74 (IopStartNextPacketByKeyEx.c)
 *     IopStartNextPacket @ 0x140456F34 (IopStartNextPacket.c)
 */

void __stdcall IoStartNextPacket(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    IopStartNextPacketByKeyEx(DeviceObject, 0LL, Cancelable != 0 ? 160 : 32);
  else
    IopStartNextPacket(DeviceObject, Cancelable);
}
