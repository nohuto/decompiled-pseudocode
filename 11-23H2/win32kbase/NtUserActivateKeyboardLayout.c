/*
 * XREFs of NtUserActivateKeyboardLayout @ 0x1C0069830
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x1C0069BB4 (ApiSetEditionGetProcessWindowStation.c)
 *     xxxActivateKeyboardLayout @ 0x1C0069C00 (xxxActivateKeyboardLayout.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserActivateKeyboardLayout(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v8; // rdi
  struct tagTHREADINFO *v9; // rcx
  struct tagWINDOWSTATION *ProcessWindowStation; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rax

  LOBYTE(a1) = 1;
  v4 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1, a2, a3, a4);
  v6 = 0LL;
  gptiCurrent = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v8 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v16 = *v8;
          v8[2] = 0LL;
          if ( !*(_DWORD *)(v16 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          HMUnlockObject(*v8);
        }
      }
    }
  }
  v9 = gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0
    && (v9 = *(struct tagTHREADINFO **)(*((_QWORD *)gptiCurrent + 53) + 768LL), (*((_DWORD *)v9 + 6) & 1) != 0) )
  {
    UserSetLastError(5);
  }
  else
  {
    ProcessWindowStation = (struct tagWINDOWSTATION *)ApiSetEditionGetProcessWindowStation(v9);
    v6 = xxxActivateKeyboardLayout(ProcessWindowStation);
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v6;
}
