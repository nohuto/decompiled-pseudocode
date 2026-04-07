/*
 * XREFs of _CLivePreview::_FadeOutToGlass_::_1_::dtor$3 @ 0x1800C8341
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CLivePreview::_FadeOutToGlass_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>::~out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>(a2 + 72);
}
