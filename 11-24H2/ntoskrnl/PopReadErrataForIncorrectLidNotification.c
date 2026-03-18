/*
 * XREFs of PopReadErrataForIncorrectLidNotification @ 0x140C32F70
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     EmClientQueryRuleState @ 0x140B682E0 (EmClientQueryRuleState.c)
 */

__int64 PopReadErrataForIncorrectLidNotification()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF

  result = (unsigned int)PopPlatformAoAcCapabilityInitialized;
  if ( PopPlatformAoAcCapabilityInitialized && PopPlatformAoAc )
  {
    v1 = 1;
    result = EmClientQueryRuleState(EM_RULE_IGNORE_INCORRECT_LID_NOTIFICATIONS, &v1);
    if ( v1 == 2 )
      PopErrataReportingIncorrectLidState = 1;
  }
  return result;
}
