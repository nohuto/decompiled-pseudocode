/*
 * XREFs of _dynamic_initializer_for__g_lockBridgeEndpointRegistry__ @ 0x140002AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__g_lockBridgeEndpointRegistry__()
{
  InitializeCriticalSectionEx(&g_lockBridgeEndpointRegistry, 0, 0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_lockBridgeEndpointRegistry__);
}
