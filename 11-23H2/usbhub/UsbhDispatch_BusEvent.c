/*
 * XREFs of UsbhDispatch_BusEvent @ 0x1C001CF30
 * Callers:
 *     UsbhSshSuspendHub @ 0x1C000DEF0 (UsbhSshSuspendHub.c)
 *     UsbhSshResumeDownstream @ 0x1C000E1B0 (UsbhSshResumeDownstream.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1C000EB10 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhFdoSetD0Cold @ 0x1C000FBD0 (UsbhFdoSetD0Cold.c)
 *     UsbhSyncBusDisconnect @ 0x1C00317FC (UsbhSyncBusDisconnect.c)
 *     UsbhSyncBusPause @ 0x1C0031870 (UsbhSyncBusPause.c)
 *     UsbhSyncBusResume @ 0x1C00318F8 (UsbhSyncBusResume.c)
 *     UsbhBusAdd @ 0x1C00367F0 (UsbhBusAdd.c)
 *     UsbhBusPnpStart @ 0x1C00369F0 (UsbhBusPnpStart.c)
 *     UsbhBusPnpStop @ 0x1C0036F60 (UsbhBusPnpStop.c)
 *     UsbhBusRemove @ 0x1C0036FA0 (UsbhBusRemove.c)
 *     UsbhAsyncStartComplete @ 0x1C0042408 (UsbhAsyncStartComplete.c)
 *     UsbhHubStart @ 0x1C0043560 (UsbhHubStart.c)
 *     Usbh_PnpRemove @ 0x1C0044B44 (Usbh_PnpRemove.c)
 * Callees:
 *     Usbh_BS_BusRun @ 0x1C001D160 (Usbh_BS_BusRun.c)
 *     Usbh_BS_BusPause @ 0x1C001D2E0 (Usbh_BS_BusPause.c)
 *     Usbh_BS_BusSuspend @ 0x1C001D470 (Usbh_BS_BusSuspend.c)
 *     UsbhReleaseBusStateLock @ 0x1C001D7C0 (UsbhReleaseBusStateLock.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhSshBusBusy @ 0x1C003170C (UsbhSshBusBusy.c)
 *     Usbh_BS_BusInit @ 0x1C003196C (Usbh_BS_BusInit.c)
 *     Usbh_BS_BusRemove @ 0x1C0031A28 (Usbh_BS_BusRemove.c)
 *     Usbh_BS_BusStop @ 0x1C0031AE0 (Usbh_BS_BusStop.c)
 */

__int64 __fastcall UsbhDispatch_BusEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  _DWORD *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r15
  char v11; // cl
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx

  v3 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    goto LABEL_33;
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  if ( a3 == 3 )
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
    v7 = *(_QWORD *)(a1 + 64);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
      *(_DWORD *)v8 = 724267874;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 16) = a2;
      *(_QWORD *)(v8 + 24) = v3;
    }
  }
  v9 = *(_QWORD *)(a1 + 64);
  if ( !v9 )
LABEL_33:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v9 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  KeWaitForSingleObject((PVOID)(v9 + 2448), Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 76) = 2020889410;
  *(_DWORD *)(a2 + 84) = v3;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  v10 = *(int *)(v9 + 2440);
  *(_DWORD *)(a2 + 80) = v10;
  v11 = *(_DWORD *)(v9 + 832) + 1;
  *(_QWORD *)(v9 + 1336) = a2;
  v12 = v11 & 7;
  *(_DWORD *)(v9 + 832) = v12;
  v12 *= 32LL;
  *(_DWORD *)(v12 + v9 + 540) = v3;
  *(_DWORD *)(v12 + v9 + 544) = *(_DWORD *)(v9 + 2440);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 64);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
      *(_DWORD *)v14 = 757953378;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = a2;
      *(_QWORD *)(v14 + 24) = v10;
    }
  }
  switch ( (_DWORD)v10 )
  {
    case 4:
      return Usbh_BS_BusPause(a1, a2, (unsigned int)v3);
    case 3:
      return Usbh_BS_BusRun(a1, a2, (unsigned int)v3);
    case 1:
      return Usbh_BS_BusInit(a1, a2, (unsigned int)v3);
    case 2:
      return Usbh_BS_BusStop(a1, a2, (unsigned int)v3);
    case 5:
      return Usbh_BS_BusSuspend(a1, a2, (unsigned int)v3);
    case 6:
      return Usbh_BS_BusRemove(a1, a2, (unsigned int)v3);
  }
  UsbhReleaseBusStateLock(a1, a2, (unsigned int)v10);
  return (unsigned int)v10;
}
