/*
 * XREFs of _s_DrawThemeTextPPIAware_::_1_::dtor$2 @ 0x18070415A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HGDIOBJ __fastcall s_DrawThemeTextPPIAware_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::Wrappers::AutoSelectObject<HFONT__ *>::~AutoSelectObject<HFONT__ *>(a2 + 224);
}
