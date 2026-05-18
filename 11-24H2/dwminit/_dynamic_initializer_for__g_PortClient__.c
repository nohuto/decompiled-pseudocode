/*
 * XREFs of _dynamic_initializer_for__g_PortClient__ @ 0x180001FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__g_PortClient__()
{
  InitializeCriticalSection(&stru_18001ADE0);
  byte_18001AE08 = 0;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_PortClient__);
}
