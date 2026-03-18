/*
 * XREFs of IoStartNextPacket @ 0x1403916D0
 * Callers:
 *     DifIoStartNextPacketWrapper @ 0x14062B2B0 (DifIoStartNextPacketWrapper.c)
 * Callees:
 *     IopStartNextPacket @ 0x140391548 (IopStartNextPacket.c)
 *     IopStartNextPacketByKeyEx @ 0x140391714 (IopStartNextPacketByKeyEx.c)
 */

void __stdcall IoStartNextPacket(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    IopStartNextPacketByKeyEx(DeviceObject, 0LL, Cancelable != 0 ? 160 : 32);
  else
    IopStartNextPacket((__int64)DeviceObject, Cancelable);
}
