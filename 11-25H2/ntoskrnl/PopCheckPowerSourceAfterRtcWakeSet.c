/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeSet @ 0x1405CF7C8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 */

__int64 PopCheckPowerSourceAfterRtcWakeSet()
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  KeResetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted);
  v1[0] = 0LL;
  v1[1] = -1LL;
  return KeSetTimer2(
           (__int64)&PopCheckPowerSourceAfterRtcWakeTimer,
           (LARGE_INTEGER)(-10000000LL * (unsigned int)PopCheckPowerSourceAfterRtcWakeTime),
           0LL,
           (__int64)v1);
}
