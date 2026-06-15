/*
 * XREFs of ??_GAudioStateMonitorManager@@UEAAPEAXI@Z @ 0x1800339E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AudioStateMonitorManager@@UEAA@XZ @ 0x180033244 (--1AudioStateMonitorManager@@UEAA@XZ.c)
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
