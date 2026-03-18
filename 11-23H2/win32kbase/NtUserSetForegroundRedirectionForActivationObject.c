/*
 * XREFs of NtUserSetForegroundRedirectionForActivationObject @ 0x1C014B450
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z @ 0x1C012ECD8 (-SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z.c)
 */

__int64 __fastcall NtUserSetForegroundRedirectionForActivationObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _LUID *v4; // r14
  struct _LUID *v5; // rsi
  int v6; // edi
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rax
  char v11; // al
  __int64 *v12; // rbx
  CActivationObjectManager *v13; // rcx
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  ULONG v19; // eax
  struct _LUID v21; // [rsp+70h] [rbp+18h] BYREF
  struct _LUID v22; // [rsp+78h] [rbp+20h] BYREF

  v4 = (struct _LUID *)a2;
  v5 = (struct _LUID *)a1;
  v6 = 1;
  LOBYTE(a1) = 1;
  v7 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1, a2, a3, a4);
  gptiCurrent = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    if ( CurrentProcessWin32Process )
    {
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v11 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v11 = 0;
          }
          if ( v11 )
          {
            while ( 1 )
            {
              v12 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v12[2] = 0LL;
              if ( !*(_DWORD *)(*v12 + 8) )
              {
                v21.LowPart = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              }
              HMUnlockObject(*v12);
            }
          }
        }
      }
    }
  }
  v22 = 0LL;
  v21 = 0LL;
  if ( &v5[1] < v5 || (unsigned __int64)&v5[1] > MmUserProbeAddress )
    v5 = (struct _LUID *)MmUserProbeAddress;
  v22 = *v5;
  v13 = (CActivationObjectManager *)&v4[1];
  if ( &v4[1] < v4 || (unsigned __int64)v13 > MmUserProbeAddress )
    v4 = (struct _LUID *)MmUserProbeAddress;
  v21 = *v4;
  v14 = CActivationObjectManager::SetForegroundRedirectionLuid(v13, &v22, &v21);
  if ( v14 < 0 )
  {
    v6 = 0;
    v19 = RtlNtStatusToDosError(v14);
    UserSetLastError(v19);
  }
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return v6;
}
