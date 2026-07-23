/*
 * XREFs of CarFindRuleClassConfigurationEntryByRuleClassId @ 0x140614F2C
 * Callers:
 *     CarDeregisterRuleClassConfiguration @ 0x140614E20 (CarDeregisterRuleClassConfiguration.c)
 *     CarDeregisterRuleOverride @ 0x140614EC0 (CarDeregisterRuleOverride.c)
 *     CarRegisterRuleOverride @ 0x1406155F0 (CarRegisterRuleOverride.c)
 *     CarRegisterRuleOverrideAllContexts @ 0x1406156E0 (CarRegisterRuleOverrideAllContexts.c)
 *     CarReportDifPluginRuleViolation @ 0x140615800 (CarReportDifPluginRuleViolation.c)
 *     CarSetCustomIdInRuleOverride @ 0x140615B30 (CarSetCustomIdInRuleOverride.c)
 *     CarSetCustomRuleIdRange @ 0x140615B80 (CarSetCustomRuleIdRange.c)
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
