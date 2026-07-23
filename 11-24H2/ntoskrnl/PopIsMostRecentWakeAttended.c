/*
 * XREFs of PopIsMostRecentWakeAttended @ 0x140B6F3A8
 * Callers:
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x140757C90 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopGetMostRecentWakeInfo @ 0x1404AE8BC (PopGetMostRecentWakeInfo.c)
 *     PopWakeInfoDereference @ 0x1404B735C (PopWakeInfoDereference.c)
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
