/*
 * XREFs of EmpInfParseGetSectionLineCount @ 0x140C05250
 * Callers:
 *     EmpParseCallbacks @ 0x140C0536C (EmpParseCallbacks.c)
 *     EmpParseEntryTypes @ 0x140C055A4 (EmpParseEntryTypes.c)
 *     EmpParseRules @ 0x140C0624C (EmpParseRules.c)
 *     EmpParseStrings @ 0x140C065D0 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x140C06A68 (EmpParseTargetRules.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x140C07AA4 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x140C07AD0 (CmpSearchSectionByName.c)
 */

__int64 __fastcall EmpInfParseGetSectionLineCount(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  __int64 v5; // rax

  for ( i = 0; ; ++i )
  {
    v5 = CmpSearchSectionByName(a1, a2);
    if ( !v5 || !CmpSearchLineInSectionByIndex(v5, i) )
      break;
  }
  return i;
}
