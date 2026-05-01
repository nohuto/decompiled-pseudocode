/*
 * XREFs of CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InitializeTimer @ 0x1805D5FD8
 * Callers:
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::OnBeginBatchUpdate @ 0x1805D3240 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--OnBeginBatchUpdate.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InitializeTimer(
        __int64 *a1)
{
  int Error; // ebx
  HWND v3; // rdi
  signed int LastError; // eax
  __int64 v5; // rax

  Error = 0;
  if ( !a1[4] )
  {
    v3 = (HWND)SHCreateWorkerWindowW(
                 CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::s_TimerWndProc,
                 -3LL,
                 0LL);
    if ( v3 || (Error = ResultFromKnownLastError(), Error >= 0) )
    {
      if ( SetTimer(v3, 0x64uLL, 0x3E8u, 0LL) )
        goto LABEL_10;
      LastError = GetLastError();
      Error = LastError;
      if ( LastError > 0 )
        Error = (unsigned __int16)LastError | 0x80070000;
      if ( Error >= 0 )
      {
LABEL_10:
        v5 = *a1;
        a1[4] = (__int64)v3;
        (*(void (__fastcall **)(__int64 *))(v5 + 8))(a1);
      }
      else if ( v3 )
      {
        DestroyWindow(v3);
      }
    }
  }
  return (unsigned int)Error;
}
