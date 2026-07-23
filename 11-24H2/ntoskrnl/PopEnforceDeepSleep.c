/*
 * XREFs of PopEnforceDeepSleep @ 0x140AA710C
 * Callers:
 *     PopEnforceResiliencyScenarios @ 0x140AA7080 (PopEnforceResiliencyScenarios.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x1402B9DFC (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402B9FF0 (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepEnabled @ 0x14048E410 (PopDeepSleepEnabled.c)
 *     KeSetMaxDynamicTickDuration @ 0x1405ADB84 (KeSetMaxDynamicTickDuration.c)
 */

char PopEnforceDeepSleep()
{
  char result; // al
  unsigned int v1; // ecx
  char v2; // r8

  _InterlockedCompareExchange64(&PopMaxDynamicTickDurationOriginalValue, KiMaxDynamicTickDuration, 0LL);
  result = PopDeepSleepEnabled();
  if ( result && PopPdcIdleResiliency )
    v2 = 1;
  if ( v1 )
  {
    if ( !v2 )
    {
      if ( !PopDeepSleepEnforced )
      {
        KeSetMaxDynamicTickDuration(10000000LL * v1);
        PopDeepSleepEnforced = 1;
        PopDeepSleepClearDisengageReason(0);
        return PopDeepSleepClearDisengageReason(1u);
      }
      return result;
    }
  }
  else if ( !v2 )
  {
    return result;
  }
  if ( PopDeepSleepEnforced )
  {
    KeSetMaxDynamicTickDuration(PopMaxDynamicTickDurationOriginalValue);
    PopDeepSleepEnforced = 0;
    result = PopDeepSleepSetDisengageReason(0);
    if ( !byte_140F0B674 )
      return PopDeepSleepSetDisengageReason(1u);
  }
  return result;
}
