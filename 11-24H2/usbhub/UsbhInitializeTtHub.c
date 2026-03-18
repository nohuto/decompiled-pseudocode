/*
 * XREFs of UsbhInitializeTtHub @ 0x14003CCEC
 * Callers:
 *     UsbhInitialize @ 0x14003C7C0 (UsbhInitialize.c)
 *     UsbhReinitialize @ 0x14003D178 (UsbhReinitialize.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     Usbh_HubDerefDeviceHandle @ 0x140033290 (Usbh_HubDerefDeviceHandle.c)
 *     UsbhGetDeviceHandle @ 0x1400384D0 (UsbhGetDeviceHandle.c)
 *     Usbh_HubInitialize20Hub @ 0x14003D884 (Usbh_HubInitialize20Hub.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitializeTtHub(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx
  unsigned int v5; // esi
  __int64 DeviceHandle; // rbp
  unsigned int v8; // ebx

  v4 = FdoExt(a1);
  v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      30,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  DeviceHandle = UsbhGetDeviceHandle(a1, a2);
  if ( !DeviceHandle )
    return 3221225473LL;
  if ( (v4[640] & 0x80u) != 0 )
    v5 = *((unsigned __int8 *)FdoExt(a1) + 2938);
  v8 = Usbh_HubInitialize20Hub(a1, DeviceHandle, v5);
  Log(a1, 8, 1768838228, (int)v8, v5);
  Usbh_HubDerefDeviceHandle(a1, DeviceHandle, a2, 0x48447472u);
  return v8;
}
