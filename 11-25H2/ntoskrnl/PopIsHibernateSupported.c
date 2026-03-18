/*
 * XREFs of PopIsHibernateSupported @ 0x140A870FC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140485908 (PopCaptureSleepStudyStatistics.c)
 *     PopCheckAndHandleThermalConditions @ 0x14049FAD0 (PopCheckAndHandleThermalConditions.c)
 *     PopPowerAggregatorDetermineTargetSystemPowerState @ 0x140A0FEC8 (PopPowerAggregatorDetermineTargetSystemPowerState.c)
 *     PopVerifySystemPowerPolicy @ 0x140A102AC (PopVerifySystemPowerPolicy.c)
 *     PopVerifySystemPowerState @ 0x140A7A98C (PopVerifySystemPowerState.c)
 *     PopIsDozeSupported @ 0x140A870C0 (PopIsDozeSupported.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIsHibernateSupported(_BYTE *a1)
{
  bool result; // al

  result = 0;
  if ( a1[6] )
  {
    if ( a1[8] )
      return a1[22] == 2;
  }
  return result;
}
