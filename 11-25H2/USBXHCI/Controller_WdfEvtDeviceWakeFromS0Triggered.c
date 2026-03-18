/*
 * XREFs of Controller_WdfEvtDeviceWakeFromS0Triggered @ 0x1400331F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x14002CE68 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceWakeFromS0Triggered(__int64 a1)
{
  char v1; // di
  int v2; // edx
  __int64 v3; // rbx

  v1 = a1;
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006B240)
                 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_q(*(_QWORD *)(v3 + 72), v2, 4, 95, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, v1);
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD))qword_14006BDB0)(UcxDriverGlobals, **(_QWORD **)(v3 + 152));
}
