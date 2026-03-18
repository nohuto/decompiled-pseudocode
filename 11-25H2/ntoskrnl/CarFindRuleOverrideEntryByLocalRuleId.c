/*
 * XREFs of CarFindRuleOverrideEntryByLocalRuleId @ 0x14060AA08
 * Callers:
 *     CarDeregisterRuleOverride @ 0x14060A940 (CarDeregisterRuleOverride.c)
 *     CarSetCustomIdInRuleOverride @ 0x14060B5B0 (CarSetCustomIdInRuleOverride.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CarFindRuleOverrideEntryByLocalRuleId(_QWORD **a1, int a2)
{
  _QWORD *i; // rax

  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    if ( *((_DWORD *)i - 16) == a2 )
      return i - 8;
  }
  return 0LL;
}
