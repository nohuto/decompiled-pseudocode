/*
 * XREFs of FWUPDATE_EvtIoInternalDeviceControl @ 0x140041040
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     McTemplateK0ppqq_EtwWriteTransfer @ 0x14001CCA0 (McTemplateK0ppqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memmove @ 0x140045DC0 (memmove.c)
 */

NTSTATUS __fastcall FWUPDATE_EvtIoInternalDeviceControl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rax
  NTSTATUS result; // eax
  unsigned int v15; // eax
  __int64 v16; // rcx
  const EVENT_DESCRIPTOR *v17; // rdx
  int v18; // edx
  __int64 v19; // rcx
  PVOID v20; // r15
  int v21; // r9d
  unsigned __int16 v22; // r9
  unsigned int v23; // r14d
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 Priority; // [rsp+28h] [rbp-58h]
  ULONG Prioritya; // [rsp+28h] [rbp-58h]
  __int64 v29; // [rsp+30h] [rbp-50h]
  int v30; // [rsp+30h] [rbp-50h]
  __int128 v31; // [rsp+40h] [rbp-40h] BYREF
  __int128 v32; // [rsp+50h] [rbp-30h]
  __int64 v33; // [rsp+60h] [rbp-20h]
  __int128 v34; // [rsp+68h] [rbp-18h] BYREF

  v33 = 0LL;
  v31 = 0LL;
  LOWORD(v31) = 40;
  v7 = 0;
  v34 = 0LL;
  v8 = 0LL;
  v32 = 0LL;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v9,
          off_14006C170);
  v12 = *(_QWORD *)v11;
  if ( *(_BYTE *)(v11 + 24) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v12 + 2528), v10, 3, 23, (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids);
    }
    v7 = -1073741810;
    goto LABEL_81;
  }
  v34 = 0x800000010uLL;
  if ( a5 != 2228227 )
  {
    if ( a5 == 2228243 )
    {
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
              WdfDriverGlobals,
              *(_QWORD *)(v12 + 16));
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int128 *))(WdfFunctions_01015 + 2024))(
                 WdfDriverGlobals,
                 a2,
                 v13,
                 &v34);
      if ( (_BYTE)result )
        return result;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Prioritya = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
                      WdfDriverGlobals,
                      a2);
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v12 + 2528),
          2u,
          3u,
          0x21u,
          (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
          Prioritya);
      }
      v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, a2);
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 v15);
      goto LABEL_13;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v12 + 2528),
        2u,
        3u,
        0x22u,
        (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
        a5);
    goto LABEL_80;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    &v31);
  v8 = *((_QWORD *)&v31 + 1);
  v18 = *(unsigned __int16 *)(*((_QWORD *)&v31 + 1) + 2LL);
  *(_DWORD *)(*((_QWORD *)&v31 + 1) + 4LL) = 0;
  switch ( v18 )
  {
    case 0:
      if ( *(_WORD *)v8 != 64 )
        goto LABEL_79;
      v26 = *(_QWORD *)(v8 + 24);
      if ( *(_BYTE *)(v26 + 4) != 1 || *(_BYTE *)(v26 + 5) != 1 )
        goto LABEL_79;
      if ( v26 )
      {
        if ( *(_BYTE *)(v8 + 42) || *(_BYTE *)(v8 + 43) || *(_DWORD *)(v8 + 56) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v21 = 28;
            goto LABEL_78;
          }
          goto LABEL_79;
        }
        *(_QWORD *)(v8 + 48) = v11 + 16;
        *(_QWORD *)(v8 + 32) = v11 + 8;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = 4;
        WPP_RECORDER_SF_(*(_QWORD *)(v12 + 2528), v18, 3, 27, (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids);
      }
      goto LABEL_63;
    case 1:
      if ( *(_WORD *)v8 != 56
        || *(_QWORD *)(v8 + 24) != (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(
                                     WdfDriverGlobals,
                                     a1)
        || *(_BYTE *)(v8 + 34)
        || *(_BYTE *)(v8 + 35)
        || *(_DWORD *)(v8 + 48) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v21 = 29;
          goto LABEL_78;
        }
LABEL_79:
        *(_DWORD *)(v8 + 4) = -2147482880;
LABEL_80:
        v7 = -1073741811;
        goto LABEL_81;
      }
      *(_QWORD *)(v8 + 40) = v11 + 16;
LABEL_63:
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 0LL);
      goto LABEL_82;
    case 8:
      goto LABEL_50;
    case 11:
      v19 = *(_QWORD *)(v8 + 48);
      if ( v19 )
      {
        if ( (*(_BYTE *)(v19 + 10) & 5) != 0 )
          v20 = *(PVOID *)(v19 + 24);
        else
          v20 = MmMapLockedPagesSpecifyCache((PMDL)v19, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010u);
      }
      else
      {
        v20 = *(PVOID *)(v8 + 40);
      }
      if ( !v20 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v21 = 24;
LABEL_78:
          LOBYTE(v18) = 2;
          WPP_RECORDER_SF_(
            *(_QWORD *)(v12 + 2528),
            v18,
            3,
            v21,
            (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids);
          goto LABEL_79;
        }
        goto LABEL_79;
      }
      if ( *(_BYTE *)(v8 + 131) == 1 )
      {
        v23 = *(_DWORD *)(v8 + 36);
        if ( v23 > 0x12 )
          v23 = 18;
        memmove(v20, FwUpdateDeviceDescriptor, v23);
        *((_WORD *)v20 + 4) = *(_WORD *)(v12 + 2472);
        *((_WORD *)v20 + 5) = *(_WORD *)(v12 + 2474);
        *((_WORD *)v20 + 6) = *(_WORD *)(v12 + 2476);
        *((_WORD *)v20 + 1) = *(_WORD *)(v12 + 2466);
        *((_BYTE *)v20 + 7) = *(_BYTE *)(v12 + 2471);
      }
      else
      {
        if ( *(_BYTE *)(v8 + 131) != 2 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_79;
          v22 = 26;
          LODWORD(Priority) = *(unsigned __int8 *)(v8 + 131);
LABEL_37:
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v12 + 2528),
            2u,
            3u,
            v22,
            (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
            Priority);
          goto LABEL_79;
        }
        if ( *(_BYTE *)(v8 + 130) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_79;
          v22 = 25;
          LODWORD(Priority) = *(unsigned __int8 *)(v8 + 130);
          goto LABEL_37;
        }
        v23 = *(_DWORD *)(v8 + 36);
        if ( v23 > 0x12 )
          v23 = 18;
        memmove(v20, &FwUpdateConfigurationDescriptor, v23);
      }
      *(_DWORD *)(v8 + 32) |= 1u;
      if ( (*(_DWORD *)(v8 + 32) & 8) != 0 )
        *(_WORD *)(v8 + 2) = 8;
      *(_DWORD *)(v8 + 36) = v23;
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
                 WdfDriverGlobals,
                 a2,
                 0LL,
                 v23);
      goto LABEL_82;
    case 19:
