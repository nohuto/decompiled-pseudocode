/*
 * XREFs of ??_GAudioStateMonitorManager@@UEAAPEAXI@Z @ 0x180031000
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002067C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AudioStateMonitorManager@@UEAA@XZ @ 0x180030864 (--1AudioStateMonitorManager@@UEAA@XZ.c)
 */

AudioStateMonitorManager *__fastcall AudioStateMonitorManager::`scalar deleting destructor'(
        AudioStateMonitorManager *this,
        char a2)
{
  AudioStateMonitorManager::~AudioStateMonitorManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x88);
  return this;
}
