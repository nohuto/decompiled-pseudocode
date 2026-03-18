/*
 * XREFs of UsbhReleaseBusStateLock @ 0x140033BCC
 * Callers:
 *     Usbh_BS_BusRun @ 0x14001ED80 (Usbh_BS_BusRun.c)
 *     Usbh_BS_BusPause @ 0x140020324 (Usbh_BS_BusPause.c)
 *     Usbh_BS_BusInit @ 0x1400391F4 (Usbh_BS_BusInit.c)
 *     Usbh_BS_BusRemove @ 0x140040AD0 (Usbh_BS_BusRemove.c)
 *     Usbh_BS_BusStop @ 0x140040B88 (Usbh_BS_BusStop.c)
 *     Usbh_BS_BusSuspend @ 0x140040C94 (Usbh_BS_BusSuspend.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhBusResume_Action @ 0x140020514 (UsbhBusResume_Action.c)
 *     UsbhBusSuspend_Action @ 0x1400408AC (UsbhBusSuspend_Action.c)
 */

__int64 __fastcall UsbhReleaseBusStateLock(struct _DEVICE_OBJECT *a1, __int64 a2, unsigned int a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  __int64 v8; // rax

  v6 = FdoExt((__int64)a1);
  v7 = v6;
  if ( v6[610] != a3 )
  {
    v6[610] = a3;
    *(_DWORD *)(a2 + 80) = a3;
    if ( a3 == 3 )
    {
      UsbhBusResume_Action(a1, a2);
    }
    else if ( a3 == 5 )
    {
      UsbhBusSuspend_Action(a1, a2);
    }
  }
  *(_DWORD *)(a2 + 76) = 1734964085;
  v8 = (unsigned int)v7[208];
  *((_QWORD *)v7 + 167) = 0LL;
  v7[8 * v8 + 137] = a3;
  KeReleaseSemaphore((PRKSEMAPHORE)(v7 + 612), 16, 1, 0);
  return a3;
}
