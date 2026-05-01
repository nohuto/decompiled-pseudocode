/*
 * XREFs of _dynamic_initializer_for__Windows::System::CMemoryManager::s_levelDecreasedEvent__ @ 0x180010F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__Windows::System::CMemoryManager::s_levelDecreasedEvent__()
{
  InitializeSRWLock(&stru_18002FD20);
  InitializeSRWLock(&stru_18002FD28);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_levelDecreasedEvent__);
}
