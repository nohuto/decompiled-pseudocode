/*
 * XREFs of UsbhEnumFailurePopup @ 0x1C004A790
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C0048DC4 (UsbhBuildWmiConnectionNotification.c)
 */

void __fastcall UsbhEnumFailurePopup(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rcx
  _DWORD *EventData; // rax
  __int64 v7; // rbx
  NTSTATUS v8; // eax

  v4 = FdoExt((__int64)DeviceObject);
  v5 = *(unsigned __int16 *)(a2 + 20);
  if ( (*(_DWORD *)(*((_QWORD *)v4 + 377) + 4 * v5) & 0x10) == 0 || (v4[641] & 1) == 0 )
  {
    EventData = (_DWORD *)UsbhBuildWmiConnectionNotification((__int64)DeviceObject, v5);
    v7 = (__int64)EventData;
    if ( EventData )
    {
      *EventData = 0;
      EventData[3] = *(_DWORD *)(a2 + 16);
      v8 = WmiFireEvent(DeviceObject, &GUID_USB_WMI_STD_NOTIFICATION, 0, 0x18u, EventData);
      Log((__int64)DeviceObject, 128, 1886351409, v8, v7);
    }
  }
}
