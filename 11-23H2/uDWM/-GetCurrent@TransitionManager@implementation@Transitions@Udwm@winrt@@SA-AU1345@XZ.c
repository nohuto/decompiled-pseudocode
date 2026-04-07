/*
 * XREFs of ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x18002E7F0
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18002E360 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x18002E66C (-Initialize@CWindowList@@QEAAJXZ.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EB90 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18003EF90 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180049B90 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18004C100 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SA?AU1234@XZ @ 0x1800FD1F4 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SA-AU1234@XZ.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x180108658 (--1CWindowList@@UEAA@XZ.c)
 *     ?HandleScreenRotation@CWindowList@@QEAAJHH@Z @ 0x18010A670 (-HandleScreenRotation@CWindowList@@QEAAJHH@Z.c)
 *     ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x18010ABC0 (-IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18010C124 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 *     ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18010CD38 (-TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_POR.c)
 * Callees:
 *     ??$make_self@UTransitionManager@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA?AU?$com_ptr@UTransitionManager@implementation@Transitions@Udwm@winrt@@@0@XZ @ 0x18001CB54 (--$make_self@UTransitionManager@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA-AU-$com_ptr.c)
 *     ??$as@UTransitionManager@Transitions@Udwm@winrt@@U1implementation@234@$0A@@impl@winrt@@YA?AUTransitionManager@Transitions@Udwm@1@PEAU2implementation@341@@Z @ 0x18002E878 (--$as@UTransitionManager@Transitions@Udwm@winrt@@U1implementation@234@$0A@@impl@winrt@@YA-AUTran.c)
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x1800E7620 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransitionHandler@implementation@Private@.c)
 */

winrt::Udwm::Transitions::implementation::TransitionManager *__fastcall winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent(
        winrt::Udwm::Transitions::implementation::TransitionManager *a1)
{
  __int64 *v3; // rdi
  __int64 v4; // rcx
  winrt::Udwm::Transitions::implementation::TransitionManager *v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = a1;
  if ( !winrt::Udwm::Transitions::implementation::TransitionManager::m_instance )
  {
    v3 = (__int64 *)winrt::make_self<winrt::Udwm::Transitions::implementation::TransitionManager,>(&v5);
    if ( &winrt::Udwm::Transitions::implementation::TransitionManager::m_instance != v3 )
    {
      if ( winrt::Udwm::Transitions::implementation::TransitionManager::m_instance )
        ((void (*)(void))winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler>::unconditional_release_ref)();
      v4 = *v3;
      *v3 = 0LL;
      winrt::Udwm::Transitions::implementation::TransitionManager::m_instance = v4;
    }
    if ( v5 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler>::unconditional_release_ref(&v5);
  }
  winrt::impl::as<winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::implementation::TransitionManager,0>(
    a1,
    winrt::Udwm::Transitions::implementation::TransitionManager::m_instance);
  return a1;
}
