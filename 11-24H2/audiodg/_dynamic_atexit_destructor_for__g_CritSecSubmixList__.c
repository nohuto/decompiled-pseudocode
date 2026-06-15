/*
 * XREFs of _dynamic_atexit_destructor_for__g_CritSecSubmixList__ @ 0x1400973D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_CritSecSubmixList__()
{
  DeleteCriticalSection(&g_CritSecSubmixList);
}
