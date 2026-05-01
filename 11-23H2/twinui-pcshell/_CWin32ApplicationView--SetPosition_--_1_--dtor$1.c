/*
 * XREFs of _CWin32ApplicationView::SetPosition_::_1_::dtor$1 @ 0x1803CF212
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWin32ApplicationView::SetPosition_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 64));
}
