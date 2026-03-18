/*
 * XREFs of WMI_RegisterSurpriseRemovalNotificationInstance @ 0x140090384
 * Callers:
 *     HUBPDO_EvtDeviceUsageNotificationEx @ 0x1400163B0 (HUBPDO_EvtDeviceUsageNotificationEx.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memset @ 0x1400460C0 (memset.c)
 */

__int64 __fastcall WMI_RegisterSurpriseRemovalNotificationInstance(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  int v6; // [rsp+28h] [rbp-80h]
  _QWORD v7[8]; // [rsp+30h] [rbp-78h] BYREF
  int v8; // [rsp+70h] [rbp-38h] BYREF
  GUID v9; // [rsp+74h] [rbp-34h]
  int v10; // [rsp+84h] [rbp-24h]
  __int128 v11; // [rsp+88h] [rbp-20h]

  HIDWORD(v7[0]) = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006C0F8);
  v8 = 40;
  v10 = 1;
  v3 = v2;
  v11 = 0LL;
  v9 = GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION;
  memset(v7, 0, sizeof(v7));
  v7[2] = &v8;
  LODWORD(v7[0]) = 64;
  BYTE1(v7[3]) = 1;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006C1E8);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, __int64))(WdfFunctions_01015 + 2984))(
             WdfDriverGlobals,
             a1,
             v7,
             0LL,
             v4 + 80);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 1432LL),
             2u,
             5u,
             0x13u,
             (__int64)&WPP_9d9b99bdbcfa37b3732b5a7eb5557008_Traceguids,
             v6);
  }
  return result;
}
