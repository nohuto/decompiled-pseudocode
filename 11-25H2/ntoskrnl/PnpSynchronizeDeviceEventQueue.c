/*
 * XREFs of PnpSynchronizeDeviceEventQueue @ 0x140A88290
 * Callers:
 *     PipProcessDevNodeTree @ 0x1408355F8 (PipProcessDevNodeTree.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140A7BD60 (PnpSurpriseFailUnsafeDmaDevices.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     PnpCreateDeviceEventEntry @ 0x14096A54C (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x14096A57C (PnpInsertEventInQueue.c)
 */

NTSTATUS PnpSynchronizeDeviceEventQueue()
{
  __int64 DeviceEventEntry; // rax
  NTSTATUS result; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  DeviceEventEntry = PnpCreateDeviceEventEntry();
  if ( !DeviceEventEntry )
    return -1073741670;
  *(_QWORD *)(DeviceEventEntry + 24) = &Event;
  *(_QWORD *)(DeviceEventEntry + 144) = &v3;
  *(_DWORD *)(DeviceEventEntry + 136) = 1;
  *(GUID *)(DeviceEventEntry + 120) = GUID_DEVICE_NOOP;
  *(_DWORD *)(DeviceEventEntry + 156) = 80;
  result = PnpInsertEventInQueue(DeviceEventEntry);
  if ( result >= 0 )
    return KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  return result;
}
