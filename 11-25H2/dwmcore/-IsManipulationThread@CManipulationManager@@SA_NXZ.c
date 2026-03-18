/*
 * XREFs of ?IsManipulationThread@CManipulationManager@@SA_NXZ @ 0x1801ADE70
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1801AD948 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     <none>
 */

bool CManipulationManager::IsManipulationThread(void)
{
  return GetCurrentThreadId() == CManipulationManager::s_dwManipulationThreadId;
}
