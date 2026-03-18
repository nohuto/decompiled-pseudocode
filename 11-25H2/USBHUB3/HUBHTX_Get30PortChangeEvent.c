/*
 * XREFs of HUBHTX_Get30PortChangeEvent @ 0x140003AE0
 * Callers:
 *     HUBPSM30_AcquiringPortReferenceAndGettingPortEvent @ 0x140013740 (HUBPSM30_AcquiringPortReferenceAndGettingPortEvent.c)
 *     HUBPSM30_EnablingInterruptsAndGettingPortEvent @ 0x140013B20 (HUBPSM30_EnablingInterruptsAndGettingPortEvent.c)
 *     HUBPSM30_EnablingInterruptsAndGettingPortEventInNoChange @ 0x140013B50 (HUBPSM30_EnablingInterruptsAndGettingPortEventInNoChange.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FE8 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0qhhhqhhh_EtwWriteTransfer @ 0x1400068B4 (McTemplateK0qhhhqhhh_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dDDD @ 0x140007288 (WPP_RECORDER_SF_dDDD.c)
 *     WPP_RECORDER_SF_qd @ 0x1400074C8 (WPP_RECORDER_SF_qd.c)
 *     HUBMISC_VerifierDbgBreak @ 0x140033D80 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x140034FB4 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBHTX_Get30PortChangeEvent(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r14
  _WORD *v4; // rax
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  __int16 v7; // di
  __int16 v8; // si
  __int16 v9; // r15
  __int16 v10; // r13
  int v11; // edx
  int v12; // ecx
  __int64 v13; // rax
  int v14; // r9d
  __int16 v15; // ax
  unsigned __int16 v16; // r9
  __int64 v17; // rax
  int v18; // edx
  int v19; // ecx
  unsigned __int16 v20; // r9
  unsigned __int16 v22; // r9
  int v23; // eax
  unsigned __int8 v24; // dl
  unsigned int v25; // r8d
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // [rsp+20h] [rbp-88h]
  __int64 v29; // [rsp+28h] [rbp-80h]
  __int64 v30; // [rsp+30h] [rbp-78h]
  __int16 v31; // [rsp+B0h] [rbp+8h]
  char v32; // [rsp+B8h] [rbp+10h]
  char v33; // [rsp+C0h] [rbp+18h]

  v3 = (_QWORD *)a1;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1336), 0xFFFFFF7F);
  if ( *(_BYTE *)(a1 + 1457) )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
      WdfDriverGlobals,
      *(_QWORD *)(*(_QWORD *)a1 + 16LL),
      0LL,
      3905LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
    *((_BYTE *)v3 + 1457) = 0;
  }
  v4 = (_WORD *)v3[166];
  v5 = 3061;
  v6 = *((unsigned __int16 *)v3 + 92);
  v7 = *((_WORD *)v3 + 96);
  v8 = *((_WORD *)v3 + 97);
  *((_WORD *)v3 + 96) = v6;
  if ( v4 )
  {
    v9 = v4[998];
    v10 = v4[999];
    v31 = v4[1000];
    v33 = v9;
    v32 = v10;
  }
  else
  {
    LOBYTE(v9) = 0;
    v33 = 0;
    LOBYTE(v10) = 0;
    v32 = 0;
    LOBYTE(v31) = 0;
  }
  if ( (v6 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*v3, a2, a3);
    v13 = *v3;
    v5 = 3065;
    *((_DWORD *)v3 + 356) = 4;
    if ( _bittest((const signed __int32 *)(v13 + 2600), 9u) )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", v3 + 34);
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0qhhhqhhh_EtwWriteTransfer(
        v12,
        v11,
        *(_DWORD *)v3 + 2420,
        *((unsigned __int16 *)v3 + 100),
        v7,
        v6,
        v8,
        249,
        v9,
        v10,
        v31);
    goto LABEL_84;
  }
  if ( (v8 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*v3, a2, a3);
    a1 = *v3;
    if ( (*(_DWORD *)(*v3 + 44LL) & 0x40) != 0 && (v6 & 0x200) != 0 )
    {
      *((_DWORD *)v3 + 356) = 1;
      v5 = 3017;
    }
    else if ( (v7 & 8) == 0 )
    {
      *((_DWORD *)v3 + 356) = 4;
      v5 = 3065;
    }
    if ( _bittest((const signed __int32 *)(a1 + 2600), 9u) )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", v3 + 34);
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0qhhhqhhh_EtwWriteTransfer(
        a1,
        a2,
        *(_DWORD *)v3 + 2420,
        *((unsigned __int16 *)v3 + 100),
        v7,
        v6,
        v8,
        v5,
        v33,
        v32,
        v31);
    goto LABEL_120;
  }
  if ( (v6 & 0x200) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 86;
LABEL_133:
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(v3[179], a2, 4, v14, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids);
      goto LABEL_134;
    }
    goto LABEL_134;
  }
  if ( (v6 & 0x10) == 0 )
  {
    if ( (v6 & 1) == 0 )
    {
      if ( (v6 & 0x1E0) == 0xA0 )
      {
        if ( (v7 & 0x200) != 0 && (v7 & 0x1E0) != 0xA0 )
          goto LABEL_35;
      }
      else
      {
        LODWORD(a1) = 224;
        if ( (v6 & 0x1E0) == 0xE0 && (v7 & 0x200) != 0 && (v7 & 0x1E0) != 0xE0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(a2) = 2;
            WPP_RECORDER_SF_(v3[179], a2, 4, 89, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids);
          }
          goto LABEL_35;
        }
      }
    }
    v15 = v6 & 0x1E0;
    if ( (v6 & 0x1E0) == 0x160 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_134;
      v16 = 90;
      goto LABEL_43;
    }
    LODWORD(a1) = 128;
    if ( v15 == 128 )
    {
      if ( (v7 & 0x1E0) != 0x80 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_134;
        v16 = 91;
        goto LABEL_43;
      }
LABEL_100:
      if ( (v8 & 1) == 0 && (((unsigned __int8)v6 ^ (unsigned __int8)v7) & 1) == 0 )
      {
        if ( (v6 & 1) == 0 )
        {
          if ( (v6 & 2) != 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v14 = 101;
              goto LABEL_133;
            }
            goto LABEL_134;
          }
          if ( (v6 & 0x1E0) > 0x60 )
            return v5;
          if ( (*(_DWORD *)(*v3 + 40LL) & 0x100000) == 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_134;
            v16 = 103;
            goto LABEL_43;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return v5;
          v22 = 102;
          v23 = (v6 >> 5) & 0xF;
          v24 = 2;
LABEL_91:
          LODWORD(v29) = v23;
          WPP_RECORDER_SF_d(v3[179], v24, 4u, v22, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids, v29);
          return v5;
        }
        if ( (v6 & 0x1E0) != 0xA0 )
        {
          if ( (v6 & 2) == 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v14 = 105;
              goto LABEL_133;
            }
            goto LABEL_134;
          }
          if ( (v6 & 0x1E0) <= 0x60 || (LODWORD(a2) = 256, (v6 & 0x1E0) == 0x100) )
          {
            if ( (v8 & 0x10) == 0 )
            {
              if ( (v7 & 0x1E0) == 0x60 && (v6 & 0x1E0) != 0x60 )
              {
                v5 = 3085;
                goto LABEL_84;
              }
              return v5;
            }
            if ( (v6 & 0x1E0) != 0x60 )
            {
              v5 = 3073;
              goto LABEL_84;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v14 = 107;
              goto LABEL_133;
            }
            goto LABEL_134;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_134;
          v16 = 106;
LABEL_43:
          WPP_RECORDER_SF_d(
            v3[179],
            2u,
            4u,
            v16,
            (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids,
            (v6 >> 5) & 0xF);
          goto LABEL_134;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_(v3[179], a2, 4, 104, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids);
        }
        goto LABEL_115;
      }
LABEL_75:
      v5 = 3017;
      goto LABEL_76;
    }
    if ( v15 == 320 )
    {
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1632))(
              WdfDriverGlobals,
              *v3,
              480LL,
              160LL);
      if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(
              WdfDriverGlobals,
              v17)
        || *(_BYTE *)(*v3 + 240LL) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dD(
            v3[179],
            2u,
            4u,
            0x5Cu,
            (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids,
            (v6 >> 5) & 0xF,
            v6 & 1);
        if ( _bittest((const signed __int32 *)(*v3 + 2600LL), 8u) )
          HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateCompliance", v3 + 34);
        if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
          McTemplateK0qhhhqhhh_EtwWriteTransfer(
            v19,
            v18,
            *(_DWORD *)v3 + 2420,
            *((unsigned __int16 *)v3 + 100),
            v7,
            v6,
            v8,
            245,
            v33,
            v32,
            v31);
        goto LABEL_115;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_115:
        v25 = *((_DWORD *)v3 + 361) + 1;
        v5 = 3053;
        *((_DWORD *)v3 + 361) = v25;
        v26 = v25 / 0x64;
        if ( v25 != 100 * (v25 / 0x64) )
          goto LABEL_84;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v26) = 2;
          WPP_RECORDER_SF_qd(
            v3[179],
            v26,
            4,
            108,
            (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids,
            (char)v3,
            v25);
        }
        if ( (*(_DWORD *)(*v3 + 2600LL) & 0x800) == 0 )
          goto LABEL_84;
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateErrorResetWatchdog", v3 + 34);
LABEL_120:
        if ( v5 != 3017 )
          goto LABEL_83;
LABEL_76:
        if ( (v6 & 1) == 0 )
          goto LABEL_77;
LABEL_84:
        *((_DWORD *)v3 + 2) = v5;
        return v5;
      }
      v20 = 93;
    }
    else
    {
      LODWORD(a1) = 192;
      if ( v15 != 192 )
        goto LABEL_100;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(
          v3[179],
          2u,
          4u,
          0x5Eu,
          (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids,
          (v6 >> 5) & 0xF,
          v6 & 1);
      LODWORD(a1) = *(_DWORD *)(*v3 + 2600LL);
      if ( (a1 & 0x20) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateSSInactive", v3 + 34);
      if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
        McTemplateK0qhhhqhhh_EtwWriteTransfer(
          a1,
          a2,
          *(_DWORD *)v3 + 2420,
          *((unsigned __int16 *)v3 + 100),
          v7,
          v6,
          v8,
          245,
          v33,
          v32,
          v31);
      if ( (v8 & 0x80u) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_(v3[179], a2, 4, 95, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids);
        }
        goto LABEL_75;
      }
      _InterlockedOr((volatile signed __int32 *)v3 + 334, 0x80u);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v29) = (v6 >> 5) & 0xF;
        WPP_RECORDER_SF_d(v3[179], 2u, 4u, 0x60u, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids, v29);
      }
      if ( *((_DWORD *)v3 + 2) == 3053 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v5;
        v22 = 97;
        v23 = v6 & 1;
        v24 = 3;
        goto LABEL_91;
      }
      if ( (v6 & 2) != 0 )
      {
        if ( (*(_DWORD *)(*v3 + 40LL) & 0x200000) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v14 = 99;
            goto LABEL_133;
          }
          goto LABEL_134;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_115;
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_(v3[179], a2, 4, 98, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids);
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_115;
      v20 = 100;
    }
    LODWORD(v30) = v6 & 1;
    LODWORD(v29) = (v6 >> 5) & 0xF;
    WPP_RECORDER_SF_dD(v3[179], 2u, 4u, v20, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids, v29, v30);
    goto LABEL_115;
  }
  if ( (v6 & 2) != 0 )
  {
    if ( (*(_DWORD *)(*v3 + 40LL) & 0x1000000) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 88;
        goto LABEL_133;
      }
LABEL_134:
      v5 = 3077;
      v27 = *(unsigned int *)(*v3 + 2600LL);
      if ( (v27 & 0x10) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierInvalidPortStatus", v3 + 34);
      *(_DWORD *)(*v3 + 2604LL) = 1073872896;
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
      {
        LODWORD(v28) = *((unsigned __int16 *)v3 + 100);
        McTemplateK0pq_EtwWriteTransfer(
          v27,
          &USBHUB3_ETW_EVENT_HUB_RESET_DUE_TO_PORT_ERROR,
          0LL,
          *(_QWORD *)(*v3 + 248LL),
          v28);
      }
      *(_WORD *)(*v3 + 74LL) = v8;
      *(_WORD *)(*v3 + 72LL) = v6;
      goto LABEL_84;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(v3[179], a2, 4, 87, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids);
    }
  }
  if ( (v6 & 1) != 0 )
  {
    v5 = 3081;
    goto LABEL_84;
  }
  if ( (v8 & 1) == 0 && (v7 & 1) == 0 )
    return v5;
LABEL_35:
  v5 = 3017;
LABEL_77:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dDDD(
      v3[179],
      a2,
      4,
      109,
      (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids,
      *((_WORD *)v3 + 100),
      v7,
      v6,
      v8);
  if ( (*(_DWORD *)(*v3 + 2600LL) & 0x400) != 0 )
    HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", v3 + 34);
  if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
    goto LABEL_84;
  McTemplateK0qhhhqhhh_EtwWriteTransfer(a1, a2, 0, *((unsigned __int16 *)v3 + 100), v7, v6, v8, 201, v33, v32, v31);
LABEL_83:
  if ( v5 != 3061 )
    goto LABEL_84;
  return v5;
}
