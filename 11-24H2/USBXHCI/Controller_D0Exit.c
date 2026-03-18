/*
 * XREFs of Controller_D0Exit @ 0x14001A12C
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1400379B0 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     Register_ControllerStop @ 0x14001A214 (Register_ControllerStop.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qL @ 0x14003E044 (WPP_RECORDER_SF_qL.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_D0Exit(_QWORD *a1, char a2, __int64 a3)
{
  int v5; // edx
  __int64 result; // rax
  int v7; // edx

  LOBYTE(a3) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2560))(
    WdfDriverGlobals,
    a1[95],
    a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_qL(a1[9], v5, 4, 127, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, (char)a1, a2);
  }
  result = Register_ControllerStop(a1[11]);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    return WPP_RECORDER_SF_d(a1[9], v7, 4, 128, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, result);
  }
  return result;
}
