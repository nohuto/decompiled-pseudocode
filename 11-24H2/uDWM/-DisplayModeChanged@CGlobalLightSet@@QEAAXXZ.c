/*
 * XREFs of ?DisplayModeChanged@CGlobalLightSet@@QEAAXXZ @ 0x180046CCC
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18009282C (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 * Callees:
 *     ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180046D20 (-PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CGlobalLightSet::DisplayModeChanged(CGlobalLightSet *this)
{
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  CGlobalLightSet::PositionCoordinateSpaceVisual(this);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
}
