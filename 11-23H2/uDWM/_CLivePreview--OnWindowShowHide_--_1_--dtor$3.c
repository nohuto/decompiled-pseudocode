/*
 * XREFs of _CLivePreview::OnWindowShowHide_::_1_::dtor$3 @ 0x180068332
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLivePreview::OnWindowShowHide_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>::~out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>(a2 + 72);
}
