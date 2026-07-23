/*
 * XREFs of CarInitializeRuleViolationDetails @ 0x140615130
 * Callers:
 *     CarCreateRuleViolationDetails @ 0x140614D20 (CarCreateRuleViolationDetails.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall CarInitializeRuleViolationDetails(void *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1 )
    memset_0(a1, 0, 0x58uLL);
  else
    return (unsigned int)-1073741811;
  return v1;
}
