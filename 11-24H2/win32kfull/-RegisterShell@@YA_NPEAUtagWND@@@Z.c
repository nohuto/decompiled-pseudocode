/*
 * XREFs of ?RegisterShell@@YA_NPEAUtagWND@@@Z @ 0x1402C06AC
 * Callers:
 *     NtUserSetShellWindowEx @ 0x140246970 (NtUserSetShellWindowEx.c)
 * Callees:
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     DwmAsyncShellWindowChange @ 0x14016A814 (DwmAsyncShellWindowChange.c)
 *     CleanupIAMAccess @ 0x140212B70 (CleanupIAMAccess.c)
 *     ?GenerateIAMKey@@YAXPEAUtagDESKTOP@@@Z @ 0x1402BFFA8 (-GenerateIAMKey@@YAXPEAUtagDESKTOP@@@Z.c)
 */

char __fastcall RegisterShell(struct tagWND *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rbx
  struct tagWND **v4; // r14
  __int64 v5; // rdx
  bool v6; // si
  bool v7; // di
  __int64 v8; // rbx
  __int64 UserSessionState; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 *v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rbx
  void *v24; // rax
  __int64 v26; // rdx
  bool v27; // bp
  __int64 v28; // rbx
  __int64 v29; // rax
  __int16 v30; // [rsp+30h] [rbp-38h]
  char v31; // [rsp+40h] [rbp-28h]
  _QWORD v32[2]; // [rsp+50h] [rbp-18h] BYREF

  v1 = *((_QWORD *)a1 + 3);
  v3 = *(_QWORD *)(v1 + 8);
  v4 = (struct tagWND **)(v3 + 168);
  if ( *(_QWORD *)(v3 + 168) )
  {
    UserSetLastError(5);
    v6 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x1000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
    v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v8 = *(_QWORD *)*v4;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
    v31 = v8;
    LOBYTE(v11) = v7;
    v12 = *(_QWORD *)(UserSessionState + 69416);
    v30 = 45;
LABEL_30:
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v10,
      v11,
      v12,
      2,
      13,
      v30,
      (__int64)&WPP_6b95c0fab1563d858a8149a35fde60c5_Traceguids,
      v31);
    return 0;
  }
  if ( !IsTopLevelWindow((__int64)a1) || *((_QWORD *)a1 + 15) || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 8) != 0 )
  {
    UserSetLastError(87);
    v6 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x1000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
    v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v28 = *(_QWORD *)a1;
    v29 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
    v31 = v28;
    LOBYTE(v11) = v27;
    v12 = *(_QWORD *)(v29 + 69416);
    v30 = 46;
    goto LABEL_30;
  }
  v14 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL);
  if ( v14 && (!*(_QWORD *)(v3 + 176) || (*(_BYTE *)(v14 + 816) & 0x30) == 0x20) )
  {
    *(_QWORD *)(v3 + 176) = v14;
    if ( *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19200) )
    {
      if ( v3 == *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v16, v15) + 19200) + 8LL) )
        SynchronizeContext();
    }
  }
  v17 = *(__int64 **)v3;
  v18 = *((_QWORD *)a1 + 6);
  v32[0] = v3 + 168;
  v32[1] = a1;
  v17[3] = v18;
  HMAssignmentLock(v32, 0LL);
  SetOrClrWF(1, *v4, 0x420u, 1);
  xxxSetWindowPos(*v4, 1LL, 0LL, 0LL, 0, 0, 402451);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v21 = *(__int64 **)v3;
    v22 = *(_QWORD *)a1;
    v23 = **(_QWORD **)v3;
    v24 = (void *)ReferenceDwmApiPort(v20, v21);
    DwmAsyncShellWindowChange(v24, v22, v23);
  }
  CleanupIAMAccess((struct tagDESKTOP *)v1, v19);
  GenerateIAMKey((struct tagDESKTOP *)v1);
  return 1;
}
