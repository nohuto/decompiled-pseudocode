/*
 * XREFs of EmpSearchTargetRuleList @ 0x14044FA4C
 * Callers:
 *     EmpUpdateRuleState @ 0x140491B80 (EmpUpdateRuleState.c)
 *     EmpClientRuleRegisterNotification @ 0x1407096E4 (EmpClientRuleRegisterNotification.c)
 *     EmClientQueryRuleState @ 0x140B682E0 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140B68400 (EmClientRuleEvaluate.c)
 *     EmpParseTargetRules @ 0x140C17B08 (EmpParseTargetRules.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EmpSearchTargetRuleList(__int64 a1)
{
  _QWORD *i; // rdx
  _QWORD *result; // rax

  for ( i = (_QWORD *)EmpTargetRuleListHead; ; i = (_QWORD *)*i )
  {
    result = 0LL;
    if ( !i )
      break;
    result = i - 4;
    if ( *(i - 3) == a1 )
      break;
  }
  return result;
}
