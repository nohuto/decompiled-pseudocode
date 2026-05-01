/*
 * XREFs of ??1?$ComPtr@VCVirtualDesktopManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18023757C
 * Callers:
 *     _CVirtualDesktopComponent::RuntimeClassInitialize_::_1_::dtor$11 @ 0x1806CEABC (_CVirtualDesktopComponent--RuntimeClassInitialize_--_1_--dtor$11.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualDesktopManager_CVirtualDesktopManager_IVirtualDesktopCollection___&_IVirtualDesktopVisibilityPolicy___&_IVirtualDesktopNotification___&_IVirtualDesktopForegroundPolicy___&_IVirtualDesktopPersistence___&_std::nullptr_t_IVirtualDesktopLock___&__::_1_::dtor$2 @ 0x1806CEAF2 (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualDesktopManager_CVirtualDesktopM_ea_1806CEAF2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualDesktopManager>::~ComPtr<CVirtualDesktopManager>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<CVirtualDesktopManager>::InternalRelease(a1);
}
