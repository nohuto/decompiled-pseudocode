/*
 * XREFs of NtUserChangeDisplaySettings @ 0x1C0142FC0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     CheckAccessEx @ 0x1C0091E70 (CheckAccessEx.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     xxxUserChangeDisplaySettings @ 0x1C01371D0 (xxxUserChangeDisplaySettings.c)
 *     DrvLogDiagDisplayChange @ 0x1C01675F0 (DrvLogDiagDisplayChange.c)
 */

__int64 __fastcall NtUserChangeDisplaySettings(_OWORD *a1, _WORD *a2, unsigned int a3, void *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rdx
  struct tagTHREADINFO *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // rax
  __int64 *v19; // rbx
  unsigned int v20; // ebx
  char *v21; // rdx
  int v22; // ecx
  unsigned int v24[2]; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD v25[10]; // [rsp+50h] [rbp-98h] BYREF

  memset(v25, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v25[1]);
  LOBYTE(v8) = 1;
  v24[1] = -1;
  v25[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v25[3]) = 26;
  LOBYTE(v25[6]) = -1;
  v24[0] = 0x2000;
  v12 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(v8, v9, v10, v11);
  gptiCurrent = v12;
  if ( v12 )
  {
    *((_DWORD *)v12 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          v14 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v19 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v18 = *v19;
              v19[2] = 0LL;
              if ( !*(_DWORD *)(v18 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              HMUnlockObject(*v19);
            }
          }
        }
      }
    }
  }
  if ( gbVideoInitialized )
  {
    v21 = (char *)gptiCurrent + 424;
    if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v21 + 768LL) + 24LL) & 0x10) != 0
      || !CheckAccessEx((int *)(*(_QWORD *)v21 + 896LL), v24, 0LL) )
    {
      if ( a3 != 34 )
      {
        v22 = 5;
LABEL_19:
        v20 = -1;
        UserSetLastError(v22);
        goto LABEL_23;
      }
    }
    else if ( (a3 & 0x8000000) != 0 )
    {
      v22 = 87;
      goto LABEL_19;
    }
    DrvLogDiagDisplayChange(0LL, 8LL);
    v20 = xxxUserChangeDisplaySettings(a1, a2, 0LL, a3, a4, UserMode, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v25);
    goto LABEL_23;
  }
  v20 = -1;
LABEL_23:
  UserSessionSwitchLeaveCrit((__int64)v14, v13, v15, v16);
  return v20;
}
