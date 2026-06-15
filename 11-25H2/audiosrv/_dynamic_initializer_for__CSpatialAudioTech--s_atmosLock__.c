/*
 * XREFs of _dynamic_initializer_for__CSpatialAudioTech::s_atmosLock__ @ 0x180007ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__CSpatialAudioTech::s_atmosLock__()
{
  InitializeCriticalSectionEx(&CSpatialAudioTech::s_atmosLock, 0, 0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CSpatialAudioTech::s_atmosLock__);
}
