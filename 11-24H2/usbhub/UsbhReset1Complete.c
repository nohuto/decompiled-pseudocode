/*
 * XREFs of UsbhReset1Complete @ 0x1400188C0
 * Callers:
 *     <none>
 * Callees:
 *     Usbh_UsbdReadFrameCounter @ 0x14000835C (Usbh_UsbdReadFrameCounter.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhCreateDevice @ 0x140017858 (UsbhCreateDevice.c)
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhCancelResetTimeout @ 0x14001855C (UsbhCancelResetTimeout.c)
 *     UsbhResetPort @ 0x140018C04 (UsbhResetPort.c)
 *     UsbhWait @ 0x14001A1D4 (UsbhWait.c)
 *     UsbhReset2Complete @ 0x140028D20 (UsbhReset2Complete.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhAllocateTimeoutObject @ 0x14002A488 (UsbhAllocateTimeoutObject.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     UsbhClearTt @ 0x14004590C (UsbhClearTt.c)
 *     UsbhSetEnumerationFailed @ 0x140058C08 (UsbhSetEnumerationFailed.c)
 *     __security_check_cookie @ 0x140060F40 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhReset1Complete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  KSPIN_LOCK *v8; // rbx
  KIRQL v9; // al
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int FrameCounter; // eax
  int v14; // ecx
  int v15; // eax
  _DWORD *Pool2; // rax
  int v18; // eax
  int v19; // ebp
  __int64 v20; // [rsp+20h] [rbp-88h]
  __int64 v21; // [rsp+20h] [rbp-88h]
  __int64 v22; // [rsp+28h] [rbp-80h]
  __int64 v23; // [rsp+28h] [rbp-80h]
  PVOID P; // [rsp+58h] [rbp-50h] BYREF
  _DWORD v25[2]; // [rsp+60h] [rbp-48h] BYREF
  __int16 v26; // [rsp+68h] [rbp-40h]
  __int16 v27; // [rsp+6Ah] [rbp-3Eh]

  v27 = 0;
  P = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      28,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a2 + 4));
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_DWORD *)v7 = 1664176752;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = a2;
        *(_QWORD *)(v7 + 24) = 0LL;
      }
    }
  }
  v8 = (KSPIN_LOCK *)(FdoExt(a1) + 766);
  v9 = KeAcquireSpinLockRaiseToDpc(v8);
  KeReleaseSpinLock(v8, v9);
  UsbhCancelResetTimeout(a1, a2, 0);
  LODWORD(v22) = 0;
  LODWORD(v20) = *(unsigned __int16 *)(a2 + 4);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, (const EVENT_DESCRIPTOR *)"!", v20, v22);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1, v10, v11, v12);
  v14 = *(_DWORD *)(a2 + 544);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v15 = FrameCounter - *(_DWORD *)(a2 + 848);
  v25[1] = v14;
  v25[0] = v15;
  v26 = *(_WORD *)(a2 + 4);
  UsbhWait(a1, v14 != 0 ? 100 : 32);
  if ( (int)UsbhCreateDevice(a1, a3, *(_WORD *)(a2 + 420), *(_WORD *)(a2 + 4)) >= 0 )
  {
    LODWORD(v23) = 0;
    LODWORD(v21) = *(unsigned __int16 *)(a2 + 4);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_ENUM_CREATE_DEVICE_COMPLETE, v21, v23);
    if ( (*(_WORD *)(a2 + 420) & 0x400) != 0
      && !*(_DWORD *)(a2 + 544)
      && !dword_14006F70C
      && (FdoExt(a1)[640] & 0x8000000) == 0 )
    {
      return UsbhReset2Complete(a1, a2, a3);
    }
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 20LL, 1112885333LL);
    if ( Pool2 )
    {
      *Pool2 = 1867468116;
      Pool2[4] = *(_DWORD *)(a2 + 400);
      UsbhResetPort(a1, a2);
      return 2LL;
    }
    Log(a1, 1024, 1635020577, a2, 0LL);
  }
  v18 = UsbhAllocateTimeoutObject(a1, a2, &P);
  v19 = v18;
  if ( *(_DWORD *)(a2 + 544) >= 3u )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  else if ( P )
  {
    LODWORD(v23) = v18;
    LODWORD(v21) = *(unsigned __int16 *)(a2 + 4);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY, v21, v23);
    UsbhWait(a1, 500LL);
    ++*(_DWORD *)(a2 + 544);
    UsbhClearTt(a1, a2, 0LL);
    UsbhResetPort(a1, a2);
    return 1LL;
  }
  UsbhSetEnumerationFailed(a1, a2, a3, 3, (__int64)v25, v19);
  return 0LL;
}
