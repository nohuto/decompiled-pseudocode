/*
 * XREFs of ??1?$CUnGuard@VCDwmCS@@@@QEAA@XZ @ 0x180087C48
 * Callers:
 *     _CTimer::_OnTimerCallback_::_1_::dtor$0 @ 0x1800F69A6 (_CTimer--_OnTimerCallback_--_1_--dtor$0.c)
 *     _CTransitionVisualController::RestoreWindow_::_1_::dtor$0 @ 0x1800F7588 (_CTransitionVisualController--RestoreWindow_--_1_--dtor$0.c)
 *     _CDesktopManager::Initialize_::_1_::dtor$12 @ 0x1800F76A9 (_CDesktopManager--Initialize_--_1_--dtor$12.c)
 * Callees:
 *     <none>
 */

void __fastcall CUnGuard<CDwmCS>::~CUnGuard<CDwmCS>(LPCRITICAL_SECTION *a1)
{
  EnterCriticalSection(*a1);
}
