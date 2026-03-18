/*
 * XREFs of NtUserGetAsyncKeyState @ 0x1C0070AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C004CDAC (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1C0070C58 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     _GetAsyncKeyState @ 0x1C0070CB0 (_GetAsyncKeyState.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x1C0070D90 (IsKeyboardDelegationEnabledForThread.c)
 *     EtwTraceGetAsyncKeyState @ 0x1C0070DB4 (EtwTraceGetAsyncKeyState.c)
 *     EtwTraceUIPIInputError @ 0x1C0074560 (EtwTraceUIPIInputError.c)
 *     SetLastNtError @ 0x1C00D5700 (SetLastNtError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserGetAsyncKeyState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rdi
  __int16 AsyncKeyState; // bx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // esi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  void *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax

  v4 = a1;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  v6 = PtiCurrentShared();
  AsyncKeyState = 0;
  if ( gptiForeground )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v10 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v9 = -*(_QWORD *)CurrentProcessWin32Process;
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    }
    if ( v10 != *((_QWORD *)gptiForeground + 53) )
      EtwTraceGetAsyncKeyState(v6, v9);
  }
  v11 = 0;
  if ( qword_1C02952C0 )
    v12 = qword_1C02952C0();
  else
    v12 = -1073741637;
  if ( v12 >= 0 && qword_1C02952C8 )
    v11 = qword_1C02952C8();
  if ( v11 )
    goto LABEL_13;
  if ( !(unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(1LL) )
  {
    EtwTraceUIPIInputError(v6, 0LL, 3);
LABEL_13:
    UserSetLastError(5);
    goto LABEL_19;
  }
  if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(v6) )
  {
    *(_DWORD *)(*((_QWORD *)v6 + 60) + 124LL) = 0;
    v14 = 0LL;
    *(_QWORD *)(*((_QWORD *)v6 + 60) + 128LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)v6 + 60) + 136LL) = 0LL;
  }
  else
  {
    AsyncKeyState = GetAsyncKeyState(v4);
    v17 = *((_QWORD *)v6 + 60);
    v18 = gpsi;
    v19 = *((unsigned int *)gpsi + 1747);
    *(_DWORD *)(v17 + 124) = v19;
    v21 = SGDGetUserSessionState(v18, v19, v17, v20);
    v22 = *((_QWORD *)v6 + 60);
    *(_QWORD *)(v22 + 128) = *(_QWORD *)(v21 + 13992);
    v26 = SGDGetUserSessionState(v22, v23, v24, v25);
    v14 = *((_QWORD *)v6 + 60);
    *(_QWORD *)(v14 + 136) = *(_QWORD *)(v26 + 14120);
  }
LABEL_19:
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return AsyncKeyState;
}
