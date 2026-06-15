/*
 * XREFs of _dynamic_initializer_for__g_CritSecSadMap__ @ 0x140002A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__g_CritSecSadMap__()
{
  InitializeCriticalSectionEx(&g_CritSecSadMap, 0, 0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_CritSecSadMap__);
}
