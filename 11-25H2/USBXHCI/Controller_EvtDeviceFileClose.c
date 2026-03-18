/*
 * XREFs of Controller_EvtDeviceFileClose @ 0x1400320A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x14000D698 (WPP_RECORDER_SF_qd.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1400425C4 (Controller_StopTimeTrackingForHandle.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_EvtDeviceFileClose(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
             WdfDriverGlobals,
             a1,
             off_14006B218);
  if ( *(_BYTE *)(result + 48) )
  {
    v3 = *(_QWORD *)(result + 40);
    result = Controller_StopTimeTrackingForHandle(v3, a1, 0LL);
    if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return WPP_RECORDER_SF_qd(
               *(_QWORD *)(v3 + 72),
               2u,
               4u,
               0x12Du,
               (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
               a1,
               result);
  }
  return result;
}
