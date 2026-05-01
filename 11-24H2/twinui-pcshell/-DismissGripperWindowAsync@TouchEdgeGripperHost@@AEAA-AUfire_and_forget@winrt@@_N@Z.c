/*
 * XREFs of ?DismissGripperWindowAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180595614
 * Callers:
 *     TouchEdgeGripperHost::HideGripperAsync$_ResumeCoro$1 @ 0x1805957F0 (TouchEdgeGripperHost--HideGripperAsync$_ResumeCoro$1.c)
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_e0b0b8eaa13602b9fabc447bd0975459___::Invoke @ 0x1805959F0 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_e0b0b8eaa13.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     TouchEdgeGripperHost::DismissGripperWindowAsync$_InitCoro$2 @ 0x1805951C4 (TouchEdgeGripperHost--DismissGripperWindowAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall TouchEdgeGripperHost::DismissGripperWindowAsync(__int64 a1, _BYTE *a2, char a3)
{
  void *v5; // rax
  int v7; // [rsp+188h] [rbp+10h] BYREF
  char v8; // [rsp+190h] [rbp+18h] BYREF

  v8 = a3;
  v5 = operator new(0x140uLL);
  v7 = 0;
  TouchEdgeGripperHost::DismissGripperWindowAsync__InitCoro_2(&v7, (__int64)v5, a2, &v8, a1);
  return a2;
}
