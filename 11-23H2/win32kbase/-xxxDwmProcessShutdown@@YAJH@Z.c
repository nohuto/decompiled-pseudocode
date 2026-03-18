/*
 * XREFs of ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0084BF8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 *     NtUserUnregisterSessionPort @ 0x1C014D910 (NtUserUnregisterSessionPort.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C004FAF0 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     IsUserEnableConsoleModeSupported @ 0x1C0086240 (IsUserEnableConsoleModeSupported.c)
 *     xxxDwmControl @ 0x1C00862F0 (xxxDwmControl.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C00863FC (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     GreLockDwmState @ 0x1C0087030 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C00870B0 (GreUnlockDwmState.c)
 *     IsxxxDwmStopRedirectionSupported @ 0x1C00874F4 (IsxxxDwmStopRedirectionSupported.c)
 *     GreSfmCleanupPresentHistory @ 0x1C0087F50 (GreSfmCleanupPresentHistory.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     UserEnableConsoleMode @ 0x1C02332FC (UserEnableConsoleMode.c)
 */

__int64 __fastcall xxxDwmProcessShutdown(unsigned int a1)
{
  unsigned int v2; // edi
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int CurrentProcessId; // eax
  unsigned int Count; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct tagTHREADINFO *v18; // rax
  __int64 v19; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rax
  __int64 *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  struct tagTHREADINFO *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 *v30; // rbx
  __int64 v31; // [rsp+90h] [rbp+18h] BYREF

  v31 = 0LL;
  v2 = 0;
  if ( (int)DxgkGetSessionTokenManager(&v31) >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 96LL))(v31);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 200LL))(v31);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
  }
  v3 = a1;
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) )
    v3 = 0;
  if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
  {
    if ( qword_1C0296188 )
      v2 = qword_1C0296188(a1);
    else
      v2 = -1073741637;
  }
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  GreSfmCleanupPresentHistory();
  v18 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v15, v16, v17);
  gptiCurrent = v18;
  if ( v18 )
  {
    *((_DWORD *)v18 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v22 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v21 = *v22;
          v22[2] = 0LL;
          if ( !*(_DWORD *)(v21 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          HMUnlockObject(*v22);
        }
      }
    }
  }
  GreLockDwmState();
  SetDwmApiPort(0LL);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    ObfDereferenceObject(*(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
  }
  GreUnlockDwmState();
  if ( (int)IsUserEnableConsoleModeSupported() >= 0 )
  {
    UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
    v2 = UserEnableConsoleMode(1LL);
    v26 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v23, v24, v25);
    gptiCurrent = v26;
    if ( v26 )
    {
      *((_DWORD *)v26 + 387) = 1;
      v28 = PsGetCurrentProcessWin32Process(v27);
      if ( v28 )
      {
        if ( *(_QWORD *)v28
          && (*(_DWORD *)(v28 + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v30 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            v29 = *v30;
            v30[2] = 0LL;
            if ( !*(_DWORD *)(v29 + 8) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
            HMUnlockObject(*v30);
          }
        }
      }
    }
  }
  HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) = 0;
  if ( v3 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    xxxDwmControl(1036LL, CurrentProcessId);
  }
  return v2;
}
