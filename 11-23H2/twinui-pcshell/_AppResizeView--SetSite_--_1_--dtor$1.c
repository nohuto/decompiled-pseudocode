/*
 * XREFs of _AppResizeView::SetSite_::_1_::dtor$1 @ 0x1805D7DC1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppResizeView::SetSite_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 64));
}
