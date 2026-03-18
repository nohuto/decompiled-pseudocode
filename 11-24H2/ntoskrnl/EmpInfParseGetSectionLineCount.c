/*
 * XREFs of EmpInfParseGetSectionLineCount @ 0x140C162F0
 * Callers:
 *     EmpParseCallbacks @ 0x140C1640C (EmpParseCallbacks.c)
 *     EmpParseEntryTypes @ 0x140C16644 (EmpParseEntryTypes.c)
 *     EmpParseRules @ 0x140C172EC (EmpParseRules.c)
 *     EmpParseStrings @ 0x140C17670 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x140C17B08 (EmpParseTargetRules.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x140C18B44 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x140C18B70 (CmpSearchSectionByName.c)
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
