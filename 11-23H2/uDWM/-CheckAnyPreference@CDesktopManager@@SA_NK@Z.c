/*
 * XREFs of ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180025CB4
 * Callers:
 *     ?IsEnabled@CStoryboard@@UEAA_NXZ @ 0x18000A980 (-IsEnabled@CStoryboard@@UEAA_NXZ.c)
 *     ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x18000AEFC (-_IsAnimationNeeded@CAccent@@IEAA_NXZ.c)
 *     ?AddInstructionsForBackgroundInNewVirtualScreen@CDisplayAnimatedVisual@@IEAAJXZ @ 0x180018D6C (-AddInstructionsForBackgroundInNewVirtualScreen@CDisplayAnimatedVisual@@IEAAJXZ.c)
 *     ?CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDisplayAnimatedVisual@@@Z @ 0x1800208C4 (-CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDis.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x180025C58 (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x180027FF8 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180037364 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ @ 0x180065E8C (-RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x1800B4D00 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x180108EAC (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x18010A900 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18010C124 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::CheckAnyPreference(unsigned int a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 9) + 72LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
           a1);
}
