/*
 * XREFs of IoStartNextPacketByKey @ 0x140596BF0
 * Callers:
 *     <none>
 * Callees:
 *     IopStartNextPacketByKeyEx @ 0x140391714 (IopStartNextPacketByKeyEx.c)
 *     IopStartNextPacketByKey @ 0x14039313C (IopStartNextPacketByKey.c)
 */

void __stdcall IoStartNextPacketByKey(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable, ULONG Key)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    IopStartNextPacketByKeyEx((__int64)DeviceObject, Key, Cancelable != 0 ? 192 : 64);
  else
    IopStartNextPacketByKey((__int64)DeviceObject, Cancelable, Key);
}
