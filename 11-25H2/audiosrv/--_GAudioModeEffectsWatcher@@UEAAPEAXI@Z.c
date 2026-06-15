/*
 * XREFs of ??_GAudioModeEffectsWatcher@@UEAAPEAXI@Z @ 0x1800B5C00
 * Callers:
 *     <none>
 * Callees:
 *     ??1AudioModeEffectsWatcher@@UEAA@XZ @ 0x1800A33AC (--1AudioModeEffectsWatcher@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

AudioModeEffectsWatcher *__fastcall AudioModeEffectsWatcher::`scalar deleting destructor'(
        AudioModeEffectsWatcher *this,
        char a2)
{
  AudioModeEffectsWatcher::~AudioModeEffectsWatcher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
