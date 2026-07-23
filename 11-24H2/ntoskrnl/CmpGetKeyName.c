/*
 * XREFs of CmpGetKeyName @ 0x140C1A21C
 * Callers:
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140C18344 (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     EmpParseCallbacks @ 0x140C1840C (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140C192EC (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x140C19B08 (EmpParseTargetRules.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x140C1AB44 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x140C1AB70 (CmpSearchSectionByName.c)
 */

__int64 __fastcall CmpGetKeyName(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rax

  v4 = CmpSearchSectionByName(a1, a2);
  if ( v4 && (v5 = CmpSearchLineInSectionByIndex(v4, a3)) != 0 )
    return *(_QWORD *)(v5 + 8);
  else
    return 0LL;
}
