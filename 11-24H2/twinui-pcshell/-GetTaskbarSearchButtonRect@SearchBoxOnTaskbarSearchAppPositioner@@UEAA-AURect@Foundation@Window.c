/*
 * XREFs of ?GetTaskbarSearchButtonRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x1803D5ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1802CFC8C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __noreturn SearchBoxOnTaskbarSearchAppPositioner::GetTaskbarSearchButtonRect()
{
  unsigned int v0; // eax
  int v1; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = wil::verify_hresult<long>(0x80004001);
  wil::details::in1diag3::Throw_Hr(
    retaddr,
    (void *)0x300,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchboxontaskbarsearchapppositioner.cpp",
    (const char *)v0,
    v1);
}
