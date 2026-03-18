/*
 * XREFs of UsbhPortConnect @ 0x140019BF0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14000D0C0 (UsbhEtwWrite.c)
 *     UsbhDecHubBusy @ 0x14000F560 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14000F6F0 (UsbhIncHubBusy.c)
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhResetPort @ 0x140018C04 (UsbhResetPort.c)
 *     UsbhAcquireEnumBusLock @ 0x140018F14 (UsbhAcquireEnumBusLock.c)
 *     UsbhRawWait @ 0x14001A244 (UsbhRawWait.c)
 *     UsbhCreatePdo @ 0x14001A420 (UsbhCreatePdo.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x1400242E4 (Usbh_ErrorDisconnect_PdoEvent.c)
 *     UsbhReleaseEnumBusLockEx @ 0x140028B10 (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhDisablePort @ 0x140029930 (UsbhDisablePort.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x140060F40 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhPortConnect(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  _DWORD *v7; // rdx
  __int128 *v8; // r8
  __int64 v9; // r9
  unsigned __int16 *v10; // rcx
  int v11; // eax
  _QWORD *v12; // r15
  __int64 v13; // rdx
  int Pdo; // esi
  unsigned __int64 v15; // rsi
  __int64 v16; // r15
  __int64 v17; // r13
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  _DWORD *Pool2; // rax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // [rsp+20h] [rbp-89h]
  __int64 v28; // [rsp+20h] [rbp-89h]
  __int64 v29; // [rsp+28h] [rbp-81h]
  __int64 v30; // [rsp+28h] [rbp-81h]
  int v31; // [rsp+68h] [rbp-41h] BYREF
  int v32; // [rsp+70h] [rbp-39h] BYREF
  int v33; // [rsp+78h] [rbp-31h] BYREF
  __int16 v34; // [rsp+7Ch] [rbp-2Dh]
  __int16 v35; // [rsp+7Eh] [rbp-2Bh]
  __int16 v36; // [rsp+80h] [rbp-29h]
  __int16 v37; // [rsp+82h] [rbp-27h]
  _WORD v38[2]; // [rsp+88h] [rbp-21h] BYREF
  int v39; // [rsp+8Ch] [rbp-1Dh]
  int v40; // [rsp+90h] [rbp-19h]
  __int128 v41; // [rsp+94h] [rbp-15h] BYREF
  __int64 v42; // [rsp+A4h] [rbp-5h]
  __int128 v43; // [rsp+B0h] [rbp+7h]

  v3 = 0LL;
  *(_DWORD *)(a2 + 544) = 0;
  *(_DWORD *)(a2 + 2408) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      14,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a2 + 4));
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
        *(_DWORD *)v6 = 1313817456;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 16) = a2;
        *(_QWORD *)(v6 + 24) = 0LL;
      }
    }
  }
  v32 = *(unsigned __int16 *)(a2 + 4);
  v41 = 0LL;
  v31 = 0;
  v43 = 0LL;
  v42 = 0LL;
  if ( dword_14006F6D0 )
  {
    v7 = FdoExt(a1);
    v8 = &v41;
    v9 = 5LL;
    v33 = v7[1298];
    v34 = *((_WORD *)v7 + 2598);
    v35 = v7[1300];
    v36 = *((_WORD *)v7 + 2614);
    v37 = *((_WORD *)v7 + 2615);
    v38[0] = *((_WORD *)v7 + 1274);
    v38[1] = *((_WORD *)v7 + 1275);
    v10 = (unsigned __int16 *)v7 + 2605;
    v39 = 0;
    v40 = *((unsigned __int16 *)v7 + 2604);
    v39 = *((_WORD *)v7 + 2604) != 0;
    do
    {
      v11 = *v10;
      *(_DWORD *)v8 = v11;
      if ( v11 )
        ++v39;
      v8 = (__int128 *)((char *)v8 + 4);
      ++v10;
      --v9;
    }
    while ( v9 );
    HIDWORD(v42) = v7[634];
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_ENUM_START, 0LL, &v33, 12LL, v38, 36LL, &v32, 4LL, &v31, 4LL, 0LL);
  }
  _InterlockedExchange((volatile __int32 *)(a2 + 428), 0);
  v12 = (_QWORD *)UsbhIncHubBusy(a1, a2 + 24, a1, 1129345907, 1);
  Pdo = UsbhCreatePdo(a1, a2);
  if ( v12 )
    UsbhDecHubBusy(a1, v13, v12);
  if ( Pdo < 0 )
  {
    LODWORD(v29) = Pdo;
    LODWORD(v27) = *(unsigned __int16 *)(a2 + 4);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_CREATE_PDO_FAILURE, v27, v29);
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 2LL, 0LL, 0, Pdo, -1, usbfile_busfunc_c, 551, 0);
  }
  else
  {
    UsbhAcquireEnumBusLock(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
    v15 = 0LL;
    _InterlockedExchange((volatile __int32 *)(a2 + 404), 0);
    v16 = MEMORY[0xFFFFF78000000008];
    v17 = MEMORY[0xFFFFF78000000008];
    v18 = MEMORY[0xFFFFF78000000008];
    do
    {
      while ( 1 )
      {
        if ( (unsigned __int64)(v18 - v16) > 0x1E8480 && v3 > 1 )
        {
          UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(unsigned __int16 *)(a2 + 4));
          LODWORD(v29) = -1073741823;
          LODWORD(v27) = *(unsigned __int16 *)(a2 + 4);
          UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_DEBOUNCE_FAILURE, v27, v29);
          Usbh_ErrorDisconnect_PdoEvent(a1, *(_QWORD *)(a2 + 392), a2 + 24);
          v24 = *(unsigned __int16 *)(a2 + 4);
          if ( (UsbhLogMask & 0x400) != 0 )
          {
            if ( a1 )
            {
              v25 = *(_QWORD *)(a1 + 64);
              if ( v25 )
              {
                v26 = *(_QWORD *)(v25 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
                *(_DWORD *)v26 = 1869890116;
                *(_QWORD *)(v26 + 8) = 0LL;
                *(_QWORD *)(v26 + 16) = a2;
                *(_QWORD *)(v26 + 24) = v24;
              }
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              15,
              (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
              *(_WORD *)(a2 + 4));
          }
          return 0LL;
        }
        if ( (UsbhLogMask & 8) != 0 && a1 )
        {
          v19 = *(_QWORD *)(a1 + 64);
          if ( v19 )
          {
            v20 = *(_QWORD *)(v19 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
            *(_DWORD *)v20 = 1953063287;
            *(_QWORD *)(v20 + 8) = 0LL;
            *(_QWORD *)(v20 + 16) = 20LL;
            *(_QWORD *)(v20 + 24) = 0LL;
          }
        }
        UsbhRawWait(20LL);
        v18 = MEMORY[0xFFFFF78000000008];
        v21 = MEMORY[0xFFFFF78000000008] - v17;
        v17 = MEMORY[0xFFFFF78000000008];
        v15 += v21;
        if ( !_InterlockedExchange((volatile __int32 *)(a2 + 404), 0) )
          break;
        ++v3;
        v15 = 0LL;
      }
    }
    while ( v15 < 0xF4240 );
    LODWORD(v29) = 0;
    LODWORD(v27) = *(unsigned __int16 *)(a2 + 4);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_DEBOUNCE_COMPLETE, v27, v29);
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 20LL, 1112885333LL);
    if ( Pool2 )
    {
      *Pool2 = 1867468116;
      Pool2[4] = *(_DWORD *)(a2 + 400);
      UsbhResetPort(a1, a2, (__int64)Pool2);
      _InterlockedExchange((volatile __int32 *)(a2 + 428), 9);
      return 1LL;
    }
    Log(a1, 1024, 1635020577, a2, 0LL);
    UsbhDisablePort(a1, a2);
    UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(unsigned __int16 *)(a2 + 4));
    Usbh_ErrorDisconnect_PdoEvent(a1, *(_QWORD *)(a2 + 392), a2 + 24);
    LODWORD(v30) = -1073741670;
    LODWORD(v28) = *(unsigned __int16 *)(a2 + 4);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_CREATE_PDO_FAILURE, v28, v30);
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 2LL, 0LL, 0, -1073741670, -1, usbfile_busfunc_c, 650, 0);
  }
  _InterlockedExchange((volatile __int32 *)(a2 + 428), 3);
  return 0LL;
}
