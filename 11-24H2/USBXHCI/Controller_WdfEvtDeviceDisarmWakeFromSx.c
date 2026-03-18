/*
 * XREFs of Controller_WdfEvtDeviceDisarmWakeFromSx @ 0x14002C5E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x14002C6F8 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall Controller_WdfEvtDeviceDisarmWakeFromSx(__int64 a1)
{
  char v1; // di
  int v2; // edx
  __int64 v3; // rbx
  _UNKNOWN **result; // rax

  v1 = a1;
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006B240)
                 + 8);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    result = (_UNKNOWN **)WPP_RECORDER_SF_q(
                            *(_QWORD *)(v3 + 72),
                            v2,
                            4,
                            95,
                            (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
                            v1);
  }
  *(_BYTE *)(v3 + 868) = 0;
  return result;
}
