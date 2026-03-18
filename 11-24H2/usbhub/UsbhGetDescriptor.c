/*
 * XREFs of UsbhGetDescriptor @ 0x14003B63C
 * Callers:
 *     UsbhGetHubClassDescriptor @ 0x14003BD64 (UsbhGetHubClassDescriptor.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x14003BEFC (UsbhGetHubConfigurationDescriptor.c)
 * Callees:
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhSyncSendCommand @ 0x14000A470 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 */

__int64 __fastcall UsbhGetDescriptor(__int64 a1, unsigned __int16 *a2, const void *a3, char a4, int a5, char a6)
{
  bool v10; // cf
  unsigned int v11; // ebx
  __int64 v13; // [rsp+20h] [rbp-48h]
  char v14; // [rsp+78h] [rbp+10h] BYREF
  __int16 v15; // [rsp+79h] [rbp+11h]
  char v16; // [rsp+7Bh] [rbp+13h]
  __int16 v17; // [rsp+7Ch] [rbp+14h]
  __int16 v18; // [rsp+7Eh] [rbp+16h]
  int v19; // [rsp+88h] [rbp+20h] BYREF

  v19 = 0;
  FdoExt(a1);
  v10 = a6 != 0;
  a6 = -a6;
  v15 = 6;
  v16 = a4;
  v17 = 0;
  v14 = v10 ? -96 : 0x80;
  v18 = *a2;
  v11 = UsbhSyncSendCommand(a1, (unsigned __int8 *)&v14, (__int64)a3, a2, v13, &v19);
  if ( (v11 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v11) )
    UsbhException(a1, 0LL, 16LL, a3, *a2, v11, v19, usbfile_hub_c, 3814, 0);
  return v11;
}
