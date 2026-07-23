/*
 * XREFs of CarDeleteRuleViolationDetails @ 0x140614DC0
 * Callers:
 *     CarReportDifPluginRuleViolation @ 0x140615800 (CarReportDifPluginRuleViolation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall CarDeleteRuleViolationDetails(PVOID *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( a1 && *a1 )
  {
    v2 = (void *)*((_QWORD *)*a1 + 7);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x4E726143u);
    v3 = (void *)*((_QWORD *)*a1 + 3);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x4E726143u);
    ExFreePoolWithTag(*a1, 0x4E726143u);
    *a1 = 0LL;
  }
}
