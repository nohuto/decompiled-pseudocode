/*
 * XREFs of UsbhGetHubClassDescriptor @ 0x14003BD64
 * Callers:
 *     UsbhInitialize @ 0x14003C7C0 (UsbhInitialize.c)
 *     UsbhCheckHubPowerStatus @ 0x1400495EC (UsbhCheckHubPowerStatus.c)
 * Callees:
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhGetDescriptor @ 0x14003B63C (UsbhGetDescriptor.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     memset @ 0x140061340 (memset.c)
 */

__int64 __fastcall UsbhGetHubClassDescriptor(__int64 a1, void *a2)
{
  _DWORD *v4; // rsi
  int Descriptor; // ebx
  unsigned int v6; // r10d
  int v7; // r11d
  unsigned int v8; // r10d
  int v10; // [rsp+20h] [rbp-48h]
  unsigned __int16 v11; // [rsp+80h] [rbp+18h] BYREF
  _DWORD *v12; // [rsp+88h] [rbp+20h] BYREF

  v4 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      23,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  v12 = v4 + 734;
  memset(a2, 0, 0x47uLL);
  v11 = 71;
  Descriptor = UsbhGetDescriptor(a1, &v11, a2, 41, v10, 1);
  Log(a1, 8, 1214475379, Descriptor, v11);
  if ( (Descriptor & 0xC0000000) == 0xC0000000 )
  {
    if ( !Usb_Disconnected(Descriptor) )
      UsbhException(a1, 0LL, 14LL, &v12, v8, Descriptor, -1, usbfile_hub_c, 4089, 0);
  }
  else if ( *((_BYTE *)v12 + 2) )
  {
    v4[640] |= 0x400000u;
    Log(a1, v7, 1214475364, (__int64)v12, *((unsigned __int8 *)v12 + 2));
  }
  else
  {
    Descriptor = -1073741811;
    UsbhException(a1, 0LL, 15LL, &v12, v6, -1073741811, -1, usbfile_hub_c, 4098, 0);
  }
  return (unsigned int)Descriptor;
}
