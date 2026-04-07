/*
 * XREFs of ?UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z @ 0x1800DB830
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateLayout@CContainerVisual@@UEAAJ_N@Z @ 0x180020BC0 (-UpdateLayout@CContainerVisual@@UEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateLayout(CTopLevelWindow *this, bool a2)
{
  int updated; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 31) + 80LL))(*((_QWORD *)this + 31), (char *)this + 72);
  updated = CContainerVisual::UpdateLayout(this, a2);
  v5 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1318,
    (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)updated);
  return v5;
}
