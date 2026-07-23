/*
 * XREFs of EmpSearchRuleDatabase @ 0x1404477EC
 * Callers:
 *     EmpClientRuleRegisterNotification @ 0x1407072A4 (EmpClientRuleRegisterNotification.c)
 *     EmClientQueryRuleState @ 0x140B6A420 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140B6A540 (EmClientRuleEvaluate.c)
 *     EmpParseRuleTerm @ 0x140C18E50 (EmpParseRuleTerm.c)
 *     EmpParseRules @ 0x140C192EC (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x140C19B08 (EmpParseTargetRules.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EmpSearchRuleDatabase(_QWORD *a1)
{
  _QWORD *i; // rdx
  _QWORD *v2; // r8
  __int64 v3; // r9

  for ( i = (_QWORD *)EmpRuleListHead; ; i = (_QWORD *)*i )
  {
    v2 = 0LL;
    if ( !i )
      break;
    v2 = i - 3;
    v3 = *(i - 3) - *a1;
    if ( !v3 )
      v3 = v2[1] - a1[1];
    if ( !v3 )
      break;
  }
  return v2;
}
