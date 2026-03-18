/*
 * XREFs of UsbhPortDisconnect @ 0x14002A520
 * Callers:
 *     UsbhHandleSuspend @ 0x1400325D0 (UsbhHandleSuspend.c)
 *     UsbhPortCycle @ 0x140057970 (UsbhPortCycle.c)
 *     UsbhReset1Debounce @ 0x140057F60 (UsbhReset1Debounce.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x140015900 (UsbhUnlinkPdoDeviceHandle.c)
 *     Usbh_Disconnect_PdoEvent @ 0x140016318 (Usbh_Disconnect_PdoEvent.c)
 *     UsbhSignalResumeEvent @ 0x140019994 (UsbhSignalResumeEvent.c)
 *     UsbhBusUnlatchPdo @ 0x140029F90 (UsbhBusUnlatchPdo.c)
 *     UsbhDeleteUxdSettings @ 0x14002ABAC (UsbhDeleteUxdSettings.c)
 *     UsbhSignalSuspendEvent @ 0x14002AFB4 (UsbhSignalSuspendEvent.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPortDisconnect(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a2 + 4));
  v6 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_DWORD *)v8 = 1397310576;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = a2;
        *(_QWORD *)(v8 + 24) = v6;
      }
    }
  }
  v9 = PdoExt(a3);
  UsbhUnlinkPdoDeviceHandle(a1, a3, 2017740853, 1);
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 860112996;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = a3;
        *(_QWORD *)(v13 + 24) = 0LL;
      }
    }
  }
  UsbhSignalResumeEvent(a1, a2, v10, v11);
  UsbhSignalSuspendEvent(a1, a2);
  if ( (v9[355] & 0x20000) == 0 )
    UsbhDeleteUxdSettings(a1, a3, 2LL);
  UsbhBusUnlatchPdo(a1, a3, a2, v14, 0LL);
  Usbh_Disconnect_PdoEvent(a1, a3, 3, *(_QWORD *)(a2 + 376));
  return 0LL;
}
