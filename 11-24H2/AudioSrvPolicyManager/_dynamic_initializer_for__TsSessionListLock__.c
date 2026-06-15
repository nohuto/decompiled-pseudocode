/*
 * XREFs of _dynamic_initializer_for__TsSessionListLock__ @ 0x180001D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__TsSessionListLock__()
{
  InitializeCriticalSectionEx(&stru_180064A78, 0, 0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__TsSessionListLock__);
}
