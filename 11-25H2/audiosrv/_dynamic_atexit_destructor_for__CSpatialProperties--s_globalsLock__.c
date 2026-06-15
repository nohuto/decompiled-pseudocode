/*
 * XREFs of _dynamic_atexit_destructor_for__CSpatialProperties::s_globalsLock__ @ 0x180169C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__CSpatialProperties::s_globalsLock__()
{
  DeleteCriticalSection(&CSpatialProperties::s_globalsLock);
}
