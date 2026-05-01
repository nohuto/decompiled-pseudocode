/*
 * XREFs of ??1CriticalSection@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180236FA8
 * Callers:
 *     _CDesktopPositioner::CDesktopPositioner_::_1_::dtor$1 @ 0x1806CEE2D (_CDesktopPositioner--CDesktopPositioner_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::InputSwitchingManager_::_1_::dtor$1 @ 0x1806D428D (_winrt--Windows--Internal--Shell--implementation--InputSwitchingManager--InputSwitchingManager_-.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$23 @ 0x1806E22B6 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$23.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$28 @ 0x1806E2333 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$28.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$29 @ 0x1806E234C (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$29.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$33 @ 0x1806E23B0 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$33.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$42 @ 0x1806E2491 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$42.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$45 @ 0x1806E24DC (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$45.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$47 @ 0x1806E250E (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$47.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$49 @ 0x1806E2540 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$49.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$52 @ 0x1806E258B (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$52.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$12 @ 0x1806ED2EE (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$12.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$16 @ 0x1806ED352 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$16.c)
 *     _CMultitaskingViewManager::CMultitaskingViewManager_::_1_::dtor$1 @ 0x1806EE799 (_CMultitaskingViewManager--CMultitaskingViewManager_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
