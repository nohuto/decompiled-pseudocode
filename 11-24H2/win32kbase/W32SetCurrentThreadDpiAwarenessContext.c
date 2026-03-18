/*
 * XREFs of W32SetCurrentThreadDpiAwarenessContext @ 0x140045080
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400A2D78 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1400451F0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall W32SetCurrentThreadDpiAwarenessContext(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // edi
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // [rsp+58h] [rbp+10h]

  v1 = 0;
  v2 = 0;
  if ( (int)a1 >= 0 )
    v2 = a1;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1);
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  else
    v4 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    if ( *(_QWORD *)(v4 + 408) )
      CaptureAndValidateUserModeDpiAwarenessContext(v4);
    v1 = *(_DWORD *)(v7 + 400);
    *(_DWORD *)(v7 + 400) = v2;
    if ( *(_QWORD *)(v7 + 408) )
      **(_DWORD **)(v7 + 408) = *(_DWORD *)(v7 + 400);
  }
  if ( !v1 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( CurrentProcessWin32Process && !*(_QWORD *)CurrentProcessWin32Process )
      CurrentProcessWin32Process = 0LL;
    return *(_DWORD *)(CurrentProcessWin32Process + 268) | 0x80000000;
  }
  return v1;
}
