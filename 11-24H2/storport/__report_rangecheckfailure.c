/*
 * XREFs of __report_rangecheckfailure @ 0x1400563F0
 * Callers:
 *     StorCompareScsiDeviceId @ 0x140033B0C (StorCompareScsiDeviceId.c)
 *     ParseTPerProperties @ 0x140140F20 (ParseTPerProperties.c)
 *     WppInitGlobalLogger @ 0x14018439C (WppInitGlobalLogger.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
