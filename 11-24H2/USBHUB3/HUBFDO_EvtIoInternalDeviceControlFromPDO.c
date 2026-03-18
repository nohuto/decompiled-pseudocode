/*
 * XREFs of HUBFDO_EvtIoInternalDeviceControlFromPDO @ 0x14000DE00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBFDO_EvtIoInternalDeviceControlFromPDO(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  __int128 v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+50h] [rbp-18h]

  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v7 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    v6,
                    off_14006C198);
  if ( a5 == 2228243 )
  {
    v12 = 0LL;
    v10 = 0LL;
    LOWORD(v10) = 40;
    v11 = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 2128))(
      WdfDriverGlobals,
      a2,
      &v10);
    v7[325] = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8LL);
    v7[318] = a2;
    return HUBSM_AddEvent((__int64)(v7 + 160), 2039);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(v7[317], 2u, 3u, 0x39u, (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids, a5);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             3221225473LL);
  }
}
