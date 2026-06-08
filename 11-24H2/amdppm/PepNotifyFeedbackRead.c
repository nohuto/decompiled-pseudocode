/*
 * XREFs of PepNotifyFeedbackRead @ 0x14000CF4C
 * Callers:
 *     PepDifferentialFrequencyRead @ 0x14000CD50 (PepDifferentialFrequencyRead.c)
 *     PepDifferentialPerfRead @ 0x14000CDD0 (PepDifferentialPerfRead.c)
 *     PepInstantaneousFrequencyRead @ 0x14000CE50 (PepInstantaneousFrequencyRead.c)
 *     PepInstantaneousPerfRead @ 0x14000CED0 (PepInstantaneousPerfRead.c)
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
