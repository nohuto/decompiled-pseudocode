/*
 * XREFs of ??_GAudioEffectsWatcher@@UEAAPEAXI@Z @ 0x1800B3210
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AudioEffectsWatcher@@UEAA@XZ @ 0x1800B2FB0 (--1AudioEffectsWatcher@@UEAA@XZ.c)
 */

AudioEffectsWatcher *__fastcall AudioEffectsWatcher::`scalar deleting destructor'(AudioEffectsWatcher *this, char a2)
{
  AudioEffectsWatcher::~AudioEffectsWatcher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC0);
  return this;
}
