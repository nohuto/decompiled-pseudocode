/*
 * XREFs of CarFindRuleClassConfigurationEntryByRuleClassId @ 0x14061696C
 * Callers:
 *     CarDeregisterRuleClassConfiguration @ 0x140616860 (CarDeregisterRuleClassConfiguration.c)
 *     CarDeregisterRuleOverride @ 0x140616900 (CarDeregisterRuleOverride.c)
 *     CarRegisterRuleOverride @ 0x140617030 (CarRegisterRuleOverride.c)
 *     CarRegisterRuleOverrideAllContexts @ 0x140617120 (CarRegisterRuleOverrideAllContexts.c)
 *     CarReportDifPluginRuleViolation @ 0x140617240 (CarReportDifPluginRuleViolation.c)
 *     CarSetCustomIdInRuleOverride @ 0x140617570 (CarSetCustomIdInRuleOverride.c)
 *     CarSetCustomRuleIdRange @ 0x1406175C0 (CarSetCustomRuleIdRange.c)
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
