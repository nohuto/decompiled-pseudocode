/*
 * XREFs of ??1?$ComPtr@VCVirtualDesktopCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C60C0
 * Callers:
 *     _CVirtualDesktopCollection_CreateInstance_::_1_::dtor$0 @ 0x1806CEACE (_CVirtualDesktopCollection_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualDesktopCollection_CVirtualDesktopCollection_IVirtualDesktopFactory___&_IVirtualDesktopPersistence___&_bool_&__::_1_::dtor$2 @ 0x1806D6BDB (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualDesktopCollection_CVirtualDesktopCollection_.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualDesktopCollection>::~ComPtr<CVirtualDesktopCollection>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<CVirtualDesktopVisibilityPolicy>::InternalRelease(a1);
}
