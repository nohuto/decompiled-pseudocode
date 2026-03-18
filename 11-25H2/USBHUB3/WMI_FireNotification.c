/*
 * XREFs of WMI_FireNotification @ 0x14008FB20
 * Callers:
 *     HUBPDO_EvtDeviceD0Exit @ 0x140015AF0 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtOutOfBandwidthTimer @ 0x1400189F0 (HUBPDO_EvtOutOfBandwidthTimer.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x14001C038 (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_CreatePdoInternal @ 0x1400811E8 (HUBPDO_CreatePdoInternal.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x140082630 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBMISC_GenerateUserNotificationForPersistentOverCurrent @ 0x140086AE4 (HUBMISC_GenerateUserNotificationForPersistentOverCurrent.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBMISC_StripSymbolicNamePrefix @ 0x1400338C0 (HUBMISC_StripSymbolicNamePrefix.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WMI_FireNotification(__int64 a1, unsigned __int16 a2, int a3)
{
  int v5; // edi
  __int64 v6; // rax
  int v7; // edx
  _UNKNOWN **result; // rax
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // [rsp+28h] [rbp-50h]
  __int64 v12; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v13[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v14; // [rsp+40h] [rbp-38h]
  int v15; // [rsp+48h] [rbp-30h]
  int v16; // [rsp+4Ch] [rbp-2Ch]

  v14 = 0LL;
  v15 = 0;
  v12 = 0LL;
  v5 = a2;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3016))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 2544));
  if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2968))(
         WdfDriverGlobals,
         v6,
         1LL) )
  {
    HUBMISC_StripSymbolicNamePrefix((unsigned __int16 *)(a1 + 2552), &v12);
    v9 = *(_QWORD *)(a1 + 2544);
    v16 = v12 + 6;
    v13[1] = v5;
    v13[0] = a3;
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _DWORD *))(WdfFunctions_01015 + 3024))(
                            WdfDriverGlobals,
                            v9,
                            24LL,
                            v13);
    v10 = (int)result;
    if ( (int)result < 0 )
    {
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = v10;
        return (_UNKNOWN **)WPP_RECORDER_SF_d(
                              *(_QWORD *)(a1 + 2528),
                              2u,
                              3u,
                              0x15u,
                              (__int64)&WPP_9d9b99bdbcfa37b3732b5a7eb5557008_Traceguids,
                              v11);
      }
    }
  }
  else
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      return (_UNKNOWN **)WPP_RECORDER_SF_(
                            *(_QWORD *)(a1 + 2528),
                            v7,
                            3,
                            20,
                            (__int64)&WPP_9d9b99bdbcfa37b3732b5a7eb5557008_Traceguids);
    }
  }
  return result;
}
