/*
 * XREFs of CarDeleteRuleOverrideEntry @ 0x1406167CC
 * Callers:
 *     CarDeregisterRuleClassConfiguration @ 0x140616860 (CarDeregisterRuleClassConfiguration.c)
 *     CarDeregisterRuleOverride @ 0x140616900 (CarDeregisterRuleOverride.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
