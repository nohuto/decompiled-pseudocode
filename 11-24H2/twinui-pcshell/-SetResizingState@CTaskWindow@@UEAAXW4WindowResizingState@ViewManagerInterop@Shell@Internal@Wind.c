/*
 * XREFs of ?SetResizingState@CTaskWindow@@UEAAXW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180221F00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTaskWindow::SetResizingState(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 504LL))(v1);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3F0,
        (int)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
        (const char *)(unsigned int)v2);
  }
}
