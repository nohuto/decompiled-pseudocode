/*
 * XREFs of HUBMISC_CreateNewDSM @ 0x14002F060
 * Callers:
 *     HUBPSM30_CreatingDeviceInConnectedWithResetInProgress @ 0x1400126F0 (HUBPSM30_CreatingDeviceInConnectedWithResetInProgress.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FE8 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x14001E0EC (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     memset @ 0x140046900 (memset.c)
 */

__int64 __fastcall HUBMISC_CreateNewDSM(__int64 *a1)
{
  __int64 v2; // rdi
  NTSTATUS v3; // r13d
  int v4; // eax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // r12
  int v12; // eax
  unsigned __int16 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 Timer; // rax
  int v17; // edx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // edx
  int v22; // eax
  const GUID *v23; // r8
  unsigned int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v28; // [rsp+28h] [rbp-49h]
  __int64 v29; // [rsp+30h] [rbp-41h]
  __int128 v30; // [rsp+48h] [rbp-29h] BYREF
  __int128 v31; // [rsp+58h] [rbp-19h]
  __int64 v32; // [rsp+68h] [rbp-9h]
  __int128 v33; // [rsp+70h] [rbp-1h] BYREF
  __int64 (__fastcall *v34)(); // [rsp+80h] [rbp+Fh]
  __int64 v35; // [rsp+88h] [rbp+17h]
  __int128 v36; // [rsp+90h] [rbp+1Fh]
  void *v37; // [rsp+A0h] [rbp+2Fh]
  __int64 v38; // [rsp+E0h] [rbp+6Fh] BYREF

  HIDWORD(v35) = 1;
  v38 = 0LL;
  v33 = 0x38uLL;
  *((_QWORD *)&v36 + 1) = 0LL;
  v2 = 0LL;
  LODWORD(v32) = 0;
  v3 = -1073741823;
  v37 = off_14006C0D0;
  v30 = 0LL;
  v31 = 0LL;
  *(_QWORD *)&v36 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(
                      WdfDriverGlobals,
                      a1);
  LODWORD(v35) = 2;
  v34 = HUBMISC_EvtDsmDestroy;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64 *))(WdfFunctions_01015 + 1656))(
         WdfDriverGlobals,
         &v33,
         &v38);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(a1[179], 2u, 4u, 0x2Eu, (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids, v4);
    v38 = 0LL;
    goto LABEL_33;
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v7,
    "DSM Create Tag",
    6962LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v38,
         off_14006C0D0);
  memset((void *)v2, 0, 0xAB0uLL);
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_14006C1E8)
                  + 4) & 0x1000) != 0 )
    v3 = EtwActivityIdControl(3u, (LPGUID)(v2 + 1524));
  *(_QWORD *)(v2 + 8) = a1;
  v8 = *a1;
  *(_WORD *)(v2 + 2720) = 0;
  *(_QWORD *)v2 = v8;
  *(_DWORD *)(v2 + 2724) = 259;
  *(_DWORD *)(v2 + 2728) = 0x40000000;
  v9 = *((unsigned int *)a1 + 51);
  if ( (v9 & 1) != 0 )
    _InterlockedAnd((volatile signed __int32 *)(v2 + 1640), 0xFFFFFFDF);
  else
    _InterlockedOr((volatile signed __int32 *)(v2 + 1640), 0x20u);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x40) != 0 )
  {
    LODWORD(v28) = *((unsigned __int16 *)a1 + 100);
    McTemplateK0pq_EtwWriteTransfer(
      v9,
      &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_START,
      (const GUID *)(v2 + 1524),
      *(_QWORD *)(*(_QWORD *)v2 + 248LL),
      v28);
  }
  v37 = 0LL;
  v34 = 0LL;
  v35 = 0x100000001LL;
  v33 = 0LL;
  LODWORD(v33) = 56;
  v36 = 0LL;
  *(_QWORD *)&v36 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(
                      WdfDriverGlobals,
                      a1);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
          WdfDriverGlobals,
          *(_QWORD *)(*a1 + 16));
  v11 = (_QWORD *)(v2 + 256);
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64))(WdfFunctions_01015 + 1976))(
          WdfDriverGlobals,
          &v33,
          v10,
          v2 + 256);
  v6 = v12;
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_16:
      *v11 = 0LL;
