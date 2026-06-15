/*
 * XREFs of _dynamic_initializer_for__g_csVadList__ @ 0x180007E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__g_csVadList__()
{
  InitializeCriticalSectionEx(&g_csVadList, 0, 0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_csVadList__);
}
