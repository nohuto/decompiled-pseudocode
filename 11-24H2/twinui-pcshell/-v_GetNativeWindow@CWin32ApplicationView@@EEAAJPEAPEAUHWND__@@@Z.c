/*
 * XREFs of ?v_GetNativeWindow@CWin32ApplicationView@@EEAAJPEAPEAUHWND__@@@Z @ 0x180311220
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWin32ApplicationView::v_GetNativeWindow(CWin32ApplicationView *this, HWND *a2)
{
  HWND v3; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  *a2 = v3;
  if ( v3 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x16D,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)0x80070578LL);
  return 2147943800LL;
}
