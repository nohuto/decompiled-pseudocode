/*
 * XREFs of PepNotifyFeedbackRead @ 0x14000C22C
 * Callers:
 *     PepDifferentialFrequencyRead @ 0x14000C030 (PepDifferentialFrequencyRead.c)
 *     PepDifferentialPerfRead @ 0x14000C0B0 (PepDifferentialPerfRead.c)
 *     PepInstantaneousFrequencyRead @ 0x14000C130 (PepInstantaneousFrequencyRead.c)
 *     PepInstantaneousPerfRead @ 0x14000C1B0 (PepInstantaneousPerfRead.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall PepNotifyFeedbackRead(__int64 a1, __int64 a2)
{
  int v2; // edx
  int v3; // ebx

  v3 = PoFxProcessorNotification(a1, 10LL, a2);
  if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      2,
      36,
      (__int64)&WPP_a3d5211b01a83c7b779e65f1f4845e36_Traceguids,
      v3);
  }
  return (unsigned int)v3;
}
