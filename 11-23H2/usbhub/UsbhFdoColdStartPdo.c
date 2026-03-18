/*
 * XREFs of UsbhFdoColdStartPdo @ 0x1C00222BC
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C000FBD0 (UsbhFdoSetD0Cold.c)
 * Callees:
 *     UsbhEtwLogHubIrpEvent @ 0x1C00098E0 (UsbhEtwLogHubIrpEvent.c)
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhQueryPortState @ 0x1C0016540 (UsbhQueryPortState.c)
 *     Usb_Disconnected @ 0x1C0029920 (Usb_Disconnected.c)
 *     UsbhFlushPortChange @ 0x1C002B22C (UsbhFlushPortChange.c)
 *     WPP_RECORDER_SF_q @ 0x1C002EA5C (WPP_RECORDER_SF_q.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0034FA8 (UsbhQueueSoftConnectChange.c)
 *     UsbhWaitForBootDevice @ 0x1C003A608 (UsbhWaitForBootDevice.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoColdStartPdo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v7; // r13
  _DWORD *v8; // r15
  __int64 PortState; // rbx
  int v10; // edx
  int v11; // r11d
  unsigned __int16 v12; // ax
  __int64 v13; // r10
  int v14; // r11d
  _DWORD *v15; // rax
  int v17; // r9d
  __int64 v18; // rcx
  int v19; // eax
  _DWORD *v20; // r14
  int v21; // eax
  int v22; // ecx
  bool v23; // zf
  char v24; // al
  int v25; // [rsp+40h] [rbp-20h]
  int v26[4]; // [rsp+50h] [rbp-10h] BYREF
  int v27; // [rsp+A8h] [rbp+48h] BYREF

  v27 = 0;
  v26[0] = 0;
  v7 = FdoExt(a1);
  v8 = PdoExt(a3);
  PortState = (int)UsbhQueryPortState(a1, *(_WORD *)(a4 + 4), (__int64)&v27, v26);
  Log(a1, 16, 1667518513, *(unsigned __int16 *)(a4 + 4), PortState);
  if ( (PortState & 0xC0000000) == 0xC0000000 )
  {
    Log(a1, v11, 1668035141, 0LL, PortState);
    if ( !(unsigned __int8)Usb_Disconnected((unsigned int)PortState) )
    {
      v25 = 3079;
LABEL_13:
      UsbhException(a1, *(unsigned __int16 *)(a4 + 4), 48, v17, 0, PortState, v26[0], usbfile_fdopwr_c, v25, 0);
      return (unsigned int)PortState;
    }
LABEL_11:
    v18 = a1;
    goto LABEL_12;
  }
  if ( !*((_BYTE *)v8 + 2740) )
  {
LABEL_3:
    v12 = v27;
    goto LABEL_4;
  }
  v12 = v27;
  if ( (v27 & 1) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        3,
        26,
        (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids,
        a1);
      v11 = 16;
    }
    Log(a1, v11, 1397899853, 0LL, a1);
    UsbhWaitForBootDevice(a1, a3, 1LL, 0xFFFFFFFFLL);
    v19 = UsbhQueryPortState(a1, *(_WORD *)(a4 + 4), (__int64)&v27, v26);
    LODWORD(PortState) = v19;
    if ( (v19 & 0xC0000000) != 0xC0000000 )
    {
      v11 = 16;
      goto LABEL_3;
    }
    Log(a1, 16, 1668035397, 0LL, v19);
    if ( !(unsigned __int8)Usb_Disconnected((unsigned int)PortState) )
    {
      v25 = 3120;
      goto LABEL_13;
    }
    goto LABEL_11;
  }
LABEL_4:
  Log(a1, v11, 1667510577, v12, HIWORD(v27));
  if ( (v27 & 1) == 0 )
  {
    Log(a1, v14, 1667518516, *(unsigned __int16 *)(a4 + 4), 0LL);
    if ( (v27 & 0x10000) != 0 )
    {
      LODWORD(PortState) = 0;
    }
    else
    {
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_PORT_DISCONNECT);
      UsbhException(a1, *(unsigned __int16 *)(a4 + 4), 127, 0, 0, 0, 0, usbfile_fdopwr_c, 3197, 0);
      UsbhQueueSoftConnectChange(a1);
      Log(a1, 16, 1667518517, *(unsigned __int16 *)(a4 + 4), (int)PortState);
    }
    return (unsigned int)PortState;
  }
  if ( (v27 & 0x10000) == 0 )
  {
    if ( (v8[355] & 0x8000000) == 0 )
    {
      Log(a1, v14, 1667518515, *(unsigned __int16 *)(a4 + 4), v13);
      v15 = PdoExt(a3);
      v15[355] |= 0x4000u;
      LODWORD(PortState) = 0;
    }
    return (unsigned int)PortState;
  }
  Log(a1, v14, 1667518514, *(unsigned __int16 *)(a4 + 4), 0LL);
  v20 = PdoExt(a3);
  v21 = UsbhFlushPortChange(a1, *(unsigned __int16 *)(a4 + 4), v26);
  LODWORD(PortState) = v21;
  if ( v21 >= 0 )
  {
    v22 = v20[355];
    if ( (v22 & 0x8000000) == 0 )
    {
      v23 = v20[596] == 1;
      v20[355] = v22 | 0x4000;
      if ( v23 )
      {
        UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_PORT_LOST_POWER);
        UsbhException(a1, *(unsigned __int16 *)(a4 + 4), 114, 0, 0, PortState, v26[0], usbfile_fdopwr_c, 3156, 0);
        v20[596] = v7[1054];
      }
      return (unsigned int)PortState;
    }
  }
  v24 = Usb_Disconnected((unsigned int)v21);
  v18 = a1;
  if ( !v24 )
  {
    UsbhException(a1, *(unsigned __int16 *)(a4 + 4), 52, 0, 0, PortState, v26[0], usbfile_fdopwr_c, 3172, 0);
    return (unsigned int)PortState;
  }
LABEL_12:
  UsbhEtwLogHubIrpEvent(v18, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_HUB_DISCONNECT);
  return 0LL;
}
