/*
 * XREFs of UsbhReset2Timeout @ 0x140058930
 * Callers:
 *     UsbhReset2TimeoutBadEnable @ 0x140058B10 (UsbhReset2TimeoutBadEnable.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     Usbh_UsbdReadFrameCounter @ 0x14000835C (Usbh_UsbdReadFrameCounter.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x140015900 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhResetPort @ 0x140018C04 (UsbhResetPort.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhAllocateTimeoutObject @ 0x14002A488 (UsbhAllocateTimeoutObject.c)
 *     UsbhAssertBusLock @ 0x140037AD0 (UsbhAssertBusLock.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     UsbhSetEnumerationFailed @ 0x140058C08 (UsbhSetEnumerationFailed.c)
 *     __security_check_cookie @ 0x140060F40 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhReset2Timeout(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int FrameCounter; // eax
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-68h]
  __int64 v13; // [rsp+28h] [rbp-60h]
  int v14; // [rsp+28h] [rbp-60h]
  PVOID P; // [rsp+50h] [rbp-38h] BYREF
  _DWORD v16[2]; // [rsp+58h] [rbp-30h] BYREF
  __int16 v17; // [rsp+60h] [rbp-28h]
  __int16 v18; // [rsp+62h] [rbp-26h]

  v18 = 0;
  P = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v14 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x1Bu,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v14);
  }
  Log(a1, 1024, 1884443186, a2, 0LL);
  UsbhAssertBusLock(a1);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1, v6, v7, v8);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v16[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  v16[1] = *(_DWORD *)(a2 + 544);
  v17 = *(_WORD *)(a2 + 4);
  v10 = UsbhAllocateTimeoutObject(a1, a2, &P);
  if ( *(_DWORD *)(a2 + 544) >= 3u || v10 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    LODWORD(v13) = -1073741823;
    PdoExt(a3)[705] = 1073807362;
    LODWORD(v12) = *(unsigned __int16 *)(a2 + 4);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET_TIMEOUT, v12, v13);
    UsbhSetEnumerationFailed(a1, a2, a3, 29, (__int64)v16, -1);
    return 0LL;
  }
  else
  {
    LODWORD(v13) = -1073741823;
    LODWORD(v12) = *(unsigned __int16 *)(a2 + 4);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY, v12, v13);
    ++*(_DWORD *)(a2 + 544);
    UsbhUnlinkPdoDeviceHandle(a1, a3, 2017740857, 1);
    UsbhResetPort(a1, a2, (__int64)P);
    return 1LL;
  }
}
