/*
 * XREFs of NtUserLayoutCompleted @ 0x1C0023CA0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceLayoutChangeStop @ 0x1C0023DF4 (EtwTraceLayoutChangeStop.c)
 *     GreWindowLayoutComplete @ 0x1C0023E5C (GreWindowLayoutComplete.c)
 *     _GetTopLevelWindow @ 0x1C00AE7B0 (_GetTopLevelWindow.c)
 *     PostIAMShellHookMessage @ 0x1C00B2D78 (PostIAMShellHookMessage.c)
 *     HandleAsyncResizeComplete @ 0x1C01F1978 (HandleAsyncResizeComplete.c)
 *     DwmAsyncCancelRotationDelay @ 0x1C026BD3C (DwmAsyncCancelRotationDelay.c)
 */

__int64 __fastcall NtUserLayoutCompleted(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 TopLevelWindow; // rax
  void *v14; // rax
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v2;
  if ( v2 )
  {
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v15;
    *((_QWORD *)&v15 + 1) = v2;
    HMLockObject(v2);
    EtwTraceLayoutChangeStop(gptiCurrent, a1, v8);
    if ( *(_QWORD *)(*(_QWORD *)(v8 + 24) + 304LL) == v8 )
    {
      v14 = (void *)ReferenceDwmApiPort();
      DwmAsyncCancelRotationDelay(v14);
    }
    PostIAMShellHookMessage(38LL, a1);
    if ( *(char *)(*(_QWORD *)(v8 + 40) + 25LL) < 0 )
    {
      TopLevelWindow = GetTopLevelWindow(v8);
      if ( TopLevelWindow )
      {
        v10 = *(_QWORD *)(TopLevelWindow + 40);
        v9 = *(_WORD *)(v10 + 42) & 0x2FFF;
        if ( (_DWORD)v9 != 669 )
          GreWindowLayoutComplete(*(HWND *)TopLevelWindow);
      }
    }
    ThreadUnlock1(v10, v9, v11);
    v7 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
