/*
 * XREFs of UsbhSshSuspendHub @ 0x140013464
 * Callers:
 *     Usbh_SSH_HubActive @ 0x14000C160 (Usbh_SSH_HubActive.c)
 * Callees:
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     Usbh_SSH_Event @ 0x14000A9E0 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14000D0C0 (UsbhEtwWrite.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140012820 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhSyncBusPause @ 0x14001397C (UsbhSyncBusPause.c)
 *     UsbhArmHubWakeOnConnect @ 0x140013A7C (UsbhArmHubWakeOnConnect.c)
 *     UsbhDisableTimerObject @ 0x140013F2C (UsbhDisableTimerObject.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x140014314 (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhSyncBusResume @ 0x14001E040 (UsbhSyncBusResume.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhEnableTimerObject @ 0x14002C5D0 (UsbhEnableTimerObject.c)
 *     __security_check_cookie @ 0x140060F40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhSshSuspendHub(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  struct _KEVENT *v4; // r15
  int v5; // eax
  void *DeviceExtension; // rdx
  __int64 v7; // rcx
  __int64 v8; // r12
  _DWORD *v9; // rdx
  __int128 *v10; // r8
  __int64 v11; // r9
  unsigned __int16 *v12; // rcx
  int v13; // eax
  _DWORD *v14; // rax
  int v15; // esi
  _DWORD *v16; // r8
  __int128 *v17; // rdx
  unsigned __int16 *v18; // rcx
  int v19; // eax
  __int64 v20; // r9
  __int64 v22; // r9
  _DWORD *v23; // rax
  __int64 v24; // r9
  __int64 v25; // r9
  int v26; // [rsp+60h] [rbp-59h] BYREF
  int v27; // [rsp+68h] [rbp-51h] BYREF
  unsigned int v28; // [rsp+70h] [rbp-49h] BYREF
  __int16 v29; // [rsp+78h] [rbp-41h] BYREF
  __int16 v30; // [rsp+7Ah] [rbp-3Fh]
  int v31; // [rsp+7Ch] [rbp-3Dh]
  int v32; // [rsp+80h] [rbp-39h]
  __int128 v33; // [rsp+84h] [rbp-35h] BYREF
  __int64 v34; // [rsp+94h] [rbp-25h]
  int v35; // [rsp+A0h] [rbp-19h] BYREF
  __int16 v36; // [rsp+A4h] [rbp-15h]
  __int16 v37; // [rsp+A6h] [rbp-13h]
  __int16 v38; // [rsp+A8h] [rbp-11h]
  __int16 v39; // [rsp+AAh] [rbp-Fh]
  int v40; // [rsp+B0h] [rbp-9h] BYREF
  __int16 v41; // [rsp+B4h] [rbp-5h]
  __int16 v42; // [rsp+B6h] [rbp-3h]
  __int16 v43; // [rsp+B8h] [rbp-1h]
  __int16 v44; // [rsp+BAh] [rbp+1h]
  __int128 v45; // [rsp+C0h] [rbp+7h]

  v28 = 0;
  v4 = (struct _KEVENT *)FdoExt((__int64)a1);
  v5 = UsbhFdoCheckUpstreamConnectionState((__int64)a1, &v28);
  if ( (v5 & 0xC0000000) == 0xC0000000 )
  {
    Log((_DWORD)a1, 0x10000, 1400198008, 0, v5);
    LOBYTE(v4[142].Header.WaitListHead.Flink) = 1;
    Usbh_SSH_Event((__int64)a1, (unsigned int)(v24 + 3), a2, v24);
    KeSetEvent(v4 + 141, 0, 0);
    return 3221225473LL;
  }
  else
  {
    if ( (UsbhLogMask & 0x10000) != 0 )
    {
      if ( a1 )
      {
        DeviceExtension = a1->DeviceExtension;
        if ( DeviceExtension )
        {
          v26 = 1215526227;
          v7 = *((_QWORD *)DeviceExtension + 111)
             + 32LL
             * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
          *(_DWORD *)v7 = 1215526227;
          *(_QWORD *)(v7 + 8) = 0LL;
          *(_QWORD *)(v7 + 16) = a2;
          *(_QWORD *)(v7 + 24) = 0LL;
        }
      }
    }
    v26 = 0;
    v27 = 0;
    v33 = 0LL;
    v34 = 0LL;
    v8 = 5LL;
    v45 = 0LL;
    if ( dword_14006F6D0 )
    {
      v9 = FdoExt((__int64)a1);
      v10 = &v33;
      v11 = 5LL;
      v35 = v9[1298];
      v36 = *((_WORD *)v9 + 2598);
      v37 = v9[1300];
      v38 = *((_WORD *)v9 + 2614);
      v39 = *((_WORD *)v9 + 2615);
      v29 = *((_WORD *)v9 + 1274);
      v30 = *((_WORD *)v9 + 1275);
      v12 = (unsigned __int16 *)v9 + 2605;
      v31 = 0;
      v32 = *((unsigned __int16 *)v9 + 2604);
      v31 = *((_WORD *)v9 + 2604) != 0;
      do
      {
        v13 = *v12;
        *(_DWORD *)v10 = v13;
        if ( v13 )
          ++v31;
        v10 = (__int128 *)((char *)v10 + 4);
        ++v12;
        --v11;
      }
      while ( v11 );
      HIDWORD(v34) = v9[634];
      UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_SUSPEND_START, 0LL, &v35, 12LL, &v29, 36LL, &v27, 4LL, &v26, 4LL, 0LL);
    }
    UsbhArmHubWakeOnConnect(a1);
    if ( (unsigned int)UsbhSyncBusPause(a1, a2, 2LL) == 4 )
    {
      v14 = FdoExt((__int64)a1);
      if ( *((_QWORD *)v14 + 590) )
        v15 = (*((__int64 (__fastcall **)(_QWORD))v14 + 590))(*((_QWORD *)v14 + 149));
      else
        v15 = -1073741637;
      v33 = 0LL;
      v27 = v15;
      v45 = 0LL;
      v26 = 0;
      v34 = 0LL;
      if ( dword_14006F6D0 )
      {
        v16 = FdoExt((__int64)a1);
        v17 = &v33;
        v40 = v16[1298];
        v41 = *((_WORD *)v16 + 2598);
        v42 = v16[1300];
        v43 = *((_WORD *)v16 + 2614);
        v44 = *((_WORD *)v16 + 2615);
        v29 = *((_WORD *)v16 + 1274);
        v30 = *((_WORD *)v16 + 1275);
        v18 = (unsigned __int16 *)v16 + 2605;
        v31 = 0;
        v32 = *((unsigned __int16 *)v16 + 2604);
        v31 = *((_WORD *)v16 + 2604) != 0;
        do
        {
          v19 = *v18;
          *(_DWORD *)v17 = v19;
          if ( v19 )
            ++v31;
          v17 = (__int128 *)((char *)v17 + 4);
          ++v18;
          --v8;
        }
        while ( v8 );
        HIDWORD(v34) = v16[634];
        UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE, 0LL, &v40, 12LL, &v29, 36LL, &v26, 4LL, &v27, 4LL, 0LL);
      }
      if ( v15 < 0 )
      {
        UsbhSyncBusResume(a1, a2);
        UsbhDisarmHubWakeOnConnect(a1);
        Usbh_SSH_Event((__int64)a1, 3LL, a2, v22);
        KeSetEvent(v4 + 141, 0, 0);
        UsbhException((__int64)a1, 0LL, 136LL, 0LL, 0, v15, 0, usbfile_sshub_c, 2280, 0);
        v23 = FdoExt((__int64)a1);
        UsbhEnableTimerObject((_DWORD)a1, (_DWORD)v4 + 3200, v4[219].Header.LockNV, 0, (__int64)(v23 + 478), 2001228627);
      }
      else
      {
        UsbhDisableTimerObject(a1, &v4[133].Header.WaitListHead);
        Usbh_SSH_Event((__int64)a1, 2LL, a2, v20);
      }
    }
    else
    {
      v15 = -1073741823;
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_BUS_PAUSE_FAILED, 0, -1073741823);
      UsbhDisarmHubWakeOnConnect(a1);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE, 0, -1073741823);
      LOBYTE(v4[142].Header.WaitListHead.Flink) = 1;
      Usbh_SSH_Event((__int64)a1, 3LL, a2, v25);
      KeSetEvent(v4 + 141, 0, 0);
    }
    return (unsigned int)v15;
  }
}
