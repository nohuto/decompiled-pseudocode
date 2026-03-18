/*
 * XREFs of CarFindRuleClassConfigurationEntryByRuleClassId @ 0x14060A9AC
 * Callers:
 *     CarDeregisterRuleClassConfiguration @ 0x14060A8A0 (CarDeregisterRuleClassConfiguration.c)
 *     CarDeregisterRuleOverride @ 0x14060A940 (CarDeregisterRuleOverride.c)
 *     CarRegisterRuleOverride @ 0x14060B070 (CarRegisterRuleOverride.c)
 *     CarRegisterRuleOverrideAllContexts @ 0x14060B160 (CarRegisterRuleOverrideAllContexts.c)
 *     CarReportDifPluginRuleViolation @ 0x14060B280 (CarReportDifPluginRuleViolation.c)
 *     CarSetCustomIdInRuleOverride @ 0x14060B5B0 (CarSetCustomIdInRuleOverride.c)
 *     CarSetCustomRuleIdRange @ 0x14060B600 (CarSetCustomRuleIdRange.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall CarFindRuleClassConfigurationEntryByRuleClassId(__int64 a1, int a2)
{
  __int64 *v2; // rax

  v2 = (__int64 *)CarConfigurationEntries;
  if ( (__int64 *)CarConfigurationEntries != &CarConfigurationEntries && CarConfigurationEntries )
  {
    while ( v2 != &CarConfigurationEntries )
    {
      if ( *((_DWORD *)v2 - 21) == a2 )
        return v2 - 11;
      v2 = (__int64 *)*v2;
    }
  }
  return 0LL;
}