LABEL_53:
      *(_QWORD *)(v8 + 8) = *(_QWORD *)(v12 + 248);
      v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
              WdfDriverGlobals,
              *(_QWORD *)(v12 + 16));
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int128 *))(WdfFunctions_01015 + 2024))(
                 WdfDriverGlobals,
                 a2,
                 v24,
                 &v34);
      if ( (_BYTE)result )
        return result;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v30 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
                WdfDriverGlobals,
                a2);
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(v12 + 2528),
          2u,
          3u,
          0x1Fu,
          (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
          *(unsigned __int16 *)(v8 + 2),
          v30);
      }
      v25 = (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
              WdfDriverGlobals,
              a2);
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 v25);
      goto LABEL_82;
  }
  if ( v18 != 50 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v12 + 2528),
        2u,
        3u,
        0x20u,
        (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
        v18);
    goto LABEL_79;
  }
LABEL_50:
  if ( (*(_BYTE *)(v8 + 128) & 0x60) == 0x40 )
    goto LABEL_53;
  v7 = -1073741811;
  *(_DWORD *)(v8 + 4) = -2147482880;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(v12 + 2528), v18, 3, 30, (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids);
  }
LABEL_81:
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             v7);
  if ( a5 != 2228227 )
  {
LABEL_13:
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
      return result;
    v17 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_FIRMWARE_UPDATE_INTERNAL_IOCTL_COMPLETE;
    LODWORD(v29) = v7;
    LODWORD(Priority) = DWORD2(v32);
    return McTemplateK0ppqq_EtwWriteTransfer(
             v16,
             v17,
             (const GUID *)(v12 + 2284),
             *(_QWORD *)(v12 + 248),
             *(_QWORD *)(v12 + 2664),
             Priority,
             v29);
  }
LABEL_82:
  if ( !v8 )
    goto LABEL_13;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v16 = *(unsigned __int16 *)(v8 + 2);
    v17 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_FIRMWARE_UPDATE_URB_COMPLETE;
    LODWORD(v29) = *(_DWORD *)(v8 + 4);
    LODWORD(Priority) = *(unsigned __int16 *)(v8 + 2);
    return McTemplateK0ppqq_EtwWriteTransfer(
             v16,
             v17,
             (const GUID *)(v12 + 2284),
             *(_QWORD *)(v12 + 248),
             *(_QWORD *)(v12 + 2664),
             Priority,
             v29);
  }
  return result;
}
