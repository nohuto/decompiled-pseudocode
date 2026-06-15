/*
 * XREFs of _AudioStateMonitorManager::RegisterAudioStateMonitor_::_1_::dtor$1 @ 0x18004B6FE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioStateMonitorManager::RegisterAudioStateMonitor_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>::~unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>((AudioStateMonitor **)(a2 + 56));
}
