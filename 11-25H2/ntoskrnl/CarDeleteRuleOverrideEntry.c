/*
 * XREFs of CarDeleteRuleOverrideEntry @ 0x14060A80C
 * Callers:
 *     CarDeregisterRuleClassConfiguration @ 0x14060A8A0 (CarDeregisterRuleClassConfiguration.c)
 *     CarDeregisterRuleOverride @ 0x14060A940 (CarDeregisterRuleOverride.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CarDeleteRuleOverrideEntry(void **a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = *a1;
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x4E726143u);
      *a1 = 0LL;
    }
  }
}
