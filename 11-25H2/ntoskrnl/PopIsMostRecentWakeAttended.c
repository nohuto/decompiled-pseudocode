/*
 * XREFs of PopIsMostRecentWakeAttended @ 0x140B5EA58
 * Callers:
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x14074D510 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopGetMostRecentWakeInfo @ 0x1404B478C (PopGetMostRecentWakeInfo.c)
 *     PopWakeInfoDereference @ 0x1404BD2EC (PopWakeInfoDereference.c)
 */

char PopIsMostRecentWakeAttended()
{
  char v0; // bl
  __int64 MostRecentWakeInfo; // rax

  v0 = 1;
  MostRecentWakeInfo = PopGetMostRecentWakeInfo();
  if ( MostRecentWakeInfo )
  {
    v0 = *(_BYTE *)(MostRecentWakeInfo + 80);
    PopWakeInfoDereference(MostRecentWakeInfo);
  }
  return v0;
}
