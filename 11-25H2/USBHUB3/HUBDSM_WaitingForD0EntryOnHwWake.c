/*
 * XREFs of HUBDSM_WaitingForD0EntryOnHwWake @ 0x140025E40
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_CompleteWaitWake @ 0x1400150E8 (HUBPDO_CompleteWaitWake.c)
 *     WPP_RECORDER_SF_q @ 0x14001DDC4 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDSM_WaitingForD0EntryOnHwWake(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 960);
  HUBPDO_CompleteWaitWake(v1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(v1 + 16));
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(WdfDriverGlobals, v2);
  PoSetSystemWakeDevice(v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(WdfDriverGlobals, v2);
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_14006C1E8);
    WPP_RECORDER_SF_q(
      *(_QWORD *)(v5 + 64),
      4u,
      2u,
      0x9Bu,
      (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
      v4);
  }
  return 1000LL;
}
