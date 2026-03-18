/*
 * XREFs of UsbhHardReset_Action @ 0x14004B668
 * Callers:
 *     Usbh_HRS_Queued @ 0x14004BEAC (Usbh_HRS_Queued.c)
 * Callees:
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     Usbh_SSH_Event @ 0x14000A9E0 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000F560 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14000F6F0 (UsbhIncHubBusy.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140012820 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhSyncBusPause @ 0x14001397C (UsbhSyncBusPause.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     UsbhWait @ 0x14001A1D4 (UsbhWait.c)
 *     UsbhFdoSetD0Cold @ 0x1400227C4 (UsbhFdoSetD0Cold.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhSyncBusDisconnect @ 0x140039434 (UsbhSyncBusDisconnect.c)
 */

__int64 __fastcall UsbhHardReset_Action(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  _DWORD *v4; // rsi
  _QWORD *v5; // r14
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v12; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v13; // [rsp+A8h] [rbp+20h] BYREF

  v12 = 20;
  v13 = 0;
  v4 = FdoExt((__int64)a1);
  Log((__int64)a1, 4, 1215460146, 0LL, (__int64)a1);
  v5 = (_QWORD *)UsbhIncHubBusy((__int64)a1, a2, (__int64)a1, 1430418024, 0);
  if ( *((_BYTE *)v4 + 5268) )
    KeWaitForSingleObject(v4 + 846, Executive, 0, 0, 0LL);
  while ( 1 )
  {
    if ( *((_BYTE *)v4 + 5268) )
      _InterlockedExchange(v4 + 1315, 0);
    v6 = UsbhFdoCheckUpstreamConnectionState((__int64)a1, &v13);
    v7 = v6;
    if ( Usb_Disconnected(v6) )
      break;
    UsbhSyncBusPause((__int64)a1, a2, 6);
    UsbhSyncBusDisconnect(a1, a2);
    v4[640] &= ~0x10u;
    LODWORD(v7) = Usbh_SSH_Event((__int64)a1, 4LL, a2, v8);
    if ( (v7 & 0xC0000000) == 0xC0000000 )
      goto LABEL_13;
    v10 = UsbhFdoSetD0Cold(a1, a2, 1);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v4[1238] = 0;
      goto LABEL_13;
    }
    UsbhException((__int64)a1, 0LL, 71LL, &v12, 4u, v10, 0, usbfile_reset_c, 1073, 0);
    if ( (_DWORD)v7 != -1073741637 )
    {
      Log((__int64)a1, 4, 1215460147, v7, (__int64)a1);
      ++v4[1238];
      v4[640] |= 0x10u;
      UsbhWait((__int64)a1, v12);
      v12 *= 2;
      if ( v4[1238] < (unsigned int)qword_14006F5BC )
        continue;
    }
    goto LABEL_13;
  }
  Log((__int64)a1, 4, 1382314851, v7, v13);
LABEL_13:
  if ( (v7 & 0xC0000000) == 0xC0000000 )
  {
    if ( !Usb_Disconnected(v7) )
      UsbhException((__int64)a1, 0LL, 126LL, 0LL, 0, v7, 0, usbfile_reset_c, 1109, 0);
    if ( *((_BYTE *)v4 + 5268) )
      KeBugCheckEx(0xFEu, 0xAuLL, 1uLL, 2uLL, 0LL);
  }
  UsbhDecHubBusy((__int64)a1, v9, v5);
  return (unsigned int)v7;
}
