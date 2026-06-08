/*
 * XREFs of PepNotifyFeedbackRead @ 0x14000ED9C
 * Callers:
 *     PepDifferentialFrequencyRead @ 0x14000EBA0 (PepDifferentialFrequencyRead.c)
 *     PepDifferentialPerfRead @ 0x14000EC20 (PepDifferentialPerfRead.c)
 *     PepInstantaneousFrequencyRead @ 0x14000ECA0 (PepInstantaneousFrequencyRead.c)
 *     PepInstantaneousPerfRead @ 0x14000ED20 (PepInstantaneousPerfRead.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall PepNotifyFeedbackRead(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v4; // [rsp+28h] [rbp-10h]

  v2 = PoFxProcessorNotification(a1, 10LL, a2);
  if ( v2 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = v2;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x24u,
      (__int64)&WPP_a3d5211b01a83c7b779e65f1f4845e36_Traceguids,
      v4);
  }
  return (unsigned int)v2;
}
