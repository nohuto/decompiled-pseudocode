/*
 * XREFs of ?EtwCaptureStateCallback@@YAXXZ @ 0x14011EF48
 * Callers:
 *     ?W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z @ 0x14013C794 (-W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x14009C590 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x14009C6C4 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z @ 0x1400CFD14 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

void __fastcall EtwCaptureStateCallback(__int64 a1)
{
  _QWORD *UserSessionState; // rdi
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int *v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  unsigned int v8; // ebp
  int v9; // esi
  char CurrentWin32kSessionId; // di
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rbp
  __int64 i; // rdi
  __int64 v19; // rbx
  _QWORD *j; // rsi
  int ThreadId; // r13d
  char ThreadInfoFlags; // al
  int v23; // ecx
  char v24; // r15
  __int64 v25; // rcx
  __int64 v26; // r8
  char v27; // [rsp+90h] [rbp+8h]
  unsigned int v28; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v29; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+20h]

  v29 = 0;
  v28 = 0;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v2 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v2;
  v3 = v2;
  if ( v2 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 528), 0, 0) & 0x1000000) != 0
      && *(char *)(v2 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1208) == 1 )
        {
          while ( 1 )
          {
            v6 = UserSessionState[2471];
            if ( !v6 )
              break;
            UserSessionState[2471] = *(_QWORD *)(v6 + 16);
            v5 = *(int **)v6;
            *(_QWORD *)(v6 + 16) = 0LL;
            if ( !v5[2] )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4686LL);
            HMUnlockObject(*(int **)v6);
          }
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
        }
      }
    }
  }
  if ( ((unsigned __int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x8000000000040000uLL) != 0
    && (unsigned __int8)(byte_14029ADC8 - 1) > 2u
    && (qword_14029ADB0 & 0x8000000000040000uLL) != 0
    && (qword_14029ADB8 & 0x8000000000040000uLL) == qword_14029ADB8 )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v3) + 36408) )
    {
      v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v8 = v7 - *(_DWORD *)(W32GetUserSessionState(v3) + 36412);
      if ( v8 >= 0xC8 && (Microsoft_Windows_Win32kEnableBits & 0x40) != 0 )
      {
        v9 = *(_DWORD *)(W32GetUserSessionState(v3) + 36408);
        CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
        v12 = *(_DWORD *)(W32GetUserSessionState(v11) + 36420);
        v14 = W32GetUserSessionState(v13);
        McTemplateK0qqqqq_EtwWriteTransfer(
          v15,
          &WaitCursorEvent,
          v16,
          *(_DWORD *)(v14 + 36416),
          v12,
          CurrentWin32kSessionId,
          v9,
          v8);
      }
    }
  }
  if ( ((unsigned __int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x8000000000080000uLL) != 0
    && (unsigned __int8)(byte_14029ADC8 - 1) > 2u
    && (qword_14029ADB0 & 0x8000000000080000uLL) != 0
    && (qword_14029ADB8 & 0x8000000000080000uLL) == qword_14029ADB8 )
  {
    v17 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    for ( i = *(_QWORD *)(W32GetUserSessionState(v3) + 63560); ; i = *(_QWORD *)(i + 8) )
    {
      v30 = i;
      if ( !i )
        break;
      v19 = *(_QWORD *)(i + 16);
      if ( v19 )
      {
        do
        {
          for ( j = *(_QWORD **)(v19 + 176); j != (_QWORD *)(v19 + 176); j = (_QWORD *)*j )
          {
            ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*(j - 97));
            ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)(j - 97));
            v23 = *((_DWORD *)j + 132);
            v27 = ThreadInfoFlags;
            if ( v23 )
              v24 = v17 - v23;
            else
              v24 = 0;
            EtwpGetLastInputProcessTime((struct tagQ *const)*(j - 38), v17, &v29, &v28, 0LL, 0LL);
            if ( (Microsoft_Windows_Win32kEnableBits & 0x80u) != 0LL )
              McTemplateK0qqqqq_EtwWriteTransfer(v25, &ThreadInfoRundownEvent, v26, ThreadId, v27, v24, v29, v28);
          }
          v19 = *(_QWORD *)(v19 + 32);
        }
        while ( v19 );
        i = v30;
      }
    }
  }
  UserSessionSwitchLeaveCritWithNonPaged();
}
