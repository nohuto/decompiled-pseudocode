/*
 * XREFs of UsbhSshResumeDownstream @ 0x14001DC6C
 * Callers:
 *     Usbh_SSH_HubSuspended @ 0x1400303F4 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResume @ 0x1400310F4 (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x14005E7B8 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhQueryPortState @ 0x140009A20 (UsbhQueryPortState.c)
 *     Usbh_SSH_Event @ 0x14000A9E0 (Usbh_SSH_Event.c)
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhSshResumePort @ 0x1400124DC (UsbhSshResumePort.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x140014314 (UsbhDisarmHubWakeOnConnect.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhSyncBusResume @ 0x14001E040 (UsbhSyncBusResume.c)
 *     UsbhSyncSuspendPdoPort @ 0x14001E27C (UsbhSyncSuspendPdoPort.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhEnableTimerObject @ 0x14002C5D0 (UsbhEnableTimerObject.c)
 */

_DWORD *__fastcall UsbhSshResumeDownstream(__int64 a1, __int64 a2, char a3)
{
  _DWORD *v4; // r14
  struct _KEVENT *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int16 i; // di
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 PortData; // rax
  __int64 v14; // rcx
  unsigned __int16 v15; // bp
  _DWORD *result; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r13d
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdi
  int v23; // edx
  int v24; // eax
  char v25; // r10
  int v26; // r11d
  struct _KEVENT *v27; // rcx
  _DWORD *v28; // rax
  int v29; // eax
  int v30; // edx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-78h]
  __int64 v32; // [rsp+28h] [rbp-70h]
  int v33; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT *v34; // [rsp+58h] [rbp-40h]
  int v35; // [rsp+B0h] [rbp+18h] BYREF
  int v36; // [rsp+B8h] [rbp+20h]

  v4 = 0LL;
  v36 = 0;
  v7 = (struct _KEVENT *)FdoExt(a1);
  v34 = v7;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v35 = 1849979730;
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = v35;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = 0LL;
      }
    }
  }
  for ( i = 1; i <= *((unsigned __int8 *)FdoExt(a1) + 2938); ++i )
  {
    PortData = UsbhGetPortData(a1, i, v11, v12);
    if ( PortData )
    {
      v14 = *(_QWORD *)(PortData + 392);
      if ( v14 )
      {
        v4 = PdoExt(v14);
        KeWaitForSingleObject(v4 + 736, Executive, 0, 0, 0LL);
        if ( (v4[355] & 0x4000000) != 0 )
        {
          v35 = 0;
          v24 = UsbhQueryPortState(a1, i, (__int64)&v35, &v33);
          Log(a1, 0x10000, 1397965875, v24, (unsigned __int16)v35);
          if ( v26 >= 0 && (v25 & 2) == 0 )
          {
            v4[355] |= 0x3000000u;
            v27 = (struct _KEVENT *)(v4 + 730);
            if ( (v25 & 1) != 0 )
              KeSetEvent(v27, 0, 0);
            else
              KeResetEvent(v27);
          }
        }
        KeSetEvent((PRKEVENT)(v4 + 736), 0, 0);
      }
    }
  }
  if ( a3 == 1 )
    UsbhSyncBusResume(a1, a2);
  UsbhDisarmHubWakeOnConnect(a1);
  v15 = 1;
  result = FdoExt(a1);
  if ( *((_BYTE *)result + 2938) )
  {
    v19 = v36;
    do
    {
      v20 = UsbhGetPortData(a1, v15, v17, v18);
      v21 = v20;
      if ( v20 )
      {
        v22 = *(_QWORD *)(v20 + 392);
        if ( !v22 || (v4 = PdoExt(*(_QWORD *)(v20 + 392)), v19 = PdoExt(v22)[282], (v4[355] & 0x1000000) == 0) )
        {
          v23 = UsbhSshResumePort(a1, a2, v21);
          if ( v23 >= 0 && v22 && (v4[355] & 0x8004) == 0 && v19 == 4 )
          {
            *(_DWORD *)(v21 + 2408) |= 2u;
            v28 = PdoExt(v22);
            v29 = UsbhSyncSuspendPdoPort(v28 + 236, v22, 0LL);
            *(_DWORD *)(v21 + 2408) &= ~2u;
            v23 = v29;
          }
          if ( (v23 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v23) )
            UsbhException(a1, v15, 128LL, 0LL, 0, v30, 0, usbfile_sshub_c, 2492, 0);
        }
      }
      ++v15;
      result = FdoExt(a1);
    }
    while ( v15 <= *((unsigned __int8 *)result + 2938) );
    v7 = v34;
  }
  if ( a3 == 1 )
  {
    Usbh_SSH_Event(a1, 7LL, a2, v18);
    LODWORD(v32) = 0;
    LODWORD(Timeout) = 0;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_COMPLETE, Timeout, v32);
    KeSetEvent(v7 + 141, 0, 0);
    return (_DWORD *)UsbhEnableTimerObject(a1, (int)v7 + 3200, v7[219].Header.LockNV, 0, a2, 2001228627);
  }
  return result;
}
