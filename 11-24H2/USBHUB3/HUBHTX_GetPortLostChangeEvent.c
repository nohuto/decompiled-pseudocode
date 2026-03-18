/*
 * XREFs of HUBHTX_GetPortLostChangeEvent @ 0x140004AE8
 * Callers:
 *     HUBPSM20_GettingPortLostChangesOnStart @ 0x140012A30 (HUBPSM20_GettingPortLostChangesOnStart.c)
 * Callees:
 *     McTemplateK0qhhhqhhh_EtwWriteTransfer @ 0x1400068B4 (McTemplateK0qhhhqhhh_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dDDD @ 0x140007288 (WPP_RECORDER_SF_dDDD.c)
 *     HUBMISC_VerifierDbgBreak @ 0x140034050 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x140035284 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBHTX_GetPortLostChangeEvent(_QWORD *a1, __int64 a2, __int64 a3)
{
  _WORD *v3; // rax
  unsigned __int16 v4; // bx
  unsigned __int16 *v5; // r14
  unsigned __int16 v6; // si
  unsigned __int16 v7; // di
  __int16 v8; // r15
  __int16 v9; // r12
  __int64 v10; // rdx
  unsigned int v11; // ebp
  char v12; // r13
  int v14; // eax
  int v15; // edx
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rax
  __int16 v19; // [rsp+B0h] [rbp+18h]

  v3 = (_WORD *)a1[166];
  v4 = *((_WORD *)a1 + 92);
  v5 = (unsigned __int16 *)a1;
  v6 = *((_WORD *)a1 + 96);
  v7 = *((_WORD *)a1 + 93);
  *((_WORD *)a1 + 96) = v4;
  if ( v3 )
  {
    a3 = (unsigned __int16)v3[1004];
    v8 = v3[1002];
    v9 = v3[1003];
    v19 = v3[1004];
  }
  else
  {
    LOBYTE(v8) = 0;
    LOBYTE(v19) = 0;
    LOBYTE(v9) = 0;
  }
  v10 = v4;
  LOWORD(v10) = v4 & 1;
  v11 = 3013;
  if ( (_WORD)v10 == (v6 & 1) )
  {
    if ( (v4 & 8) != 0 )
    {
      LODWORD(a1) = 3;
      if ( ((v6 | v7) & 8) == 0 )
      {
        HUBREG_UpdateSqmHubOvercurrentDetected(*(_QWORD *)v5, v10, a3);
        v16 = *(_QWORD *)v5;
        v11 = 3065;
        *((_DWORD *)v5 + 356) = 4;
        if ( (*(_DWORD *)(v16 + 2608) & 0x200) != 0 )
          HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", v5 + 136);
        v12 = v19;
        if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
          McTemplateK0qhhhqhhh_EtwWriteTransfer(
            (_DWORD)a1,
            v15,
            *(_DWORD *)v5 + 2428,
            v5[100],
            v6,
            v4,
            v7,
            249,
            v8,
            v9,
            v19);
        LODWORD(v10) = v4 & 1;
        goto LABEL_8;
      }
    }
    else if ( (v6 & 8) != 0 && (v7 & 8) == 0 )
    {
      HUBREG_UpdateSqmHubOvercurrentDetected(*a1, v10, a3);
      v18 = *(_QWORD *)v5;
      v11 = 3069;
      *((_DWORD *)v5 + 356) = 0;
      if ( (*(_DWORD *)(v18 + 2608) & 0x200) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", v5 + 136);
      if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
        McTemplateK0qhhhqhhh_EtwWriteTransfer(
          (_DWORD)a1,
          v17,
          *(_DWORD *)v5 + 2428,
          v5[100],
          v6,
          v4,
          v7,
          253,
          v8,
          v9,
          v19);
      LODWORD(v10) = v4 & 1;
      goto LABEL_7;
    }
    if ( (v4 & 2) == 0 && (v6 & 2) != 0 && (v7 & 2) == 0 )
    {
      v11 = 3029;
      goto LABEL_7;
    }
    if ( (v4 & 4) != 0 )
      goto LABEL_7;
    v12 = v19;
    if ( (v6 & 4) != 0 && (v7 & 4) == 0 )
      v11 = 3085;
  }
  else
  {
    if ( (v7 & 1) == 0 )
    {
      v11 = 3017;
LABEL_7:
      v12 = v19;
      goto LABEL_8;
    }
    if ( *((_BYTE *)a1 + 1457) )
      goto LABEL_7;
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
            WdfDriverGlobals,
            *(_QWORD *)(*a1 + 16LL),
            0LL,
            0LL,
            3730,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
    LODWORD(v10) = v4 & 1;
    v12 = v19;
    if ( v14 >= 0 )
      *((_BYTE *)v5 + 1457) = 1;
  }
LABEL_8:
  *((_DWORD *)v5 + 2) = v11;
  if ( v11 == 3017 && !(_WORD)v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dDDD(
        *((_QWORD *)v5 + 179),
        v10,
        4,
        85,
        (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids,
        v5[100],
        v6,
        v4,
        v7);
    if ( (*(_DWORD *)(*(_QWORD *)v5 + 2608LL) & 0x400) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", v5 + 136);
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0qhhhqhhh_EtwWriteTransfer(
        (_DWORD)a1,
        v10,
        *(_DWORD *)v5 + 2428,
        v5[100],
        v6,
        v4,
        v7,
        201,
        v8,
        v9,
        v12);
  }
  return v11;
}
