/*
 * XREFs of USBDeviceSurpriseRemove @ 0x14002D830
 * Callers:
 *     <none>
 * Callees:
 *     USBDeviceStop @ 0x140040000 (USBDeviceStop.c)
 */

__int64 USBDeviceSurpriseRemove()
{
  return USBDeviceStop();
}
