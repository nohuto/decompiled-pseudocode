/*
 * XREFs of ??1?$ComPtr@VAltEscHotkeyHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D0F18
 * Callers:
 *     _VirtualDesktopSwitchAnimator_CreateInstance_::_1_::dtor$0 @ 0x1806D829E (_VirtualDesktopSwitchAnimator_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopSwitchAnimator_VirtualDesktopSwitchAnimator_IVirtualDesktopManagerPrivate___&_IVirtualDesktopAnimationSyncNotificationServicePrivate___&_IMultitaskingViewVisibilityService___&__::_1_::dtor$2 @ 0x1806D82B0 (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopSwitchAnimator_VirtualDes_ea_1806D82B0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AltEscHotkeyHandler_AltEscHotkeyHandler_WeakReference::IWeakReference___&__::_1_::dtor$2 @ 0x1806EFBB3 (_Microsoft--WRL--Details--MakeAndInitialize_AltEscHotkeyHandler_AltEscHotkeyHandler_WeakReferenc.c)
 *     _AltEscHotkeyHandler_CreateInstance_::_1_::dtor$0 @ 0x1806EFBC5 (_AltEscHotkeyHandler_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AltEscHotkeyHandler>::~ComPtr<AltEscHotkeyHandler>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<AltEscHotkeyHandler>::InternalRelease(a1);
}
