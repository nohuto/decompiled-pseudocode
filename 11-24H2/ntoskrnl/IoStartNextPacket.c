/*
 * XREFs of IoStartNextPacket @ 0x14038B000
 * Callers:
 *     DifIoStartNextPacketWrapper @ 0x140629870 (DifIoStartNextPacketWrapper.c)
 * Callees:
 *     IopStartNextPacket @ 0x14038AE78 (IopStartNextPacket.c)
 *     IopStartNextPacketByKeyEx @ 0x14038B044 (IopStartNextPacketByKeyEx.c)
 */

void __stdcall IoStartNextPacket(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    IopStartNextPacketByKeyEx(DeviceObject, 0LL, Cancelable != 0 ? 160 : 32);
  else
    IopStartNextPacket((__int64)DeviceObject, Cancelable);
}
