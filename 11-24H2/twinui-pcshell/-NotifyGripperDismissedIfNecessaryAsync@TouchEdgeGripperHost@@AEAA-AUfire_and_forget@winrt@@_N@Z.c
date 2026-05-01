/*
 * XREFs of ?NotifyGripperDismissedIfNecessaryAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180595D08
 * Callers:
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x180594CA0 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1 @ 0x180595230 (TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync$_InitCoro$2 @ 0x180595B94 (TouchEdgeGripperHost--NotifyGripperDismissedIfNecessaryAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync(__int64 a1, _BYTE *a2, char a3)
{
  void *v5; // rax
  int v7; // [rsp+98h] [rbp+10h] BYREF
  char v8; // [rsp+A0h] [rbp+18h] BYREF

  v8 = a3;
  v5 = operator new(0x50uLL);
  v7 = 0;
  TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync__InitCoro_2(&v7, (__int64)v5, a2, &v8, a1);
  return a2;
}
