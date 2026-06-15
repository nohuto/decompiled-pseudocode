/*
 * XREFs of ??_ECMMNotificationDelegator@AudioEffectsWatcher@@UEAAPEAXI@Z @ 0x1800B4690
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMMNotificationDelegator@AudioEffectsWatcher@@UEAA@XZ @ 0x1800B44D4 (--1CMMNotificationDelegator@AudioEffectsWatcher@@UEAA@XZ.c)
 */

void **__fastcall AudioEffectsWatcher::CMMNotificationDelegator::`vector deleting destructor'(void **this, char a2)
{
  AudioEffectsWatcher::CMMNotificationDelegator::~CMMNotificationDelegator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
