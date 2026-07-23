/*
 * XREFs of CarCreateRuleViolationDetails @ 0x140614D20
 * Callers:
 *     CarReportDifPluginRuleViolation @ 0x140615800 (CarReportDifPluginRuleViolation.c)
 * Callees:
 *     CarInitializeRuleViolationDetails @ 0x140615130 (CarInitializeRuleViolationDetails.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CarCreateRuleViolationDetails(PVOID *a1)
{
  int v2; // ebx
  __int64 Pool2; // rax

  if ( a1 )
  {
    Pool2 = ExAllocatePool2(0x40uLL, 0x58uLL, 0x4E726143u);
    *a1 = (PVOID)Pool2;
    if ( Pool2 )
    {
      v2 = CarInitializeRuleViolationDetails(Pool2);
      if ( v2 < 0 )
        ExFreePoolWithTag(*a1, 0x4E726143u);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v2;
}
