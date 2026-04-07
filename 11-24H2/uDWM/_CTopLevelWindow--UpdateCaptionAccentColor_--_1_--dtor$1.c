/*
 * XREFs of _CTopLevelWindow::UpdateCaptionAccentColor_::_1_::dtor$1 @ 0x1800F72C1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow::UpdateCaptionAccentColor_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)(a2 + 96));
}
