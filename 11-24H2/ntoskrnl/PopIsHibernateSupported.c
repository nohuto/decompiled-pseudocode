/*
 * XREFs of PopIsHibernateSupported @ 0x140A8BE18
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14032DC2C (PopCaptureSleepStudyStatistics.c)
 *     PopCheckAndHandleThermalConditions @ 0x14049EC88 (PopCheckAndHandleThermalConditions.c)
 *     PopPowerAggregatorDetermineTargetSystemPowerState @ 0x1409B84C8 (PopPowerAggregatorDetermineTargetSystemPowerState.c)
 *     PopVerifySystemPowerPolicy @ 0x1409B88AC (PopVerifySystemPowerPolicy.c)
 *     PopVerifySystemPowerState @ 0x140A7DC9C (PopVerifySystemPowerState.c)
 *     PopIsDozeSupported @ 0x140A8BDD8 (PopIsDozeSupported.c)
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
