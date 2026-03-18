/*
 * XREFs of ??$GetProp@VCWindowMarginProp@WindowMargins@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCWindowMarginProp@WindowMargins@@@Z @ 0x1C005F958
 * Callers:
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x1C005F890 (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 * Callees:
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<WindowMargins::CWindowMarginProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, WindowMargins::CWindowMarginProp::s_atom, 1LL);
  *a2 = Prop;
  return Prop != 0;
}
