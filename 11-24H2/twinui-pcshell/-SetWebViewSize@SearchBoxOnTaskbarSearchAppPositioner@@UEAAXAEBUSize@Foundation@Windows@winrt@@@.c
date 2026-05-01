/*
 * XREFs of ?SetWebViewSize@SearchBoxOnTaskbarSearchAppPositioner@@UEAAXAEBUSize@Foundation@Windows@winrt@@@Z @ 0x1803D60E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1802CFC8C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __fastcall __noreturn SearchBoxOnTaskbarSearchAppPositioner::SetWebViewSize(
        SearchBoxOnTaskbarSearchAppPositioner *this,
        const struct winrt::Windows::Foundation::Size *a2)
{
  unsigned int v2; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = wil::verify_hresult<long>(0x80004001);
  wil::details::in1diag3::Throw_Hr(
    retaddr,
    (void *)0x2D,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\SearchBoxOnTaskbarSearchAppPositioner.h",
    (const char *)v2,
    v3);
}
