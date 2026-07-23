/*
 * XREFs of PopIsHibernateSupported @ 0x140A88308
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402B63C0 (PopCaptureSleepStudyStatistics.c)
 *     PopCheckAndHandleThermalConditions @ 0x140499AC0 (PopCheckAndHandleThermalConditions.c)
 *     PopPowerAggregatorDetermineTargetSystemPowerState @ 0x14099EB18 (PopPowerAggregatorDetermineTargetSystemPowerState.c)
 *     PopVerifySystemPowerPolicy @ 0x14099EEFC (PopVerifySystemPowerPolicy.c)
 *     PopVerifySystemPowerState @ 0x140A77F9C (PopVerifySystemPowerState.c)
 *     PopIsDozeSupported @ 0x140A882C8 (PopIsDozeSupported.c)
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
