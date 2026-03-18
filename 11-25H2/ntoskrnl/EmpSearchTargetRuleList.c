/*
 * XREFs of EmpSearchTargetRuleList @ 0x14044EAB8
 * Callers:
 *     EmpUpdateRuleState @ 0x140492920 (EmpUpdateRuleState.c)
 *     EmpClientRuleRegisterNotification @ 0x1406FD804 (EmpClientRuleRegisterNotification.c)
 *     EmClientQueryRuleState @ 0x140B584B0 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140B585D0 (EmClientRuleEvaluate.c)
 *     EmpParseTargetRules @ 0x140C06A68 (EmpParseTargetRules.c)
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
