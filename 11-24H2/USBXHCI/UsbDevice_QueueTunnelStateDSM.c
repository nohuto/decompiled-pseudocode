/*
 * XREFs of UsbDevice_QueueTunnelStateDSM @ 0x14004DB7C
 * Callers:
 *     UsbDevice_UcxEvtUpdate @ 0x14003B700 (UsbDevice_UcxEvtUpdate.c)
 *     UsbDevice_UpdateCompletion @ 0x14003BB80 (UsbDevice_UpdateCompletion.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

char __fastcall UsbDevice_QueueTunnelStateDSM(__int64 a1, __int64 a2)
{
  char v4; // dl
  __int64 *v5; // rax
  int v6; // edx
  _QWORD *v7; // rax
  __int128 v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+40h] [rbp-40h]
  int v11; // [rsp+48h] [rbp-38h] BYREF
  __int128 v12; // [rsp+4Ch] [rbp-34h]
  int v13; // [rsp+5Ch] [rbp-24h]
  int v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+64h] [rbp-1Ch]
  __int64 v16; // [rsp+68h] [rbp-18h]
  __int64 v17; // [rsp+70h] [rbp-10h]
  void *v18; // [rsp+78h] [rbp-8h]
  __int64 v19; // [rsp+90h] [rbp+10h] BYREF

  v19 = 0LL;
  v4 = (*(_DWORD *)(a2 + 24) & 0x80) != 0;
  DWORD1(v9) = 0;
  LODWORD(v12) = 0;
  Debug_FreAssertMsg(
    (__int64)"Attempting to queue Tunnel State DSM without an update to the tunnel state",
    v4,
    (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
    1737);
  Debug_FreAssertMsg(
    (__int64)"Attempting to queue Tunnel State DSM on an unsupported machine",
    (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 744LL) & 0x10000000LL) != 0,
    (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
    1738);
  v10 = 0LL;
  v9 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x43 )
      LODWORD(v9) = -1;
    else
      LODWORD(v9) = *(_DWORD *)(WdfStructures + 536);
  }
  else
  {
    LODWORD(v9) = 24;
  }
  v13 = 0;
  v17 = 0LL;
  *((_QWORD *)&v9 + 1) = UsbDevice_RunUpdateTunnelStateDsm;
  LOBYTE(v10) = 1;
  v12 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      v11 = -1;
    else
      v11 = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    v11 = 56;
  }
  v18 = off_14006B060;
  v5 = *(__int64 **)(a1 + 8);
  v14 = 1;
  v15 = 1;
  v16 = *v5;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, int *, __int64 *))(WdfFunctions_01033 + 3032))(
         WdfDriverGlobals,
         &v9,
         &v11,
         &v19) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v6,
        12,
        33,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        *(_DWORD *)(a1 + 44));
    }
    *(_BYTE *)(a2 + 67) = 4;
    return 0;
  }
  else
  {
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     v19,
                     off_14006B060);
    v7[2] = *(_QWORD *)(a1 + 432);
    *v7 = a1;
    v7[1] = a2;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3040))(WdfDriverGlobals, v19);
    return 1;
  }
}
