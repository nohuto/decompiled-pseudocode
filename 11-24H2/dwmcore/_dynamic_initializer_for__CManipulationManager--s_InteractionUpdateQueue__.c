/*
 * XREFs of _dynamic_initializer_for__CManipulationManager::s_InteractionUpdateQueue__ @ 0x180007450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__CManipulationManager::s_InteractionUpdateQueue__()
{
  InitializeCriticalSection(&stru_1803F9178);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CManipulationManager::s_InteractionUpdateQueue__);
}
