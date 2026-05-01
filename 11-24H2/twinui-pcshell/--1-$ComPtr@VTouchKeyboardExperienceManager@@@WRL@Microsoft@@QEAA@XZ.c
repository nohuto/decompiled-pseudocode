/*
 * XREFs of ??1?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D0D60
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_TouchKeyboardExperienceManager_TouchKeyboardExperienceManager__::_1_::dtor$2 @ 0x1806D9474 (_Microsoft--WRL--Details--MakeAndInitialize_TouchKeyboardExperienceManager_TouchKey_ea_1806D9474.c)
 *     _TouchKeyboardExperienceManagerCF::CreateInstance_::_1_::dtor$0 @ 0x1806DD79D (_TouchKeyboardExperienceManagerCF--CreateInstance_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::AnimationGapTimerCallbackInternal_::_1_::dtor$0 @ 0x1806ED872 (_TouchKeyboardExperienceManager--AnimationGapTimerCallbackInternal_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::RetryGettingInputAppIdTimerCallback_::_1_::dtor$0 @ 0x1806EDAD9 (_TouchKeyboardExperienceManager--RetryGettingInputAppIdTimerCallback_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::SizeOrModeChangeFadeOutAnimationTimerCallback_::_1_::dtor$1 @ 0x1806EDAFD (_TouchKeyboardExperienceManager--SizeOrModeChangeFadeOutAnimationTimerCallback_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::~ComPtr<TouchKeyboardExperienceManager>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease(a1);
}
