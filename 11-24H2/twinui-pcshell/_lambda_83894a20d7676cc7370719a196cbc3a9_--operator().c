/*
 * XREFs of _lambda_83894a20d7676cc7370719a196cbc3a9_::operator() @ 0x18052A014
 * Callers:
 *     ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x18052A6C0 (-CancelPlacement@WindowArrangementView@@UEAAJXZ.c)
 *     CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::_InvokeCallback @ 0x18052EB4C (CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___--_InvokeCallback.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EndDrag@WindowArrangementView@@AEAAJ_N@Z @ 0x18052AC7C (-EndDrag@WindowArrangementView@@AEAAJ_N@Z.c)
 */

__int64 __fastcall lambda_83894a20d7676cc7370719a196cbc3a9_::operator()(WindowArrangementView **a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = WindowArrangementView::EndDrag(*a1, 0);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x226,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
