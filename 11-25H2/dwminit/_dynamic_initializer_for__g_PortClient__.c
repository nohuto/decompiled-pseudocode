/*
 * XREFs of _dynamic_initializer_for__g_PortClient__ @ 0x180001FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__g_PortClient__()
{
  InitializeCriticalSection(&stru_180019DC0);
  byte_180019DE8 = 0;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_PortClient__);
}
