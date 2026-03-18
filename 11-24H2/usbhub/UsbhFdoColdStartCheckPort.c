/*
 * XREFs of UsbhFdoColdStartCheckPort @ 0x1400363A0
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1400227C4 (UsbhFdoSetD0Cold.c)
 * Callees:
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhQueryPortState @ 0x140009A20 (UsbhQueryPortState.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     Log @ 0x1400298B0 (Log.c)
 */

__int64 __fastcall UsbhFdoColdStartCheckPort(__int64 a1, __int64 a2, __int64 a3)
{
  signed int v5; // eax
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  const void *v10; // r9
  __int64 v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+20h] [rbp-48h]
  unsigned int v14; // [rsp+28h] [rbp-40h]
  unsigned int v15; // [rsp+28h] [rbp-40h]
  int v16; // [rsp+80h] [rbp+18h] BYREF
  int v17; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0;
  v17 = 0;
  FdoExt(a1);
  v5 = UsbhQueryPortState(a1, *(unsigned __int16 *)(a3 + 4), (__int64)&v16, &v17);
  v6 = *(unsigned __int16 *)(a3 + 4);
  v7 = v5;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_DWORD *)v9 = 826500195;
        *(_QWORD *)(v9 + 16) = v6;
        *(_QWORD *)(v9 + 24) = v5;
      }
    }
  }
  if ( (v5 & 0xC0000000) == 0xC0000000 )
  {
    Log(a1, 16, 1667515186, 0LL, v5);
    if ( Usb_Disconnected(v7) )
    {
      v14 = v7;
      LODWORD(v12) = (unsigned int)v10 & v12;
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_HUB_DISCONNECT, v12, v14);
      return 0LL;
    }
    UsbhException(
      a1,
      *(unsigned __int16 *)(a3 + 4),
      48LL,
      v10,
      (unsigned int)v10 & v12,
      v7,
      v17,
      usbfile_fdopwr_c,
      3011,
      (char)v10);
  }
  else if ( (v16 & 1) != 0 && (v16 & 0x10000) == 0 )
  {
    Log(a1, 16, 1667515187, 0LL, v5);
    v15 = v7;
    LODWORD(v13) = *(unsigned __int16 *)(a3 + 4);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_PORT_CONNECT, v13, v15);
    *(_BYTE *)(a3 + 2841) = 1;
  }
  return v7;
}
