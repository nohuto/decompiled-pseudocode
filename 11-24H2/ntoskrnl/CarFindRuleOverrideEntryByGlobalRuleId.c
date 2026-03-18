/*
 * XREFs of CarFindRuleOverrideEntryByGlobalRuleId @ 0x1406169A4
 * Callers:
 *     CarQueryReportActionForTriage @ 0x140616E00 (CarQueryReportActionForTriage.c)
 *     CarRegisterRuleOverride @ 0x140617030 (CarRegisterRuleOverride.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CarFindRuleOverrideEntryByGlobalRuleId(_QWORD **a1, int a2)
{
  _QWORD *i; // rax

  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    if ( *((_DWORD *)i - 1) == a2 )
      return i - 8;
  }
  return 0LL;
}
