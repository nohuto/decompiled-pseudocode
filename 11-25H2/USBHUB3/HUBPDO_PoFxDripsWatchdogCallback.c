/*
 * XREFs of HUBPDO_PoFxDripsWatchdogCallback @ 0x140019820
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqhhh_EtwWriteTransfer @ 0x14001CD30 (McTemplateK0pqhhh_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

void __fastcall HUBPDO_PoFxDripsWatchdogCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  NTSTATUS v4; // eax
  _UNKNOWN **v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rax
  int v8; // eax
  _UNKNOWN **v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rax
  NTSTATUS v12; // [rsp+30h] [rbp-11h]
  int v13; // [rsp+30h] [rbp-11h]
  _QWORD v14[3]; // [rsp+48h] [rbp+7h] BYREF
  int v15; // [rsp+60h] [rbp+1Fh] BYREF
  __int128 v16; // [rsp+64h] [rbp+23h]
  int v17; // [rsp+74h] [rbp+33h]
  int v18; // [rsp+78h] [rbp+37h]
  int v19; // [rsp+7Ch] [rbp+3Bh]
  __int64 v20; // [rsp+80h] [rbp+3Fh]
  __int64 v21; // [rsp+88h] [rbp+47h]
  void *v22; // [rsp+90h] [rbp+4Fh]
  __int64 v23; // [rsp+B0h] [rbp+6Fh] BYREF

  v2 = *(_QWORD *)(a2 + 64);
  v23 = 0LL;
  LODWORD(v16) = 0;
  HIDWORD(v14[0]) = 0;
  v4 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 424), "DRIPS SR Tag", File, 1u, 0x20u);
  if ( v4 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      v7,
      "DRIPS SR Tag",
      11824LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
    v17 = 0;
    v21 = 0LL;
    v22 = off_14006C1C0;
    v16 = 0LL;
    v15 = 56;
    v18 = 1;
    v19 = 1;
    v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
    v14[2] = 1LL;
    v14[0] = 24LL;
    v14[1] = HUBPDO_EvtWorkItemDripsWatchDogCallback;
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, int *, __int64 *))(WdfFunctions_01015 + 3032))(
           WdfDriverGlobals,
           v14,
           &v15,
           &v23);
    if ( v8 >= 0 )
    {
      *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v23,
                   off_14006C1C0) = a2;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v23);
    }
    else
    {
      v9 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = v8;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 1432LL),
          2u,
          2u,
          0xADu,
          (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
          v13);
      }
      if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
      {
        v10 = *(_QWORD *)(v2 + 24);
        McTemplateK0pqhhh_EtwWriteTransfer(
          (_DWORD)v9,
          (unsigned int)&USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE,
          v10 + 1516,
          *(_QWORD *)(v10 + 24),
          10,
          *(_WORD *)(v10 + 1996),
          *(_WORD *)(v10 + 1998),
          *(_WORD *)(v10 + 2000));
      }
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1648))(
        WdfDriverGlobals,
        v11,
        "DRIPS SR Tag",
        11852LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 424), "DRIPS SR Tag", 0x20u);
    }
  }
  else
  {
    v5 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 1432LL),
        2u,
        2u,
        0xACu,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
        v12);
    }
    if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
    {
      v6 = *(_QWORD *)(v2 + 24);
      McTemplateK0pqhhh_EtwWriteTransfer(
        (_DWORD)v5,
        (unsigned int)&USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE,
        v6 + 1516,
        *(_QWORD *)(v6 + 24),
        9,
        *(_WORD *)(v6 + 1996),
        *(_WORD *)(v6 + 1998),
        *(_WORD *)(v6 + 2000));
    }
  }
}
