/*
 * XREFs of ??1?$unique_ptr@VInvocationMethodTracker@KeyboardHosting@@U?$default_delete@VInvocationMethodTracker@KeyboardHosting@@@std@@@std@@QEAA@XZ @ 0x18022E6DC
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180253160 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18046CB28 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$40 @ 0x1806ED5AA (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$40.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<KeyboardHosting::InvocationMethodTracker>::~unique_ptr<KeyboardHosting::InvocationMethodTracker>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x18);
}
