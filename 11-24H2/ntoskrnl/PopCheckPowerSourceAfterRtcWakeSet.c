/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeSet @ 0x1405D1998
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
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
