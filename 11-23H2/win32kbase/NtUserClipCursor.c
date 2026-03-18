/*
 * XREFs of NtUserClipCursor @ 0x1C01431D0
 * Callers:
 *     <none>
 * Callees:
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C000B2B0 (GuessMonitorOverrideForCoordinateConversions.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C004D320 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0059F20 (LogicalToPhysicalDPIRect.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C005E358 (ApiSetCheckCursorClipAccess.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C0062ED0 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01DC220 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserClipCursor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagRECT *v4; // rsi
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rcx
  int v7; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rax
  char v10; // al
  __int64 *i; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v18; // [rsp+20h] [rbp-68h] BYREF
  struct tagRECT v19; // [rsp+40h] [rbp-48h] BYREF
  struct tagRECT v20; // [rsp+60h] [rbp-28h] BYREF

  v4 = (struct tagRECT *)a1;
  *(_QWORD *)&v19.left = a1;
  LOBYTE(a1) = 1;
  v5 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1, a2, a3, a4);
  gptiCurrent = v5;
  v7 = 0;
  if ( v5 )
  {
    *((_DWORD *)v5 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
    {
      v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v9 )
      {
        if ( (*(_DWORD *)(v9 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v10 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v10 = 0;
          }
          if ( v10 )
          {
            for ( i = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  gpSharedUserCritDeferredUnlockListHead;
                  i = (__int64 *)gpSharedUserCritDeferredUnlockListHead )
            {
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
              i[2] = 0LL;
              if ( !*(_DWORD *)(*i + 8) )
              {
                LODWORD(v18) = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              }
              HMUnlockObject(*i);
            }
          }
        }
      }
    }
  }
  v20 = 0LL;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(0, v4 == 0LL) )
  {
    if ( v4 )
    {
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (struct tagRECT *)MmUserProbeAddress;
      v20 = *v4;
      LODWORD(v18) = (v20.right + v20.left) / 2;
      HIDWORD(v18) = (v20.bottom + v20.top) / 2;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      v18 = GuessMonitorOverrideForCoordinateConversions(v18, CurrentThreadDpiAwarenessContext, 0);
      LogicalToPhysicalDPIRect((__int64)&v20, &v20, CurrentThreadDpiAwarenessContext, &v18);
      v19 = v20;
      CCursorClip::SetClip((CCursorClip *)WPP_MAIN_CB.Reserved, &v19);
    }
    else
    {
      CCursorClip::ClearClip((CCursorClip *)WPP_MAIN_CB.Reserved);
    }
    v7 = 1;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v7;
}
