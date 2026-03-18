/*
 * XREFs of UsbhSshResumeUpstream @ 0x140030B38
 * Callers:
 *     Usbh_SSH_HubSuspended @ 0x1400303F4 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x14005E7B8 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     Usbh_SSH_Event @ 0x14000A9E0 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14000D0C0 (UsbhEtwWrite.c)
 *     UsbhDecHubBusy @ 0x14000F560 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14000F6F0 (UsbhIncHubBusy.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140012820 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhEtwGetHubInfo @ 0x140030E60 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x140060F40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhSshResumeUpstream(__int64 a1, __int64 a2)
{
  _DWORD *v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r14d
  _QWORD *v8; // r15
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-89h]
  __int64 v20; // [rsp+28h] [rbp-81h]
  int v21; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v22; // [rsp+68h] [rbp-41h] BYREF
  int v23; // [rsp+70h] [rbp-39h] BYREF
  int v24; // [rsp+78h] [rbp-31h] BYREF
  __int16 v25; // [rsp+7Ch] [rbp-2Dh]
  __int16 v26; // [rsp+7Eh] [rbp-2Bh]
  __int16 v27; // [rsp+80h] [rbp-29h]
  __int16 v28; // [rsp+82h] [rbp-27h]
  _OWORD v29[2]; // [rsp+88h] [rbp-21h] BYREF
  int v30; // [rsp+A8h] [rbp-1h]
  __int128 v31; // [rsp+B0h] [rbp+7h]

  v22 = 0;
  v4 = FdoExt(a1);
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        v21 = 1884648274;
        v6 = *(_QWORD *)(v5 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
        *(_DWORD *)v6 = 1884648274;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 16) = a2;
        *(_QWORD *)(v6 + 24) = 0LL;
      }
    }
  }
  v7 = UsbhFdoCheckUpstreamConnectionState(a1, &v22);
  v8 = (_QWORD *)UsbhIncHubBusy(a1, a2, a1, 1347777128, 0);
  if ( v7 >= 0 )
  {
    v9 = FdoExt(a1);
    if ( *((_QWORD *)v9 + 591) )
      v7 = (*((__int64 (__fastcall **)(_QWORD))v9 + 591))(*((_QWORD *)v9 + 149));
    else
      v7 = -1073741637;
  }
  v21 = v7;
  v23 = 0;
  memset(v29, 0, sizeof(v29));
  v30 = 0;
  v31 = 0LL;
  if ( dword_14006F6D0 )
  {
    v10 = FdoExt(a1);
    v24 = v10[1298];
    v25 = *((_WORD *)v10 + 2598);
    v26 = v10[1300];
    v27 = *((_WORD *)v10 + 2614);
    v28 = *((_WORD *)v10 + 2615);
    UsbhEtwGetHubInfo(v10, v29, v11, v12);
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_RESUME_UPSTREAM, 0LL, &v24, 12LL, v29, 36LL, &v23, 4LL, &v21, 4LL, 0LL);
  }
  KeWaitForSingleObject(v4 + 782, Executive, 0, 0, 0LL);
  v13 = v4[781];
  KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 782), 16, 1, 0);
  if ( v13 == 5 )
  {
    Usbh_SSH_Event(a1, 9LL, a2, v15);
    LODWORD(v20) = v7;
    LODWORD(Timeout) = 0;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_COMPLETE, Timeout, v20);
    KeSetEvent((PRKEVENT)v4 + 141, 0, 0);
    UsbhException(a1, 0LL, 137LL, 0LL, 0, v7, 0, usbfile_sshub_c, 2362, 0);
  }
  if ( v8 )
    UsbhDecHubBusy(a1, v14, v8);
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        v21 = 2018866002;
        v17 = *(_QWORD *)(v16 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
        *(_DWORD *)v17 = v21;
        *(_QWORD *)(v17 + 24) = v7;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 16) = 0LL;
      }
    }
  }
  return (unsigned int)v7;
}
