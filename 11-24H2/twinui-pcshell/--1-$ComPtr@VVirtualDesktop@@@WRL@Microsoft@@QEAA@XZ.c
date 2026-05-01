/*
 * XREFs of ??1?$ComPtr@VVirtualDesktop@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D0DB4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktop_VirtualDesktop_IVirtualDesktop___&_IThumbnailDeviceSource___&_IVirtualDesktopManagerInternal___&_IVirtualDesktopNotificationService___&__::_1_::dtor$2 @ 0x1806CE993 (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktop_VirtualDesktop_IVirtualDesktop___-_IT.c)
 *     _VirtualDesktop_CreateInstance_::_1_::dtor$0 @ 0x1806DB9E2 (_VirtualDesktop_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktop>::~ComPtr<VirtualDesktop>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<VirtualDesktop>::InternalRelease(a1);
}
