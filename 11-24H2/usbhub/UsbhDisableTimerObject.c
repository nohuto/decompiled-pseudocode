/*
 * XREFs of UsbhDisableTimerObject @ 0x140013F2C
 * Callers:
 *     UsbhSshSuspendHub @ 0x140013464 (UsbhSshSuspendHub.c)
 *     UsbhDeletePdo @ 0x140014454 (UsbhDeletePdo.c)
 *     UsbhSshSetPortsBusyState @ 0x140015B70 (UsbhSshSetPortsBusyState.c)
 *     UsbhCreatePdo @ 0x14001A420 (UsbhCreatePdo.c)
 *     UsbhPdoPnp_StartDevice @ 0x14001D150 (UsbhPdoPnp_StartDevice.c)
 *     UsbhFdoSystemPowerState @ 0x14002D470 (UsbhFdoSystemPowerState.c)
 *     UsbhFreeTimerObject @ 0x1400387F0 (UsbhFreeTimerObject.c)
 *     Usbh_PIND_Disable_Action @ 0x14003EA5C (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x14003EBC4 (Usbh_PIND_SetAuto_Action.c)
 *     UsbhAsyncStop @ 0x14004F168 (UsbhAsyncStop.c)
 *     UsbhHubStart @ 0x140050200 (UsbhHubStart.c)
 *     UsbhInitCallbackWorker @ 0x140050560 (UsbhInitCallbackWorker.c)
 *     UsbhHubSSH_PnpStop @ 0x14005E000 (UsbhHubSSH_PnpStop.c)
 *     UsbhSshDisabled @ 0x14005E2A0 (UsbhSshDisabled.c)
 *     UsbhSshEnterSx @ 0x14005E5B0 (UsbhSshEnterSx.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14000D0C0 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x140060F40 (__security_check_cookie.c)
 */

void __fastcall UsbhDisableTimerObject(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v4; // rsi
  int v5; // r8d
  _DWORD *v6; // rdx
  __int128 *v7; // r8
  __int64 v8; // r9
  unsigned __int16 *v9; // rcx
  int v10; // eax
  KIRQL v11; // al
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  int v22; // [rsp+68h] [rbp-11h] BYREF
  int v23; // [rsp+70h] [rbp-9h] BYREF
  __int16 v24; // [rsp+74h] [rbp-5h]
  __int16 v25; // [rsp+76h] [rbp-3h]
  __int16 v26; // [rsp+78h] [rbp-1h]
  __int16 v27; // [rsp+7Ah] [rbp+1h]
  _WORD v28[2]; // [rsp+80h] [rbp+7h] BYREF
  int v29; // [rsp+84h] [rbp+Bh]
  int v30; // [rsp+88h] [rbp+Fh]
  __int128 v31; // [rsp+8Ch] [rbp+13h] BYREF
  __int64 v32; // [rsp+9Ch] [rbp+23h]

  v4 = (KSPIN_LOCK *)FdoExt(a1);
  if ( a2 )
  {
    v5 = *(_DWORD *)(a2 + 24);
    v31 = 0LL;
    v22 = v5;
    v32 = 0LL;
    if ( dword_14006F6D0 )
    {
      v6 = FdoExt(a1);
      v7 = &v31;
      v8 = 5LL;
      v23 = v6[1298];
      v24 = *((_WORD *)v6 + 2598);
      v25 = v6[1300];
      v26 = *((_WORD *)v6 + 2614);
      v27 = *((_WORD *)v6 + 2615);
      v28[0] = *((_WORD *)v6 + 1274);
      v28[1] = *((_WORD *)v6 + 1275);
      v9 = (unsigned __int16 *)v6 + 2605;
      v29 = 0;
      v30 = *((unsigned __int16 *)v6 + 2604);
      v29 = *((_WORD *)v6 + 2604) != 0;
      do
      {
        v10 = *v9;
        *(_DWORD *)v7 = v10;
        if ( v10 )
          ++v29;
        v7 = (__int128 *)((char *)v7 + 4);
        ++v9;
        --v8;
      }
      while ( v8 );
      HIDWORD(v32) = v6[634];
      UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_DISABLE_TIMER, 0LL, &v23, 12LL, v28, 36LL, &v22, 4LL, a2 + 72, 4, 0LL);
    }
    v11 = KeAcquireSpinLockRaiseToDpc(v4 + 466);
    v12 = *(int *)(a2 + 4);
    if ( _bittest(&UsbhLogMask, 0xDu) )
    {
      if ( a1 )
      {
        v13 = *(_QWORD *)(a1 + 64);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
          *(_DWORD *)v14 = 827618148;
          *(_QWORD *)(v14 + 8) = 0LL;
          *(_QWORD *)(v14 + 16) = a2;
          *(_QWORD *)(v14 + 24) = v12;
        }
      }
    }
    v15 = *(int *)(a2 + 4);
    if ( (_DWORD)v15 == 1 )
    {
      if ( _bittest(&UsbhLogMask, 0xDu) )
      {
        if ( a1 )
        {
          v18 = *(_QWORD *)(a1 + 64);
          if ( v18 )
          {
            v19 = *(_QWORD *)(v18 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
            *(_DWORD *)v19 = 844395364;
            *(_QWORD *)(v19 + 8) = 0LL;
            *(_QWORD *)(v19 + 16) = a2;
            *(_QWORD *)(v19 + 24) = v15;
          }
        }
      }
      v20 = *(_QWORD *)(a2 + 56);
      if ( *(_QWORD *)(v20 + 8) != a2 + 56 || (v21 = *(_QWORD **)(a2 + 64), *v21 != a2 + 56) )
        __fastfail(3u);
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
    }
    else if ( _bittest(&UsbhLogMask, 0xDu) && a1 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
        *(_DWORD *)v17 = 861172580;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 16) = a2;
        *(_QWORD *)(v17 + 24) = v15;
      }
    }
    *(_DWORD *)(a2 + 4) = 0;
    KeReleaseSpinLock(v4 + 466, v11);
  }
}
