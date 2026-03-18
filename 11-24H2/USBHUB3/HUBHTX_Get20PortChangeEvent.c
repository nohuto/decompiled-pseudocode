/*
 * XREFs of HUBHTX_Get20PortChangeEvent @ 0x140003710
 * Callers:
 *     HUBPSM20_EnablingInterruptsAndGettingPortEvent @ 0x1400128A0 (HUBPSM20_EnablingInterruptsAndGettingPortEvent.c)
 *     HUBPSM20_GettingPortChangeEventInSuspended @ 0x140012A10 (HUBPSM20_GettingPortChangeEventInSuspended.c)
 * Callees:
 *     McTemplateK0qhhhqhhh_EtwWriteTransfer @ 0x1400068B4 (McTemplateK0qhhhqhhh_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dDDD @ 0x140007288 (WPP_RECORDER_SF_dDDD.c)
 *     HUBMISC_VerifierDbgBreak @ 0x140034050 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x140035284 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBHTX_Get20PortChangeEvent(_BYTE *a1)
{
  _QWORD *v1; // r14
  _WORD *v2; // rax
  unsigned __int16 v3; // bx
  __int16 v4; // si
  __int16 v5; // di
  __int16 v6; // r15
  __int16 v7; // r12
  __int16 v8; // r13
  unsigned int v9; // ebp
  int v10; // edx
  int v11; // r9d

  v1 = a1;
  if ( a1[1457] )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
      WdfDriverGlobals,
      *(_QWORD *)(*(_QWORD *)a1 + 16LL),
      0LL,
      3068LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
    *((_BYTE *)v1 + 1457) = 0;
  }
  v2 = (_WORD *)v1[166];
  v3 = *((_WORD *)v1 + 92);
  v4 = *((_WORD *)v1 + 96);
  v5 = *((_WORD *)v1 + 97);
  *((_WORD *)v1 + 96) = v3;
  if ( v2 )
  {
    v6 = v2[1002];
    v7 = v2[1003];
    v8 = v2[1004];
  }
  else
  {
    LOBYTE(v6) = 0;
    LOBYTE(v7) = 0;
    LOBYTE(v8) = 0;
  }
  v9 = 3041;
  v10 = 4;
  if ( (v3 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*v1, 4LL, &WPP_RECORDER_INITIALIZED);
    goto LABEL_10;
  }
  if ( (v5 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*v1, 4LL, &WPP_RECORDER_INITIALIZED);
    if ( (v4 & 8) != 0 )
    {
LABEL_11:
      if ( (*(_DWORD *)(*v1 + 2608LL) & 0x200) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", v1 + 34);
      if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
        McTemplateK0qhhhqhhh_EtwWriteTransfer(
          (_DWORD)a1,
          v10,
          *(_DWORD *)v1 + 2428,
          *((unsigned __int16 *)v1 + 100),
          v4,
          v3,
          v5,
          v9,
          v6,
          v7,
          v8);
      goto LABEL_48;
    }
LABEL_10:
    v9 = 3065;
    *((_DWORD *)v1 + 356) = 4;
    goto LABEL_11;
  }
  if ( (v3 & 0x100) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_48;
    v11 = 72;
    goto LABEL_18;
  }
  if ( (v5 & 1) != 0 || (LODWORD(a1) = v3, LOWORD(a1) = v3 & 1, (_WORD)a1 != (v4 & 1)) )
  {
    v9 = 3017;
    goto LABEL_48;
  }
  if ( (v3 & 0x10) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_48;
    v11 = 73;
    goto LABEL_18;
  }
  if ( (v3 & 1) == 0 )
  {
    if ( (v3 & 2) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_48;
      v11 = 74;
    }
    else
    {
      if ( (v3 & 4) == 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_48;
      v11 = 75;
    }
LABEL_18:
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_(v1[179], v10, 4, v11, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids);
    goto LABEL_48;
  }
  if ( (v5 & 0x10) != 0 )
  {
    if ( (v3 & 2) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_48;
      v11 = 76;
      goto LABEL_18;
    }
    if ( (v3 & 4) == 0 )
    {
      v9 = 3073;
      goto LABEL_48;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 77;
      goto LABEL_18;
    }
  }
  else
  {
    if ( (v5 & 4) == 0 )
      goto LABEL_48;
    if ( (v3 & 2) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_48;
      v11 = 78;
      goto LABEL_18;
    }
    if ( (v3 & 4) == 0 )
    {
      v9 = 3085;
      goto LABEL_48;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 79;
      goto LABEL_18;
    }
  }
LABEL_48:
  *((_DWORD *)v1 + 2) = v9;
  if ( v9 == 3017 && (v3 & 1) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dDDD(
        v1[179],
        v10,
        4,
        80,
        (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids,
        *((_WORD *)v1 + 100),
        v4,
        v3,
        v5);
    if ( (*(_DWORD *)(*v1 + 2608LL) & 0x400) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", v1 + 34);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_(v1[179], v10, 4, 81, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids);
    }
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0qhhhqhhh_EtwWriteTransfer(
        (_DWORD)a1,
        v10,
        *(_DWORD *)v1 + 2428,
        *((unsigned __int16 *)v1 + 100),
        v4,
        v3,
        v5,
        201,
        v6,
        v7,
        v8);
  }
  return v9;
}
