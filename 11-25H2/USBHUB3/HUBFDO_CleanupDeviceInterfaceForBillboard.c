/*
 * XREFs of HUBFDO_CleanupDeviceInterfaceForBillboard @ 0x14000CB90
 * Callers:
 *     HUBPDO_BillboardCleanup @ 0x140080E5C (HUBPDO_BillboardCleanup.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memset @ 0x1400460C0 (memset.c)
 */

__int64 __fastcall HUBFDO_CleanupDeviceInterfaceForBillboard(__int64 a1, unsigned __int16 a2, __int64 a3, char a4)
{
  ULONG v5; // ebp
  int v8; // edx
  NTSTATUS v9; // ebx
  char v11; // [rsp+20h] [rbp-B8h]
  NTSTATUS v12; // [rsp+28h] [rbp-B0h]
  __int64 v13; // [rsp+28h] [rbp-B0h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-98h] BYREF
  __int128 v15; // [rsp+50h] [rbp-88h] BYREF
  WCHAR SourceString[32]; // [rsp+60h] [rbp-78h] BYREF

  v5 = a2;
  DestinationString = 0LL;
  v15 = 0LL;
  memset(SourceString, 0, sizeof(SourceString));
  if ( !a4 )
  {
    v9 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2528), v8, 3, 105, (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids);
    }
    goto LABEL_7;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  DestinationString.MaximumLength = 64;
  v9 = RtlIntegerToUnicodeString(v5, 0xAu, &DestinationString);
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = v9;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2528),
        2u,
        3u,
        0x6Au,
        (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
        v12);
    }
LABEL_7:
    if ( a3 )
    {
LABEL_13:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a3);
      return (unsigned int)v9;
    }
    return (unsigned int)v9;
  }
  v11 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, GUID *, struct _UNICODE_STRING *, char))(WdfFunctions_01015 + 624))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 16),
    &GUID_DEVINTERFACE_USB_BILLBOARD,
    &DestinationString,
    v11);
  if ( a3 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      a3,
      &v15);
    v9 = IoSetDeviceInterfacePropertyData(&v15, &DEVPKEY_Device_UsbBillboardInfo, 0LL, 0LL, 4099, 0, 0LL);
    if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = v9;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2528),
        2u,
        3u,
        0x6Bu,
        (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
        v13);
    }
    goto LABEL_13;
  }
  return (unsigned int)v9;
}
