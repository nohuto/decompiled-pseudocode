/*
 * XREFs of PopEnforceDeepSleep @ 0x140AA6B7C
 * Callers:
 *     PopEnforceResiliencyScenarios @ 0x140AA6AF0 (PopEnforceResiliencyScenarios.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x140354D44 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x140354F38 (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepEnabled @ 0x140494C44 (PopDeepSleepEnabled.c)
 *     KeSetMaxDynamicTickDuration @ 0x1405AD284 (KeSetMaxDynamicTickDuration.c)
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
    if ( !byte_140F0B8D4 )
      return PopDeepSleepSetDisengageReason(1u);
  }
  return result;
}
