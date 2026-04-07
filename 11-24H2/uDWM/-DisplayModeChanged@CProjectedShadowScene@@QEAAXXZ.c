/*
 * XREFs of ?DisplayModeChanged@CProjectedShadowScene@@QEAAXXZ @ 0x180099828
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18009282C (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 * Callees:
 *     ?PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x180088E48 (-PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProjectedShadowScene::DisplayModeChanged(CProjectedShadowScene *this)
{
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  CProjectedShadowScene::PositionProjectedShadowReceiverVisual(this);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
}
