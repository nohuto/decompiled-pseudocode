/*
 * XREFs of _lambda_2481c7aedd1faa0c0b80517e0ae6abbe_::operator() @ 0x1805811DC
 * Callers:
 *     ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe___::Run @ 0x180581620 (ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ @ 0x180581D4C (-_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ.c)
 *     ?_UpdateScrollElementVisibility@CVirtualDesktopBarElement@@IEAAXXZ @ 0x180581F5C (-_UpdateScrollElementVisibility@CVirtualDesktopBarElement@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_2481c7aedd1faa0c0b80517e0ae6abbe_::operator()(__int64 a1)
{
  CVirtualDesktopBarElement *v1; // rbx
  unsigned int v2; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(CVirtualDesktopBarElement **)(*(_QWORD *)a1 + 16LL);
  if ( v1 )
  {
    (*(void (__fastcall **)(CVirtualDesktopBarElement *))(*(_QWORD *)v1 + 8LL))(v1);
    CVirtualDesktopBarElement::_UpdateScrollElementVisibility(v1);
    CVirtualDesktopBarElement::_LayoutBackground(v1);
    v2 = 0;
  }
  else
  {
    v2 = -2147220991;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
      (const char *)0x80040201LL);
  }
  if ( v1 )
    (*(void (__fastcall **)(CVirtualDesktopBarElement *))(*(_QWORD *)v1 + 16LL))(v1);
  return v2;
}
