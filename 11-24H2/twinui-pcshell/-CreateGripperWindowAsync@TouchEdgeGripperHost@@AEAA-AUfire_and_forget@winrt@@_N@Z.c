/*
 * XREFs of ?CreateGripperWindowAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180595124
 * Callers:
 *     TouchEdgeGripperHost::ShowGripperAsync$_ResumeCoro$1 @ 0x180596010 (TouchEdgeGripperHost--ShowGripperAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_InitCoro$2 @ 0x180594C38 (TouchEdgeGripperHost--CreateGripperWindowAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall TouchEdgeGripperHost::CreateGripperWindowAsync(__int64 a1, _BYTE *a2, char a3)
{
  void *v5; // rax
  int v7; // [rsp+1A8h] [rbp+10h] BYREF
  char v8; // [rsp+1B0h] [rbp+18h] BYREF

  v8 = a3;
  v5 = operator new(0x160uLL);
  v7 = 0;
  TouchEdgeGripperHost::CreateGripperWindowAsync__InitCoro_2(&v7, (__int64)v5, a2, &v8, a1);
  return a2;
}
