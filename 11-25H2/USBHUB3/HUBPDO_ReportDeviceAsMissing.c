/*
 * XREFs of HUBPDO_ReportDeviceAsMissing @ 0x14001A860
 * Callers:
 *     HUBDSM_ReportingDeviceMissing @ 0x140023A60 (HUBDSM_ReportingDeviceMissing.c)
 *     HUBDSM_ReportingFailedDeviceAsMissing @ 0x140023AB0 (HUBDSM_ReportingFailedDeviceAsMissing.c)
 *     HUBDSM_WaitingForReportedMissingOnDetachInConfigured @ 0x140026060 (HUBDSM_WaitingForReportedMissingOnDetachInConfigured.c)
 *     HUBDSM_WaitingForReportedMissingOnDetachInUnConfigured @ 0x1400260A0 (HUBDSM_WaitingForReportedMissingOnDetachInUnConfigured.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

void __fastcall HUBPDO_ReportDeviceAsMissing(__int64 a1)
{
  KIRQL v2; // bl
  __int64 v3; // rax
  int v4; // eax
  int v5; // [rsp+28h] [rbp-10h]

  v2 = KfRaiseIrql(2u);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1752))(WdfDriverGlobals, v3);
  if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      2u,
      0x8Eu,
      (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
      v5);
  }
  KeLowerIrql(v2);
}
