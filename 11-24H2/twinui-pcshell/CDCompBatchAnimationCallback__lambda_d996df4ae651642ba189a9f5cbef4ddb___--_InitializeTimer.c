/*
 * XREFs of CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InitializeTimer @ 0x18052EA70
 * Callers:
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::OnBeginBatchUpdate @ 0x18052C230 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--OnBeginBatchUpdate.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
                 0LL,
                 0LL,
                 0LL,
                 a1);
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
