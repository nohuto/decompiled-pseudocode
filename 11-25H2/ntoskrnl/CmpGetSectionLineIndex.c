/*
 * XREFs of CmpGetSectionLineIndex @ 0x140C071B4
 * Callers:
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140C052A4 (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     EmpParseCallbacks @ 0x140C0536C (EmpParseCallbacks.c)
 *     EmpParseEntryTypes @ 0x140C055A4 (EmpParseEntryTypes.c)
 *     EmpParseRuleExpression @ 0x140C05860 (EmpParseRuleExpression.c)
 *     EmpParseRules @ 0x140C0624C (EmpParseRules.c)
 *     EmpParseStrings @ 0x140C065D0 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x140C06A68 (EmpParseTargetRules.c)
 * Callees:
 *     CmpProcessForSimpleStringSub @ 0x140C07A00 (CmpProcessForSimpleStringSub.c)
 *     CmpSearchLineInSectionByIndex @ 0x140C07AA4 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x140C07AD0 (CmpSearchSectionByName.c)
 */

__int64 __fastcall CmpGetSectionLineIndex(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rdx
  int v10; // ecx

  v7 = CmpSearchSectionByName(a1, a2);
  if ( v7 )
  {
    v8 = CmpSearchLineInSectionByIndex(v7, a3);
    if ( v8 )
    {
      v9 = *(_QWORD **)(v8 + 16);
      v10 = 0;
      if ( a4 )
      {
        while ( v9 )
        {
          v9 = (_QWORD *)*v9;
          if ( ++v10 >= a4 )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        if ( v9 )
          return CmpProcessForSimpleStringSub(a1, v9[1]);
      }
    }
  }
  return 0LL;
}
