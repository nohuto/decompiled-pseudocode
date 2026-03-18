/*
 * XREFs of HUBPDO_AllocateForwardProgressResources @ 0x140014B2C
 * Callers:
 *     HUBPDO_EvtDeviceUsageNotificationEx @ 0x1400163E0 (HUBPDO_EvtDeviceUsageNotificationEx.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_AllocateForwardProgressResources(_QWORD *a1)
{
  __int64 v2; // rax
  int v3; // ebx
  int v5; // [rsp+28h] [rbp-50h]
  __int128 v6; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+40h] [rbp-38h]
  __int64 v8; // [rsp+48h] [rbp-30h]
  __int128 v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-18h]

  v10 = 0LL;
  v7 = 0LL;
  v8 = 0x100000001LL;
  v6 = 0LL;
  LODWORD(v6) = 56;
  v9 = 0LL;
  *(_QWORD *)&v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(
                     WdfDriverGlobals,
                     a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(*a1 + 16LL));
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, _QWORD *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         &v6,
         v2,
         a1 + 282);
  if ( v3 >= 0 )
  {
    a1[284] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                WdfDriverGlobals,
                a1[282]);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 1432LL),
      2u,
      5u,
      0x9Au,
      (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
      v5);
  }
  return (unsigned int)v3;
}