LABEL_33:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v29) = v6;
        WPP_RECORDER_SF_d(a1[179], 2u, 4u, 0x35u, (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids, v29);
      }
      if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      {
        if ( v2 )
          v23 = (const GUID *)(v2 + 1524);
        else
          v23 = 0LL;
        LODWORD(v28) = v6;
        McTemplateK0pq_EtwWriteTransfer(
          v5,
          &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_FAILED,
          v23,
          *(_QWORD *)(*a1 + 248),
          v28);
      }
      v24 = 3009;
      if ( v2 )
      {
        if ( *(_QWORD *)(v2 + 256) )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
            WdfDriverGlobals,
            *(_QWORD *)(v2 + 256),
            "DSM Tag",
            7395LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
          *(_QWORD *)(v2 + 256) = 0LL;
        }
        v25 = *(_QWORD *)(v2 + 424);
        if ( v25 )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
            WdfDriverGlobals,
            *(_QWORD *)(v2 + 424),
            "DSM Tag",
            7395LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
          *(_QWORD *)(v2 + 424) = 0LL;
        }
        v26 = *(_QWORD *)(v2 + 1552);
        if ( v26 )
        {
          LOBYTE(v25) = 1;
          ExDeleteTimer(v26, v25, 0LL, 0LL);
          *(_QWORD *)(v2 + 1552) = 0LL;
        }
        if ( *(_QWORD *)(v2 + 2424) )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
            WdfDriverGlobals,
            *(_QWORD *)(v2 + 2424),
            "DSM Tag",
            7395LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
          *(_QWORD *)(v2 + 2424) = 0LL;
        }
        if ( *(_QWORD *)(v2 + 440) )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
            WdfDriverGlobals,
            *(_QWORD *)(v2 + 440),
            "DSM Tag",
            7395LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
          *(_QWORD *)(v2 + 440) = 0LL;
        }
        if ( *(_QWORD *)(v2 + 1504) )
        {
          (*(void (**)(void))(*(_QWORD *)v2 + 512LL))();
          *(_QWORD *)(v2 + 1504) = 0LL;
        }
        if ( v38 )
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
      }
      return v24;
    }
    v13 = 47;
