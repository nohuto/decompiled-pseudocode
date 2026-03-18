/*
 * XREFs of UsbhFdoColdStartPdo @ 0x140022D78
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1400227C4 (UsbhFdoSetD0Cold.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhQueryPortState @ 0x140009A20 (UsbhQueryPortState.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhWaitForBootDevice @ 0x140038CB8 (UsbhWaitForBootDevice.c)
 *     UsbhFlushPortChange @ 0x14003AEC4 (UsbhFlushPortChange.c)
 *     WPP_RECORDER_SF_q @ 0x14003DEE0 (WPP_RECORDER_SF_q.c)
 *     UsbhQueueSoftConnectChange @ 0x1400439CC (UsbhQueueSoftConnectChange.c)
 */

__int64 __fastcall UsbhFdoColdStartPdo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v8; // r13
  _DWORD *v9; // r15
  signed int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // ebx
  __int64 v14; // rcx
  bool v15; // al
  const void *v16; // r9
  unsigned int v17; // r11d
  __int64 v18; // rcx
  unsigned __int16 v20; // ax
  signed int v21; // eax
  bool v22; // al
  const void *v23; // r9
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  _DWORD *v28; // r14
  int v29; // eax
  int v30; // ecx
  bool v31; // zf
  bool v32; // al
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  _DWORD *v36; // rax
  unsigned int v37; // r11d
  __int64 v38; // [rsp+20h] [rbp-40h]
  __int64 v39; // [rsp+20h] [rbp-40h]
  __int64 v40; // [rsp+28h] [rbp-38h]
  int v41; // [rsp+40h] [rbp-20h]
  int v42; // [rsp+50h] [rbp-10h] BYREF
  int v43; // [rsp+54h] [rbp-Ch]
  int v44; // [rsp+A8h] [rbp+48h] BYREF

  v44 = 0;
  v42 = 0;
  v8 = FdoExt(a1);
  v9 = PdoExt(a3);
  v10 = UsbhQueryPortState(a1, *(unsigned __int16 *)(a4 + 4), (__int64)&v44, &v42);
  v12 = *(unsigned __int16 *)(a4 + 4);
  v13 = v10;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v43 = 827352163;
        v14 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v14 = v43;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = v12;
        *(_QWORD *)(v14 + 24) = v10;
      }
    }
  }
  if ( (v10 & 0xC0000000) != 0xC0000000 )
  {
    if ( *((_BYTE *)v9 + 2740) )
    {
      v20 = v44;
      if ( (v44 & 1) != 0 )
        goto LABEL_20;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v11,
          3,
          26,
          (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids,
          a1);
      Log(a1, 16, 1397899853, 0, a1);
      UsbhWaitForBootDevice(a1, a3, 1LL, 0xFFFFFFFFLL);
      v21 = UsbhQueryPortState(a1, *(unsigned __int16 *)(a4 + 4), (__int64)&v44, &v42);
      v13 = v21;
      if ( (v21 & 0xC0000000) == 0xC0000000 )
      {
        Log(a1, 16, 1668035397, 0, v21);
        v22 = Usb_Disconnected(v13);
        v18 = a1;
        if ( v22 )
          goto LABEL_17;
        v24 = 48LL;
        v41 = 3127;
        goto LABEL_32;
      }
    }
    v20 = v44;
LABEL_20:
    v25 = HIWORD(v44);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v26 = *(_QWORD *)(a1 + 64);
        if ( v26 )
        {
          v43 = 825320547;
          v27 = *(_QWORD *)(v26 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
          *(_DWORD *)v27 = v43;
          *(_QWORD *)(v27 + 8) = 0LL;
          *(_QWORD *)(v27 + 16) = v20;
          *(_QWORD *)(v27 + 24) = v25;
          LOBYTE(v20) = v44;
          LOBYTE(v25) = BYTE2(v44);
        }
      }
    }
    if ( (v20 & 1) == 0 )
    {
      Log(a1, 16, 1667518516, *(unsigned __int16 *)(a4 + 4), 0LL);
      if ( (v44 & 0x10000) != 0 )
      {
        return v37;
      }
      else
      {
        LODWORD(v40) = v13;
        LODWORD(v39) = *(unsigned __int16 *)(a4 + 4);
        UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_PORT_DISCONNECT, v39, v40);
        UsbhException(a1, *(unsigned __int16 *)(a4 + 4), 127LL, 0LL, 0, 0, 0, usbfile_fdopwr_c, 3204, 0);
        UsbhQueueSoftConnectChange(a1, *(unsigned __int16 *)(a4 + 4), a2, 0LL);
        Log(a1, 16, 1667518517, *(unsigned __int16 *)(a4 + 4), (int)v13);
      }
      return v13;
    }
    if ( (v25 & 1) == 0 )
    {
      if ( (v9[355] & 0x8000000) == 0 )
      {
        v33 = *(unsigned __int16 *)(a4 + 4);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          if ( a1 )
          {
            v34 = *(_QWORD *)(a1 + 64);
            if ( v34 )
            {
              v43 = 860906595;
              v35 = *(_QWORD *)(v34 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 880)) & *(_DWORD *)(v34 + 884));
              *(_DWORD *)v35 = v43;
              *(_QWORD *)(v35 + 8) = 0LL;
              *(_QWORD *)(v35 + 16) = v33;
              *(_QWORD *)(v35 + 24) = 0LL;
            }
          }
        }
        v36 = PdoExt(a3);
        v36[355] |= 0x4000u;
        return 0;
      }
      return v13;
    }
    Log(a1, 16, 1667518514, *(unsigned __int16 *)(a4 + 4), 0LL);
    v28 = PdoExt(a3);
    v29 = UsbhFlushPortChange(a1, *(unsigned __int16 *)(a4 + 4), &v42);
    v13 = v29;
    if ( v29 >= 0 )
    {
      v30 = v28[355];
      if ( (v30 & 0x8000000) == 0 )
      {
        v31 = v28[596] == 1;
        v28[355] = v30 | 0x4000;
        if ( v31 )
        {
          LODWORD(v40) = v29;
          LODWORD(v38) = *(unsigned __int16 *)(a4 + 4);
          UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_PORT_LOST_POWER, v38, v40);
          UsbhException(a1, *(unsigned __int16 *)(a4 + 4), 114LL, 0LL, 0, v13, v42, usbfile_fdopwr_c, 3163, 0);
          v28[596] = v8[1054];
        }
        return v13;
      }
    }
    v32 = Usb_Disconnected(v29);
    v18 = a1;
    if ( v32 )
    {
LABEL_17:
      LODWORD(v40) = v13;
      LODWORD(v38) = 0;
      goto LABEL_8;
    }
    v23 = 0LL;
    v41 = 3179;
    v24 = 52LL;
LABEL_32:
    UsbhException(v18, *(unsigned __int16 *)(a4 + 4), v24, v23, 0, v13, v42, usbfile_fdopwr_c, v41, 0);
    return v13;
  }
  Log(a1, 16, 1668035141, 0, v10);
  v15 = Usb_Disconnected(v13);
  v18 = a1;
  if ( v15 )
  {
    LODWORD(v40) = v13;
    LODWORD(v38) = v17;
LABEL_8:
    UsbhEtwLogHubIrpEvent(v18, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_HUB_DISCONNECT, v38, v40);
    return 0LL;
  }
  UsbhException(a1, *(unsigned __int16 *)(a4 + 4), 48LL, v16, v17, v13, v42, usbfile_fdopwr_c, 3086, v17);
  return v13;
}
