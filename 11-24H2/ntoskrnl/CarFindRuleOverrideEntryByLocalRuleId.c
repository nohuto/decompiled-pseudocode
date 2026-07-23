/*
 * XREFs of CarFindRuleOverrideEntryByLocalRuleId @ 0x140614F88
 * Callers:
 *     CarDeregisterRuleOverride @ 0x140614EC0 (CarDeregisterRuleOverride.c)
 *     CarSetCustomIdInRuleOverride @ 0x140615B30 (CarSetCustomIdInRuleOverride.c)
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
