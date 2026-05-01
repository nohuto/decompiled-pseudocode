/*
 * XREFs of _dynamic_initializer_for__Windows::System::CMemoryManager::s_levelIncreasedEvent__ @ 0x180011230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__Windows::System::CMemoryManager::s_levelIncreasedEvent__()
{
  InitializeSRWLock(&stru_18002FD00);
  InitializeSRWLock(&stru_18002FD08);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_levelIncreasedEvent__);
}
