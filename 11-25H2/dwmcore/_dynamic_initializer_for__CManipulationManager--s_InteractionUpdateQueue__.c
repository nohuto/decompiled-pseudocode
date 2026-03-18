/*
 * XREFs of _dynamic_initializer_for__CManipulationManager::s_InteractionUpdateQueue__ @ 0x180007530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__CManipulationManager::s_InteractionUpdateQueue__()
{
  InitializeCriticalSection(&stru_180405178);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CManipulationManager::s_InteractionUpdateQueue__);
}
