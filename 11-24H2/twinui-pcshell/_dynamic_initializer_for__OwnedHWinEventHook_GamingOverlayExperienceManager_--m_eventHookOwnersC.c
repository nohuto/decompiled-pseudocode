/*
 * XREFs of _dynamic_initializer_for__OwnedHWinEventHook_GamingOverlayExperienceManager_::m_eventHookOwnersCS__ @ 0x180012F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__OwnedHWinEventHook_GamingOverlayExperienceManager_::m_eventHookOwnersCS__()
{
  InitializeCriticalSectionEx(&OwnedHWinEventHook<GamingOverlayExperienceManager>::m_eventHookOwnersCS, 0, 0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__OwnedHWinEventHook_GamingOverlayExperienceManager_::m_eventHookOwnersCS__);
}
