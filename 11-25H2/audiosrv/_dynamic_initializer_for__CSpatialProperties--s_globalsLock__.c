/*
 * XREFs of _dynamic_initializer_for__CSpatialProperties::s_globalsLock__ @ 0x180008000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__CSpatialProperties::s_globalsLock__()
{
  InitializeCriticalSectionEx(&CSpatialProperties::s_globalsLock, 0, 0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CSpatialProperties::s_globalsLock__);
}
