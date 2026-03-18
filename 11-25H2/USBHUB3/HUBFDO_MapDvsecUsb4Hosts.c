/*
 * XREFs of HUBFDO_MapDvsecUsb4Hosts @ 0x14007FD00
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x14007B8E0 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     RtlUnicodeStringPrintf @ 0x14000F93C (RtlUnicodeStringPrintf.c)
 *     WPP_RECORDER_SF_dS @ 0x14000FC40 (WPP_RECORDER_SF_dS.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     TUNNEL_RegisterUsb4HostForPort @ 0x140092ADC (TUNNEL_RegisterUsb4HostForPort.c)
 */

int __fastcall HUBFDO_MapDvsecUsb4Hosts(_QWORD *a1)
{
  __int64 v1; // rdx
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  int v8; // edx
  int v9; // r9d
  unsigned __int8 *v10; // r12
  unsigned int v11; // r15d
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // dl
  _QWORD *i; // rax
  _QWORD *v15; // r13
  unsigned __int16 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  unsigned __int16 v21; // r9
  int v23; // [rsp+20h] [rbp-79h]
  __int64 *v24; // [rsp+28h] [rbp-71h]
  int *v25; // [rsp+30h] [rbp-69h]
  int v26; // [rsp+40h] [rbp-59h] BYREF
  __int128 v27; // [rsp+48h] [rbp-51h] BYREF
  __int64 v28; // [rsp+58h] [rbp-41h]
  int v29; // [rsp+60h] [rbp-39h] BYREF
  __int64 v30; // [rsp+68h] [rbp-31h] BYREF
  __int64 v31; // [rsp+70h] [rbp-29h] BYREF
  __int64 v32; // [rsp+78h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-19h] BYREF
  __int64 v34; // [rsp+90h] [rbp-9h] BYREF
  _OWORD v35[2]; // [rsp+98h] [rbp-1h] BYREF
  __int64 v36; // [rsp+B8h] [rbp+1Fh]

  v1 = a1[344];
  v34 = 0LL;
  LODWORD(v28) = 0;
  v27 = 0LL;
  v29 = 0;
  v26 = 0;
  v30 = 0LL;
  DestinationString = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(WdfDriverGlobals, v1, 0LL);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 112))(WdfDriverGlobals, a1[343]);
  LODWORD(v4) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                  WdfDriverGlobals,
                  a1[344]);
  if ( v3 )
    goto LABEL_46;
  v5 = a1[2];
  *((_QWORD *)&v27 + 1) = &DEVPKEY_PciDevice_SerialNumber;
  *(_QWORD *)&v27 = 24LL;
  v28 = 0LL;
  LODWORD(v4) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, __int64, __int64 *, int *, int *))(WdfFunctions_01015 + 3464))(
                  WdfDriverGlobals,
                  v5,
                  &v27,
                  8LL,
                  &v34,
                  &v29,
                  &v26);
  if ( (int)v4 < 0 )
  {
    if ( (_DWORD)v4 == -1073741772 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_46;
    v6 = 25;
LABEL_13:
    LODWORD(v24) = v4;
    LODWORD(v4) = WPP_RECORDER_SF_d(a1[316], 2u, 3u, v6, (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids, v24);
    goto LABEL_46;
  }
  v7 = a1[2];
  *((_QWORD *)&v27 + 1) = &DEVPKEY_PciDevice_UsbDvsecPortSpecificAttributes;
  v25 = &v26;
  *(_QWORD *)&v27 = 24LL;
  v24 = &v32;
  v28 = 0LL;
  v23 = 0;
  LODWORD(v4) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, __int64))(WdfFunctions_01015 + 3472))(
                  WdfDriverGlobals,
                  v7,
                  &v27,
                  1LL);
  if ( (_DWORD)v4 == -1073741772 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_46;
    v9 = 26;
    goto LABEL_9;
  }
  if ( (int)v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_46;
    v6 = 27;
    goto LABEL_13;
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1552))(
         WdfDriverGlobals,
         v32,
         &v30);
  v10 = (unsigned __int8 *)v4;
  if ( !v4 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_46;
    v9 = 28;
LABEL_9:
    LOBYTE(v8) = 2;
    LODWORD(v4) = WPP_RECORDER_SF_(a1[316], v8, 3, v9, (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids);
    goto LABEL_46;
  }
  *(_DWORD *)&DestinationString.Length = 2621440;
  v36 = 0LL;
  v11 = 1;
  DestinationString.Buffer = (wchar_t *)v35;
  LODWORD(v4) = 2 * v30;
  memset(v35, 0, sizeof(v35));
  if ( !(2 * v30) )
    goto LABEL_46;
  while ( 1 )
  {
    v12 = *v10;
    if ( (v11 & 1) == 0 )
    {
      ++v10;
      v12 >>= 4;
    }
    v13 = v12 & 7;
    if ( v13 != 7 )
    {
      for ( i = (_QWORD *)a1[296]; ; i = (_QWORD *)*i )
      {
        v15 = i - 31;
        if ( a1 + 296 == i )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_28;
          v16 = 29;
          goto LABEL_27;
        }
        if ( *((unsigned __int16 *)v15 + 100) == v11 )
          break;
      }
      if ( *((_DWORD *)v15 + 52) != 768 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = 30;
LABEL_27:
          LODWORD(v24) = v11;
          WPP_RECORDER_SF_d(a1[316], 2u, 3u, v16, (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids, v24);
          goto LABEL_28;
        }
        goto LABEL_28;
      }
      LODWORD(v4) = RtlUnicodeStringPrintf(&DestinationString, L"%I64x_%d", v34, v13);
      if ( (int)v4 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_46;
        v21 = 31;
        goto LABEL_45;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dS(a1[316], v17, v18, v19, v23, v11, DestinationString.Buffer);
      LODWORD(v4) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, struct _UNICODE_STRING *, _QWORD, __int64 *))(WdfFunctions_01015 + 2464))(
                      WdfDriverGlobals,
                      &DestinationString,
                      0LL,
                      &v31);
      if ( (int)v4 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_46;
        v21 = 33;
LABEL_45:
        LODWORD(v25) = v4;
        LODWORD(v24) = v11;
        LODWORD(v4) = WPP_RECORDER_SF_dD(
                        a1[316],
                        2u,
                        3u,
                        v21,
                        (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
                        v24,
                        v25);
        goto LABEL_46;
      }
      v20 = TUNNEL_RegisterUsb4HostForPort(a1, v31, v15);
      if ( v20 < 0 )
        break;
    }
LABEL_28:
    LODWORD(v4) = ++v11;
    if ( v11 > (unsigned __int64)(2 * v30) )
      goto LABEL_46;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v25) = v20;
    LODWORD(v24) = v11;
    WPP_RECORDER_SF_dD(a1[316], 2u, 3u, 0x22u, (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids, v24, v25);
  }
  LODWORD(v4) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(
                  WdfDriverGlobals,
                  v31);
LABEL_46:
  if ( v32 )
    LODWORD(v4) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return v4;
}
