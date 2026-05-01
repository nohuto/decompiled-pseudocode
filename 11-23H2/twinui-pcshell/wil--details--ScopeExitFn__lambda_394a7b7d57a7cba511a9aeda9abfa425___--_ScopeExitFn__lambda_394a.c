/*
 * XREFs of wil::details::ScopeExitFn__lambda_394a7b7d57a7cba511a9aeda9abfa425___::_ScopeExitFn__lambda_394a7b7d57a7cba511a9aeda9abfa425___ @ 0x1801F3798
 * Callers:
 *     ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804C0B00 (-AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowM.c)
 *     _WindowEventDispatcher::AppViewSwitchRequested_::_1_::dtor$4 @ 0x1804C0E5F (_WindowEventDispatcher--AppViewSwitchRequested_--_1_--dtor$4.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_394a7b7d57a7cba511a9aeda9abfa425___::_ScopeExitFn__lambda_394a7b7d57a7cba511a9aeda9abfa425___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD, __int64))(***(_QWORD ***)a1 + 24LL))(**(_QWORD **)a1, 2147500037LL);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x458,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v1);
  }
}
