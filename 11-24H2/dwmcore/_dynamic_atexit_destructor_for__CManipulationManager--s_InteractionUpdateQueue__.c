/*
 * XREFs of _dynamic_atexit_destructor_for__CManipulationManager::s_InteractionUpdateQueue__ @ 0x1802DFD00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__CManipulationManager::s_InteractionUpdateQueue__()
{
  CQueue<CResource *>::~CQueue<CResource *>(&CManipulationManager::s_InteractionUpdateQueue);
}
