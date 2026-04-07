/*
 * XREFs of ??1?$CUnGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800A95F8
 * Callers:
 *     _CTimer::_OnTimerCallback_::_1_::dtor$0 @ 0x180067232 (_CTimer--_OnTimerCallback_--_1_--dtor$0.c)
 *     _CDesktopManager::Initialize_::_1_::dtor$12 @ 0x18006772A (_CDesktopManager--Initialize_--_1_--dtor$12.c)
 *     _CDesktopManager::DwmLivePreviewWndProc_::_1_::dtor$1 @ 0x1800B3FE3 (_CDesktopManager--DwmLivePreviewWndProc_--_1_--dtor$1.c)
 *     _CDesktopManager::DwmLivePreviewWndProc_::_1_::dtor$2 @ 0x1800B3FEF (_CDesktopManager--DwmLivePreviewWndProc_--_1_--dtor$2.c)
 *     _CDesktopManager::NotifyRedirectionShutdown_::_1_::dtor$0 @ 0x1800B4F18 (_CDesktopManager--NotifyRedirectionShutdown_--_1_--dtor$0.c)
 *     _CTransitionVisualController::RestoreWindow_::_1_::dtor$0 @ 0x1800EBDF8 (_CTransitionVisualController--RestoreWindow_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CUnGuard<CDwmCS>::~CUnGuard<CDwmCS>(LPCRITICAL_SECTION *a1)
{
  EnterCriticalSection(*a1);
}
