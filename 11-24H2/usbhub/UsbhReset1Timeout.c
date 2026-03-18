/*
 * XREFs of UsbhReset1Timeout @ 0x140058340
 * Callers:
 *     UsbhReset1TimeoutBadEnable @ 0x140058550 (UsbhReset1TimeoutBadEnable.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     Usbh_UsbdReadFrameCounter @ 0x14000835C (Usbh_UsbdReadFrameCounter.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhResetPort @ 0x140018C04 (UsbhResetPort.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhAllocateTimeoutObject @ 0x14002A488 (UsbhAllocateTimeoutObject.c)
 *     UsbhAssertBusLock @ 0x140037AD0 (UsbhAssertBusLock.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     UsbhSetEnumerationFailed @ 0x140058C08 (UsbhSetEnumerationFailed.c)
 *     __security_check_cookie @ 0x140060F40 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhReset1Timeout(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int FrameCounter; // eax
  int v10; // esi
  unsigned int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-78h]
  __int64 v14; // [rsp+28h] [rbp-70h]
  int v15; // [rsp+28h] [rbp-70h]
  PVOID P; // [rsp+50h] [rbp-48h] BYREF
  _DWORD v17[2]; // [rsp+58h] [rbp-40h] BYREF
  __int16 v18; // [rsp+60h] [rbp-38h]
  __int16 v19; // [rsp+62h] [rbp-36h]

  v19 = 0;
  P = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v15 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x10u,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v15);
  }
  Log(a1, 1024, 1884443476, a2, *(unsigned int *)(a2 + 544));
  UsbhAssertBusLock(a1);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1, v6, v7, v8);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v17[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  v17[1] = *(_DWORD *)(a2 + 544);
  v18 = *(_WORD *)(a2 + 4);
  v10 = UsbhAllocateTimeoutObject(a1, a2, &P);
  v11 = *(_DWORD *)(a2 + 544);
  if ( v11 >= 3 || v10 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    LODWORD(v14) = -1073741823;
    PdoExt(a3)[705] = 1073807362;
    LODWORD(v13) = *(unsigned __int16 *)(a2 + 4);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET_TIMEOUT, v13, v14);
    UsbhSetEnumerationFailed(a1, a2, a3, 28, (__int64)v17, v10);
    return 0LL;
  }
  else
  {
    LODWORD(v14) = -1073741823;
    *(_DWORD *)(a2 + 544) = v11 + 1;
    LODWORD(v13) = *(unsigned __int16 *)(a2 + 4);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY, v13, v14);
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 81LL, v17, 0xCu, v10, -1, usbfile_busfunc_c, 726, 0);
    UsbhResetPort(a1, a2, (__int64)P);
    return 1LL;
  }
}
