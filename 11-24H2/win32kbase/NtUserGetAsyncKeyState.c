/*
 * XREFs of NtUserGetAsyncKeyState @ 0x14016C610
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x140025314 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     EtwTraceUIPIInputError @ 0x1400256B0 (EtwTraceUIPIInputError.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x1400C23B0 (IsKeyboardDelegationEnabledForThread.c)
 *     EtwTraceGetAsyncKeyState @ 0x1400C6694 (EtwTraceGetAsyncKeyState.c)
 *     _GetAsyncKeyState @ 0x140189CF0 (_GetAsyncKeyState.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline @ 0x1401B7518 (Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserGetAsyncKeyState(unsigned int a1)
{
  char v2; // si
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 (*v12)(void); // rax
  int v13; // eax
  __int64 (*v14)(void); // rax
  __int16 AsyncKeyState; // bx
  bool v16; // bl
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // r8
  bool v24; // bl
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  InputDelegation *v28; // rbx
  __int64 v29; // rcx
  InputDelegation *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v35; // [rsp+70h] [rbp-28h] BYREF
  int v36; // [rsp+78h] [rbp-20h]
  InputDelegation *v37; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v38; // [rsp+B0h] [rbp+18h]

  v2 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v37, 1LL);
  if ( *(_QWORD *)(W32GetUserSessionState(v3) + 18960) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v8 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v7 = -*(_QWORD *)CurrentProcessWin32Process;
      v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    }
    v5 = *(_QWORD *)(W32GetUserSessionState(v7) + 18960);
    if ( v8 != *(_QWORD *)(v5 + 464) )
      EtwTraceGetAsyncKeyState((__int64)v37);
  }
  v9 = 0;
  v11 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48);
  v12 = *(__int64 (**)(void))(v11 + 712);
  if ( v12 )
    v13 = v12();
  else
    v13 = -1073741637;
  if ( v13 >= 0 )
  {
    v14 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11, v10) + 48) + 720LL);
    if ( v14 )
      v9 = v14();
  }
  if ( v9 )
  {
    if ( !(unsigned int)Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline() )
    {
LABEL_14:
      UserSetLastError(5);
LABEL_15:
      AsyncKeyState = 0;
      goto LABEL_41;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v2 = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v2;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(UserSessionState + 69400),
        2,
        2,
        100,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
    }
    AsyncKeyState = 0;
LABEL_24:
    UserSetLastError(5);
    goto LABEL_41;
  }
  if ( !(unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(1u) )
  {
    v21 = *(_QWORD *)(W32GetUserSessionState(v20) + 18944);
    v38 = *(_QWORD *)(v21 + 472);
    v22 = *(_DWORD *)(v21 + 480);
    v23 = *(_QWORD *)(W32GetUserSessionState(v21) + 18944);
    v35 = v38;
    v36 = v22;
    EtwTraceUIPIInputError((__int64)v37, 0LL, v23, &v35, 3);
    if ( !(unsigned int)Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline() )
      goto LABEL_14;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v2 = 0;
    }
    v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
      LOBYTE(v26) = v24;
      LOBYTE(v27) = v2;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v27,
        v26,
        *(_QWORD *)(v25 + 69400),
        2,
        2,
        101,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
    }
    AsyncKeyState = 0;
    goto LABEL_24;
  }
  v28 = v37;
  if ( IsKeyboardDelegationEnabledForThread(v37) )
  {
    *(_DWORD *)(*((_QWORD *)v28 + 65) + 124LL) = 0;
    *(_QWORD *)(*((_QWORD *)v37 + 65) + 128LL) = 0LL;
    if ( !(unsigned int)Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline() )
      *(_QWORD *)(*((_QWORD *)v37 + 65) + 136LL) = 0LL;
    goto LABEL_15;
  }
  AsyncKeyState = GetAsyncKeyState(a1);
  v38 = *(_QWORD *)(W32GetUserSessionState(v29) + 19928);
  v30 = v37;
  *(_DWORD *)(*((_QWORD *)v37 + 65) + 124LL) = *(_DWORD *)(v38 + 6988);
  v31 = W32GetUserSessionState(v30);
  *(_QWORD *)(*((_QWORD *)v37 + 65) + 128LL) = *(_QWORD *)(v31 + 14336);
  if ( !(unsigned int)Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline() )
  {
    v33 = W32GetUserSessionState(v32);
    *(_QWORD *)(*((_QWORD *)v37 + 65) + 136LL) = *(_QWORD *)(v33 + 14464);
  }
LABEL_41:
  UserSessionSwitchLeaveCritWithNonPaged();
  return AsyncKeyState;
}
