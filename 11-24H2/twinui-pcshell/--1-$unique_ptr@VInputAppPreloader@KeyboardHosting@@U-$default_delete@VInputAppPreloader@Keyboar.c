/*
 * XREFs of ??1?$unique_ptr@VInputAppPreloader@KeyboardHosting@@U?$default_delete@VInputAppPreloader@KeyboardHosting@@@std@@@std@@QEAA@XZ @ 0x1802CEA20
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180253160 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18046CB28 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$32 @ 0x1806ED4E2 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$32.c)
 * Callees:
 *     ??R?$default_delete@VInputAppPreloader@KeyboardHosting@@@std@@QEBAXPEAVInputAppPreloader@KeyboardHosting@@@Z @ 0x180219CB4 (--R-$default_delete@VInputAppPreloader@KeyboardHosting@@@std@@QEBAXPEAVInputAppPreloader@Keyboar.c)
 */

void __fastcall std::unique_ptr<KeyboardHosting::InputAppPreloader>::~unique_ptr<KeyboardHosting::InputAppPreloader>(
        KeyboardHosting::InputAppPreloader **a1)
{
  if ( *a1 )
    std::default_delete<KeyboardHosting::InputAppPreloader>::operator()((__int64)a1, *a1);
}
