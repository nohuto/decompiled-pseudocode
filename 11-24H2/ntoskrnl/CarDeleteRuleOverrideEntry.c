/*
 * XREFs of CarDeleteRuleOverrideEntry @ 0x140614D8C
 * Callers:
 *     CarDeregisterRuleClassConfiguration @ 0x140614E20 (CarDeregisterRuleClassConfiguration.c)
 *     CarDeregisterRuleOverride @ 0x140614EC0 (CarDeregisterRuleOverride.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
