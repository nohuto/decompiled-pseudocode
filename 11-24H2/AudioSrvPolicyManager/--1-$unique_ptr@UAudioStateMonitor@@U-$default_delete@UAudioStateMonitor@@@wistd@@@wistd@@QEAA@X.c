/*
 * XREFs of ??1?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x18001F658
 * Callers:
 *     _AudioStateMonitorManager::RegisterAudioStateMonitor_::_1_::dtor$1 @ 0x18004B6FE (_AudioStateMonitorManager--RegisterAudioStateMonitor_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002067C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AudioStateMonitor@@QEAA@XZ @ 0x1800307F8 (--1AudioStateMonitor@@QEAA@XZ.c)
 */

void __fastcall wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>::~unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>(
        AudioStateMonitor **a1)
{
  AudioStateMonitor *v1; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    AudioStateMonitor::~AudioStateMonitor(v1);
    operator delete(v1, (const struct std::nothrow_t *)0x20);
  }
}
