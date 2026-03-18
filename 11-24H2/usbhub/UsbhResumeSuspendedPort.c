/*
 * XREFs of UsbhResumeSuspendedPort @ 0x14003279C
 * Callers:
 *     UsbhHandleSuspend @ 0x1400325D0 (UsbhHandleSuspend.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhSyncSendCommand @ 0x14000A470 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     UsbhSignalResumeEvent @ 0x140019994 (UsbhSignalResumeEvent.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhResumeSuspendedPort(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  _DWORD *v23; // rax
  int v24; // r10d
  int v25; // r10d
  __int64 v26; // [rsp+20h] [rbp-40h]
  int v27; // [rsp+50h] [rbp-10h] BYREF
  int v28; // [rsp+58h] [rbp-8h] BYREF
  __int16 v29; // [rsp+5Ch] [rbp-4h]
  __int16 v30; // [rsp+5Eh] [rbp-2h]
  int v31; // [rsp+A0h] [rbp+40h] BYREF

  v5 = a3;
  v27 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      46,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids);
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1297249139;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a4;
        *(_QWORD *)(v9 + 24) = v5;
      }
    }
  }
  FdoExt(a1);
  v11 = 2LL;
  if ( (v5 & 0x18) == 0x18 )
  {
    if ( (v5 & 2) == 0 )
    {
      if ( a5 )
      {
        v23 = PdoExt(a5);
        v23[355] |= 0x2000u;
      }
      goto LABEL_23;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
LABEL_23:
    UsbhSignalResumeEvent(a1, a4, v10, v11);
    return 0LL;
  }
  if ( (v5 & 0x10) == 0 )
    goto LABEL_23;
  v12 = *(unsigned __int16 *)(a4 + 4);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v31 = 1884115794;
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = v31;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = v12;
        *(_QWORD *)(v14 + 24) = 0LL;
      }
    }
  }
  v29 = *(_WORD *)(a4 + 4);
  LOWORD(v31) = 0;
  v28 = 131363;
  v30 = 0;
  v15 = UsbhSyncSendCommand(a1, (unsigned __int8 *)&v28, 0LL, &v31, v26, &v27);
  v16 = *(unsigned __int16 *)(a4 + 4);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
        *(_DWORD *)v18 = 2018333522;
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_QWORD *)(v18 + 16) = v16;
        *(_QWORD *)(v18 + 24) = v15;
      }
    }
  }
  v19 = *(unsigned __int16 *)(a4 + 4);
  if ( v15 < 0 )
  {
    Log(a1, 16, 1347568944, v15, *(unsigned __int16 *)(a4 + 4));
    if ( !Usb_Disconnected(v24) )
      UsbhException(a1, *(unsigned __int16 *)(a4 + 4), 47LL, 0LL, 0, v25, v27, usbfile_busfunc_c, 3115, 0);
    goto LABEL_23;
  }
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v20 = *(_QWORD *)(a1 + 64);
      if ( v20 )
      {
        v31 = 1397912695;
        v21 = *(_QWORD *)(v20 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
        *(_DWORD *)v21 = v31;
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_QWORD *)(v21 + 16) = 0LL;
        *(_QWORD *)(v21 + 24) = v19;
      }
    }
  }
  return 0LL;
}
