/*
 * XREFs of PopIsMostRecentWakeAttended @ 0x140B6DB08
 * Callers:
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1407597F0 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopGetMostRecentWakeInfo @ 0x1404B409C (PopGetMostRecentWakeInfo.c)
 *     PopWakeInfoDereference @ 0x1404BC44C (PopWakeInfoDereference.c)
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
