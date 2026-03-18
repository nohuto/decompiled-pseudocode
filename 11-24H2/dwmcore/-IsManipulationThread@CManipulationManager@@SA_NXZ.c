/*
 * XREFs of ?IsManipulationThread@CManipulationManager@@SA_NXZ @ 0x18018FCF8
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18018F7D0 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     <none>
 */

bool CManipulationManager::IsManipulationThread(void)
{
  return GetCurrentThreadId() == CManipulationManager::s_dwManipulationThreadId;
}
