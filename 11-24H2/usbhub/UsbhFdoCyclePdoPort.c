/*
 * XREFs of UsbhFdoCyclePdoPort @ 0x14003F6C0
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x14000B2A0 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     UsbhDecPdoIoCount @ 0x140015600 (UsbhDecPdoIoCount.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhCycleDevicePort @ 0x140045ADC (UsbhCycleDevicePort.c)
 */

__int64 __fastcall UsbhFdoCyclePdoPort(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _DWORD *v6; // rax
  unsigned int v7; // ebx
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  int v11; // [rsp+80h] [rbp+18h] BYREF

  v11 = 0;
  Log(a1, 8, 1768898097, (__int64)a3, 0LL);
  v6 = PdoExt(a2);
  UsbhException(a1, *((unsigned __int16 *)v6 + 714), 96LL, 0LL, 0, 0, 0, usbfile_dioctl_c, 917, 0);
  if ( KeGetCurrentIrql() )
  {
    v7 = -1073741811;
    v9 = PdoExt(a2);
    UsbhException(a1, *((unsigned __int16 *)v9 + 714), 95LL, 0LL, 0, -1073741811, 0, usbfile_dioctl_c, 931, 0);
  }
  else
  {
    v7 = UsbhCycleDevicePort(a1, a2, &v11);
    if ( (v7 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v7) )
    {
      v8 = PdoExt(a2);
      UsbhException(a1, *((unsigned __int16 *)v8 + 714), 94LL, 0LL, 0, v7, v11, usbfile_dioctl_c, 924, 0);
    }
  }
  a3->IoStatus.Status = v7;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return v7;
}
