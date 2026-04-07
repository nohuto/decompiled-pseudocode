/*
 * XREFs of wistd::__function::__func__lambda_c73970d199e871e177cfde716dc4ccf1__void___cdecl(int_const_&)_::operator() @ 0x1800EDB90
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTransparencyPolicyChanged@CWindowList@@AEAAJ_N@Z @ 0x180082894 (-OnTransparencyPolicyChanged@CWindowList@@AEAAJ_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1838 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wistd::__function::__func__lambda_c73970d199e871e177cfde716dc4ccf1__void___cdecl_int_const____::operator()(
        __int64 a1,
        _DWORD *a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CWindowList::OnTransparencyPolicyChanged(*(CWindowList **)(a1 + 8), *a2 != 0);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      2030LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v2);
}