LABEL_15:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
      2u,
      5u,
      v13,
      (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
      v12);
    goto LABEL_16;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    *v11,
    "DSM Tag",
    7022LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
  *(_QWORD *)(v2 + 272) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                            WdfDriverGlobals,
                            *v11);
  v37 = 0LL;
  v34 = 0LL;
  v35 = 0x100000001LL;
  v33 = 0LL;
  LODWORD(v33) = 56;
  v36 = 0LL;
  *(_QWORD *)&v36 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(
                      WdfDriverGlobals,
                      a1);
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
          WdfDriverGlobals,
          *(_QWORD *)(*a1 + 16));
  v11 = (_QWORD *)(v2 + 424);
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64))(WdfFunctions_01015 + 1976))(
          WdfDriverGlobals,
          &v33,
          v14,
          v2 + 424);
  v6 = v12;
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    v13 = 48;
    goto LABEL_15;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    *v11,
    "DSM Tag",
    7058LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
  *(_QWORD *)(v2 + 432) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                            WdfDriverGlobals,
                            *v11);
  *(_WORD *)(v2 + 2048) = 1033;
  KeInitializeSpinLock((PKSPIN_LOCK)(v2 + 1352));
  *(_DWORD *)(v2 + 1392) = 0;
  *(_DWORD *)(v2 + 1464) = 0;
  *(_DWORD *)(v2 + 1364) = 4000;
  *(_DWORD *)(v2 + 1496) = 4000;
  v15 = *(_QWORD *)v2;
  *(_QWORD *)(v2 + 1488) = &DSMStateTable;
  *(_QWORD *)(v2 + 1480) = HUBSM_AddDsmEvent;
  *(_QWORD *)(v2 + 1472) = v2;
  *(_QWORD *)(v2 + 1544) = *(_QWORD *)(v15 + 248);
  *(_QWORD *)(v2 + 1512) = v15;
  *(_QWORD *)(v2 + 2608) = v2 + 2616;
  *(_DWORD *)(v2 + 2600) = 288;
  Timer = ExAllocateTimer(HUBMISC_DsmEventTimer, v2, 4LL);
  *(_QWORD *)(v2 + 1552) = Timer;
  if ( Timer )
  {
    v37 = 0LL;
    v34 = 0LL;
    v33 = 0LL;
    LODWORD(v33) = 56;
    v36 = 0LL;
    v35 = 0x100000001LL;
    v11 = (_QWORD *)(v2 + 2424);
    *(_QWORD *)&v36 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(
                        WdfDriverGlobals,
                        a1);
    LODWORD(v35) = 2;
    v32 = 0LL;
    v31 = 0LL;
    LODWORD(v31) = 0;
    DWORD2(v31) = 0;
    *((_QWORD *)&v30 + 1) = HUBPDO_EvtOutOfBandwidthTimer;
    *(_QWORD *)&v30 = 40LL;
    BYTE4(v31) = 1;
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01015 + 2544))(
            WdfDriverGlobals,
            &v30,
            &v33,
            v2 + 2424);
    v6 = v12;
    if ( v12 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_16;
      v13 = 50;
      goto LABEL_15;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      *v11,
      "DSM Tag",
      7153LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    KeInitializeEvent((PRKEVENT)(v2 + 1592), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v2 + 1616), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v2 + 480), NotificationEvent, 0);
    v18 = *(_QWORD *)v2;
    v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(
            WdfDriverGlobals,
            *(_QWORD *)(*(_QWORD *)v2 + 16LL));
    v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v18 + 504))(*(_QWORD *)(v18 + 248), v19, 1LL);
    *(_QWORD *)(v2 + 1504) = v20;
    if ( !v20 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
          v21,
          5,
          51,
          (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
      }
      v6 = -1073741670;
      goto LABEL_33;
    }
    v37 = 0LL;
    v34 = 0LL;
    v35 = 0x100000001LL;
    v33 = 0LL;
    LODWORD(v33) = 56;
    v36 = 0LL;
    *(_QWORD *)&v36 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(
                        WdfDriverGlobals,
                        a1);
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64, _QWORD))(WdfFunctions_01015 + 1536))(
            WdfDriverGlobals,
            &v33,
            (unsigned int)ExDefaultNonPagedPoolType,
            1681082453LL,
            96LL,
            v2 + 440,
            0LL);
    v6 = v22;
    if ( v22 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v29) = v22;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
          2u,
          5u,
          0x34u,
          (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
          v29);
      }
      goto LABEL_33;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      *(_QWORD *)(v2 + 440),
      "DSM Tag",
      7211LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    KeInitializeSpinLock((PKSPIN_LOCK)(v2 + 40));
    a1[166] = v2;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
      v17,
      3,
      49,
      (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
  }
  if ( v3 >= 0 )
  {
    if ( g_IoSetActivityIdIrp )
    {
      g_IoSetActivityIdIrp(*(_QWORD *)(v2 + 272), v2 + 1524);
      if ( g_IoSetActivityIdIrp )
        g_IoSetActivityIdIrp(*(_QWORD *)(v2 + 432), v2 + 1524);
    }
    _InterlockedOr((volatile signed __int32 *)(v2 + 1644), 0x40u);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
      4u,
      4u,
      0x36u,
      (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
      a1,
      v2);
  return 3013;
}
