/*
 * XREFs of ??1?$ComPtr@VAppResizeView@@@WRL@Microsoft@@QEAA@XZ @ 0x18052F0D0
 * Callers:
 *     _AppResizeView::Hide_::_1_::dtor$0 @ 0x1806F2152 (_AppResizeView--Hide_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AppResizeView>::~ComPtr<AppResizeView>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(a1);
}
