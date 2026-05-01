/*
 * XREFs of CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::s_TimerWndProc @ 0x1805D6290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CleanupTimer @ 0x1805D5EB0 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_CleanupTimer.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback @ 0x1805D60F0 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_InvokeCallback.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::s_TimerWndProc(
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LPARAM lParam)
{
  __int64 v8; // rdi
  LONG_PTR WindowLongPtrW; // rax
  __int64 v10; // rbx
  volatile int *v11; // rdx

  v8 = 0LL;
  WindowLongPtrW = GetWindowLongPtrW(hWnd, 0);
  v10 = WindowLongPtrW;
  if ( !WindowLongPtrW )
    return DefWindowProcW(hWnd, Msg, wParam, lParam);
  if ( Msg == 2 )
  {
    KillTimer(hWnd, 0x64uLL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    SetWindowLongPtrW(hWnd, 0, 0LL);
    return DefWindowProcW(hWnd, Msg, wParam, lParam);
  }
  if ( Msg != 275 )
    return DefWindowProcW(hWnd, Msg, wParam, lParam);
  (*(void (__fastcall **)(LONG_PTR))(*(_QWORD *)WindowLongPtrW + 8LL))(WindowLongPtrW);
  if ( *(_QWORD *)(v10 + 32) )
  {
    CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CleanupTimer(v10);
    if ( *(_DWORD *)(v10 + 28) == 2 )
      CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback(v10, v11);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v8;
}
