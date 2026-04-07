/*
 * XREFs of ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18004A310
 * Callers:
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180020070 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180024708 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x18004A1D4 (-Initialize@CWindowList@@QEAAJXZ.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180052658 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18008B754 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18008FE50 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180090650 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800929E0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180092EB0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x1800ED848 (--1CWindowList@@UEAA@XZ.c)
 *     ?HandleScreenRotation@CWindowList@@QEAAJHH@Z @ 0x1800F069C (-HandleScreenRotation@CWindowList@@QEAAJHH@Z.c)
 *     ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800F0B80 (-IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800F36DC (-TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_POR.c)
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TransitionManager@Transitions@Udwm@winrt@@AEAA@XZ @ 0x18009612C (--0TransitionManager@Transitions@Udwm@winrt@@AEAA@XZ.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
struct winrt::Udwm::Transitions::TransitionManager *__fastcall winrt::Udwm::Transitions::TransitionManager::GetCurrent(
        __int64 a1,
        const struct std::nothrow_t *a2)
{
  struct winrt::Udwm::Transitions::TransitionManager *result; // rax
  winrt::Udwm::Transitions::TransitionManager *v3; // rbx

  result = winrt::Udwm::Transitions::TransitionManager::s_instance;
  if ( !winrt::Udwm::Transitions::TransitionManager::s_instance )
  {
    result = (struct winrt::Udwm::Transitions::TransitionManager *)operator new[](0x80uLL, a2);
    v3 = result;
    if ( result )
    {
      memset_0(result, 0, 0x80uLL);
      result = (struct winrt::Udwm::Transitions::TransitionManager *)winrt::Udwm::Transitions::TransitionManager::TransitionManager(v3);
    }
    winrt::Udwm::Transitions::TransitionManager::s_instance = result;
  }
  return result;
}
