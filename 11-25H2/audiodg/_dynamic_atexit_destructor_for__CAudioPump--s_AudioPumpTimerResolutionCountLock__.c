/*
 * XREFs of _dynamic_atexit_destructor_for__CAudioPump::s_AudioPumpTimerResolutionCountLock__ @ 0x1400978F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__CAudioPump::s_AudioPumpTimerResolutionCountLock__()
{
  DeleteCriticalSection(&CAudioPump::s_AudioPumpTimerResolutionCountLock);
}
