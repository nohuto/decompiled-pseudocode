/*
 * XREFs of TUNNEL_EvtInterfaceChange @ 0x140090F90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x14001DE04 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_S @ 0x140035CD0 (WPP_RECORDER_SF_S.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x140042F60 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     TUNNEL_GetUsb4Host @ 0x140091F30 (TUNNEL_GetUsb4Host.c)
 */

__int64 __fastcall TUNNEL_EvtInterfaceChange(char *NotificationStructure, PVOID Context)
{
  __int64 v2; // rax
  char v4; // r13
  bool v5; // r12
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rsi
  int DeviceInterfacePropertyData; // eax
  int v10; // r14d
  unsigned __int16 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  wchar_t *v14; // rax
  wchar_t *v15; // rdi
  __int64 v16; // rcx
  int v17; // r9d
  wchar_t *v18; // rax
  __int64 Usb4Host; // r14
  const WCHAR *v20; // rbx
  wchar_t *v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int16 *v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int16 v28; // cx
  unsigned __int64 v29; // r10
  __int64 v30; // rdx
  _WORD *v31; // rcx
  _WORD *v32; // rax
  unsigned int v33; // eax
  __int64 v35; // [rsp+28h] [rbp-D8h]
  int v36; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+50h] [rbp-B0h] BYREF
  int v39; // [rsp+58h] [rbp-A8h] BYREF
  int v40; // [rsp+5Ch] [rbp-A4h]
  __int64 (__fastcall *v41)(); // [rsp+60h] [rbp-A0h]
  __int64 v42; // [rsp+68h] [rbp-98h]
  PVOID v43; // [rsp+70h] [rbp-90h]
  struct _UNICODE_STRING v44; // [rsp+78h] [rbp-88h] BYREF
  int v45; // [rsp+88h] [rbp-78h] BYREF
  __int128 v46; // [rsp+8Ch] [rbp-74h]
  int v47; // [rsp+9Ch] [rbp-64h]
  int v48; // [rsp+A0h] [rbp-60h]
  int v49; // [rsp+A4h] [rbp-5Ch]
  PVOID v50; // [rsp+A8h] [rbp-58h]
  __int64 v51; // [rsp+B0h] [rbp-50h]
  void *v52; // [rsp+B8h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING v54; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t Str1[20]; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[236]; // [rsp+108h] [rbp+8h] BYREF

  v43 = Context;
  v47 = 0;
  v40 = 0;
  v2 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  v46 = 0LL;
  v51 = 0LL;
  v4 = 0;
  DestinationString = 0LL;
  v37 = 0LL;
  v36 = 0;
  v38 = 0;
  v44 = 0LL;
  v54 = 0LL;
  if ( !v2 )
    v2 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  v5 = v2 == 0;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, PVOID, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         Context,
         off_14006C198);
  v8 = v6;
  if ( *(_OWORD *)(NotificationStructure + 20) != *(_OWORD *)&GUID_DEVINTERFACE_USB4_VIRTUAL_POWER_PDO )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v16 = *(_QWORD *)(v6 + 2536);
    v17 = 20;
    goto LABEL_59;
  }
  DeviceInterfacePropertyData = IoGetDeviceInterfacePropertyData(
                                  *((_QWORD *)NotificationStructure + 5),
                                  &DEVPKEY_DeviceInterface_ReferenceString,
                                  0LL,
                                  0LL,
                                  512,
                                  Str1,
                                  &v38,
                                  &v36);
  v10 = DeviceInterfacePropertyData;
  if ( DeviceInterfacePropertyData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 21;
      LODWORD(v35) = DeviceInterfacePropertyData;
LABEL_7:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v8 + 2536),
        2u,
        3u,
        v11,
        (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
        v35);
      return 0LL;
    }
    return 0LL;
  }
  if ( v36 != 18 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v11 = 22;
    LODWORD(v35) = v36;
    goto LABEL_7;
  }
  if ( _wcsnicmp(Str1, L"Usb4-Host-Interface-", 0x14uLL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        *(_QWORD *)(v8 + 2536),
        v12,
        3u,
        0x17u,
        (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
        Str1);
    MicrosoftTelemetryAssertTriggeredArgsMsgKM(
      v13,
      v10,
      0,
      (__int64)"USB4 virtual power PDO interface arrival with invalid reference string");
    return 0LL;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  v14 = wcsstr(DestinationString.Buffer, L"^");
  v15 = v14;
  if ( !v14 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v16 = *(_QWORD *)(v8 + 2536);
    v17 = 24;
LABEL_59:
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(v16, v7, 3, v17, (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids);
    return 0LL;
  }
  v18 = wcsstr(v14 + 1, L"^");
  Usb4Host = 0LL;
  v20 = v18;
  if ( v18 )
  {
    v20 = v18 + 1;
    *v18 = 0;
    v21 = wcsstr(v18 + 1, L"^");
    if ( v21 )
      *v21 = 0;
  }
  RtlInitUnicodeString(&v44, v15 + 1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v8 + 2760),
    0LL);
  if ( !v44.Length || (Usb4Host = TUNNEL_GetUsb4Host(v8, &v44)) == 0 )
  {
    if ( v20 )
    {
      RtlInitUnicodeString(&v54, v20);
      Usb4Host = TUNNEL_GetUsb4Host(v8, &v54);
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v8 + 2760));
  if ( Usb4Host )
  {
    if ( v5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *(_QWORD *)(v8 + 2536),
          4u,
          3u,
          0x1Au,
          (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
          Usb4Host);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(Usb4Host + 16),
        0LL);
      if ( (*(_DWORD *)(Usb4Host + 24) & 0xFFFFFFFB) == 0 )
      {
        v4 = 1;
        *(_DWORD *)(Usb4Host + 24) = 1;
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        *(_QWORD *)(Usb4Host + 16));
      if ( v4 )
      {
        v47 = 0;
        v42 = 1LL;
        v40 = 0;
        v39 = 24;
        v41 = TUNNEL_EvtWorkitemPnpInterfaceNotification;
        v52 = off_14006C2B8;
        v50 = v43;
        v46 = 0LL;
        v51 = 0LL;
        v45 = 56;
        v48 = 1;
        v49 = 1;
        v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, int *, int *, __int64 *))(WdfFunctions_01015 + 3032))(
                WdfDriverGlobals,
                &v39,
                &v45,
                &v37);
        if ( v23 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0LL;
          v11 = 28;
          LODWORD(v35) = v23;
          goto LABEL_7;
        }
        v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                v37,
                off_14006C2B8);
        v26 = (unsigned __int16 *)*((_QWORD *)NotificationStructure + 5);
        v27 = *v26;
        if ( (v27 & 1) != 0
          || (v28 = v26[1], (v28 & 1) != 0)
          || (unsigned __int16)v27 > v28
          || (v25 = 65534LL, v28 == 0xFFFF)
          || !*((_QWORD *)v26 + 1) && ((_WORD)v27 || v28) )
        {
          v33 = -1073741811;
          *(_WORD *)v24 = 0;
        }
        else
        {
          v29 = v27 >> 1;
          v30 = 256LL;
          v25 = *((_QWORD *)v26 + 1) - v24;
          v31 = (_WORD *)v24;
          do
          {
            if ( !(v30 + v29 - 256) )
              break;
            *v31 = *(_WORD *)((char *)v31 + v25);
            ++v31;
            --v30;
          }
          while ( v30 );
          v32 = v31 - 1;
          if ( v30 )
            v32 = v31;
          *v32 = 0;
          v33 = v30 == 0 ? 0x80000005 : 0;
          if ( v30 )
          {
            *(_QWORD *)(v24 + 512) = Usb4Host;
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 3040))(
              WdfDriverGlobals,
              v37,
              v24,
              v25);
            return 0LL;
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v35) = v33;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v8 + 2536),
            2u,
            3u,
            0x1Du,
            (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
            v35);
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 1664))(
          WdfDriverGlobals,
          v37,
          v24,
          v25);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        *(_QWORD *)(v8 + 2536),
        4u,
        3u,
        0x1Bu,
        (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
        Usb4Host);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_S(
      *(_QWORD *)(v8 + 2536),
      v22,
      3u,
      0x19u,
      (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
      Str1);
  }
  return 0LL;
}
