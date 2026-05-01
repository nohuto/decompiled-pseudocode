/*
 * XREFs of ?DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUIVirtualDesktopSwitchAnimator@@@Z @ 0x180093BC0
 * Callers:
 *     ?DelayInitialize@CVirtualDesktopHotkeyHandler@@W7EAAJPEAUIVirtualDesktopSwitchAnimator@@@Z @ 0x18055A4A0 (-DelayInitialize@CVirtualDesktopHotkeyHandler@@W7EAAJPEAUIVirtualDesktopSwitchAnimator@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopSwitchAnimator@@@Z @ 0x180093DAC (--4-$ComPtr@UIVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopSwitc.c)
 */

__int64 __fastcall CVirtualDesktopHotkeyHandler::DelayInitialize(
        CVirtualDesktopHotkeyHandler *this,
        struct IVirtualDesktopSwitchAnimator *a2)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopSwitchAnimator>::operator=((char *)this + 32, a2);
  return 0LL;
}
