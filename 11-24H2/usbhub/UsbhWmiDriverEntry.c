/*
 * XREFs of UsbhWmiDriverEntry @ 0x140055630
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140061040 (memmove.c)
 */

__int64 __fastcall UsbhWmiDriverEntry(__int64 a1, const void **a2)
{
  __int64 v3; // rdx
  void *Pool2; // rax
  __int64 result; // rax

  v3 = (unsigned __int16)(*(_WORD *)a2 + 2);
  word_14006F502 = v3;
  UsbhRegistryPath = *(_WORD *)a2;
  Pool2 = (void *)ExAllocatePool2(256LL, v3, 1112885333LL);
  P = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, a2[1], *(unsigned __int16 *)a2);
  dword_14006F4AC = 0;
  dword_14006F4BC = 0;
  dword_14006F4CC = 0;
  dword_14006F4DC = 0;
  dword_14006F4EC = 0;
  dword_14006F52C = 0;
  dword_14006F53C = 0;
  dword_14006F54C = 0;
  USB_WmiGuidList = (__int64)&GUID_USB_WMI_STD_NOTIFICATION;
  qword_14006F4B0 = (__int64)&GUID_USB_WMI_STD_NOTIFICATION;
  qword_14006F4C0 = (__int64)&GUID_POWER_DEVICE_ENABLE;
  qword_14006F4D0 = (__int64)&GUID_POWER_DEVICE_WAKE_ENABLE;
  qword_14006F4F0 = (__int64)&GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION;
  USB_PortWmiGuidList = (__int64)&MSDeviceUI_FirmwareRevision_GUID;
  qword_14006F530 = (__int64)&GUID_USB_WMI_DEVICE_PERF_INFO;
  result = 0LL;
  dword_14006F4A8 = 1;
  dword_14006F4B8 = 1;
  dword_14006F4C8 = 1;
  dword_14006F4D8 = 1;
  qword_14006F4E0 = (__int64)&GUID_USB_WMI_NODE_INFO;
  dword_14006F4E8 = 1;
  dword_14006F4F8 = 1;
  dword_14006F4FC = 64;
  dword_14006F528 = 1;
  dword_14006F538 = 1;
  qword_14006F540 = (__int64)&GUID_USB_WMI_NODE_INFO;
  dword_14006F548 = 1;
  UsbhWmiInit = 1;
  return result;
}
