/*
 * XREFs of UsbhDispatch_BusEvent @ 0x14001FC5C
 * Callers:
 *     UsbhSyncBusPause @ 0x14001397C (UsbhSyncBusPause.c)
 *     UsbhSyncBusResume @ 0x14001E040 (UsbhSyncBusResume.c)
 *     UsbhFdoSetD0Cold @ 0x1400227C4 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1400372B8 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSyncBusDisconnect @ 0x140039434 (UsbhSyncBusDisconnect.c)
 *     UsbhBusAdd @ 0x140045100 (UsbhBusAdd.c)
 *     UsbhBusPnpStart @ 0x140045250 (UsbhBusPnpStart.c)
 *     UsbhBusPnpStop @ 0x1400457D0 (UsbhBusPnpStop.c)
 *     UsbhBusRemove @ 0x140045810 (UsbhBusRemove.c)
 *     UsbhAsyncStartComplete @ 0x14004F0A4 (UsbhAsyncStartComplete.c)
 *     UsbhHubStart @ 0x140050200 (UsbhHubStart.c)
 *     Usbh_PnpRemove @ 0x1400515C4 (Usbh_PnpRemove.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Usbh_BS_BusRun @ 0x14001ED80 (Usbh_BS_BusRun.c)
 *     Usbh_BS_BusPause @ 0x140020324 (Usbh_BS_BusPause.c)
 *     UsbhBusResume_Action @ 0x140020514 (UsbhBusResume_Action.c)
 *     Usbh_BS_BusInit @ 0x1400391F4 (Usbh_BS_BusInit.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     UsbhBusSuspend_Action @ 0x1400408AC (UsbhBusSuspend_Action.c)
 *     UsbhSshBusBusy @ 0x140040A2C (UsbhSshBusBusy.c)
 *     Usbh_BS_BusRemove @ 0x140040AD0 (Usbh_BS_BusRemove.c)
 *     Usbh_BS_BusStop @ 0x140040B88 (Usbh_BS_BusStop.c)
 *     Usbh_BS_BusSuspend @ 0x140040C94 (Usbh_BS_BusSuspend.c)
 */

__int64 __fastcall UsbhDispatch_BusEvent(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  void *DeviceExtension; // rdx
  __int64 v7; // rcx
  _DWORD *v8; // rbx
  __int64 v9; // r14
  char v10; // cl
  __int64 v11; // rcx
  void *v12; // rdx
  __int64 v13; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rcx

  v3 = a3;
  FdoExt((__int64)a1);
  if ( (_DWORD)v3 == 3 )
    UsbhSshBusBusy(a1, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_c14d5bcd548e31c8cc373c847eff1ef0_Traceguids,
      v3);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( a1 )
    {
      DeviceExtension = a1->DeviceExtension;
      if ( DeviceExtension )
      {
        v7 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v7 = 724267874;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = a2;
        *(_QWORD *)(v7 + 24) = v3;
      }
    }
  }
  v8 = FdoExt((__int64)a1);
  KeWaitForSingleObject(v8 + 612, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 76) = 2020889410;
  *(_DWORD *)(a2 + 84) = v3;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  v9 = (int)v8[610];
  *(_DWORD *)(a2 + 80) = v9;
  v10 = v8[208] + 1;
  *((_QWORD *)v8 + 167) = a2;
  v11 = v10 & 7;
  v8[208] = v11;
  v11 *= 32LL;
  *(_DWORD *)((char *)v8 + v11 + 540) = v3;
  *(_DWORD *)((char *)v8 + v11 + 544) = v8[610];
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( a1 )
    {
      v12 = a1->DeviceExtension;
      if ( v12 )
      {
        v13 = *((_QWORD *)v12 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v12 + 220) & *((_DWORD *)v12 + 221));
        *(_DWORD *)v13 = 757953378;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = a2;
        *(_QWORD *)(v13 + 24) = v9;
      }
    }
  }
  switch ( (_DWORD)v9 )
  {
    case 1:
      return Usbh_BS_BusInit(a1, a2, (unsigned int)v3);
    case 2:
      return Usbh_BS_BusStop(a1, a2, (unsigned int)v3);
    case 3:
      return Usbh_BS_BusRun(a1, a2, v3);
    case 4:
      return Usbh_BS_BusPause(a1, a2, (unsigned int)v3);
    case 5:
      return Usbh_BS_BusSuspend(a1, a2, (unsigned int)v3);
    case 6:
      return Usbh_BS_BusRemove(a1, a2, (unsigned int)v3);
  }
  v15 = FdoExt((__int64)a1);
  if ( v15[610] != (_DWORD)v9 )
  {
    v15[610] = v9;
    *(_DWORD *)(a2 + 80) = v9;
  }
  *(_DWORD *)(a2 + 76) = 1734964085;
  v16 = 8LL * (unsigned int)v15[208];
  *((_QWORD *)v15 + 167) = 0LL;
  v15[v16 + 137] = v9;
  KeReleaseSemaphore((PRKSEMAPHORE)(v15 + 612), 16, 1, 0);
  return (unsigned int)v9;
}
