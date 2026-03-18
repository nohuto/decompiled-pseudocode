/*
 * XREFs of ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A2894
 * Callers:
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1400B577C (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     DestroyProcessInfo @ 0x14015D490 (DestroyProcessInfo.c)
 *     _RegisterLogonProcess @ 0x140167C90 (_RegisterLogonProcess.c)
 *     NtMITSetInputDelegationMode @ 0x14016B1B0 (NtMITSetInputDelegationMode.c)
 *     NtUserCheckProcessSession @ 0x14016B6A0 (NtUserCheckProcessSession.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXW4LockProcessOptions@@_K@Z @ 0x1401A2A60 (--0CLockProcessByPid@@QEAA@PEAXW4LockProcessOptions@@_K@Z.c)
 *     ?SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z @ 0x1401AA2F0 (-SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1401BD470 (NtUserSetProcessLaunchForegroundPolicy.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HasPrivilege @ 0x1401AD4C0 (HasPrivilege.c)
 */

__int64 __fastcall CLockProcessByPid::CLockProcessByPid(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, __int64 a6)
{
  _QWORD *v6; // rdi
  int ProcessSessionId; // esi
  NTSTATUS v9; // r14d
  __int64 v10; // rcx
  __int64 ProcessSequenceNumber; // rax
  char v12; // al
  ULONG v13; // edx
  NTSTATUS v14; // eax
  int v15; // eax
  struct tagTHREADINFO *v16; // rax
  PEPROCESS Process; // [rsp+60h] [rbp+20h] BYREF
  void *Handle; // [rsp+68h] [rbp+28h] BYREF

  *(_QWORD *)(a1 + 24) = 0LL;
  v6 = (_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 20) = a5;
  ProcessSessionId = -1;
  *(_QWORD *)a1 = a2;
  Process = 0LL;
  Handle = 0LL;
  *(_DWORD *)(a1 + 40) = -1;
  *(_DWORD *)(a1 + 12) = a3;
  *(_DWORD *)(a1 + 16) = 512;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  v9 = PsLookupProcessByProcessId(*(HANDLE *)a1, &Process);
  if ( v9 >= 0 )
    ProcessSessionId = PsGetProcessSessionIdEx(Process);
  else
    Process = 0LL;
  *(_DWORD *)(a1 + 8) = v9;
  if ( v9 >= 0 )
  {
    v10 = *(unsigned int *)(a1 + 20);
    if ( (v10 & 1) != 0 && (unsigned int)W32GetCurrentWin32kSessionId() != ProcessSessionId )
      *(_DWORD *)(a1 + 8) = -1073740715;
    if ( (*(_DWORD *)(a1 + 20) & 2) != 0 )
    {
      ProcessSequenceNumber = PsGetProcessSequenceNumber(Process);
      if ( a6 != ProcessSequenceNumber )
        *(_DWORD *)(a1 + 8) = -1073741811;
    }
    if ( (*(_DWORD *)(a1 + 20) & 4) != 0 && (unsigned __int8)PsGetProcessExitProcessCalled(Process) )
      *(_DWORD *)(a1 + 8) = -1073741558;
    if ( *(int *)(a1 + 8) < 0 )
      goto LABEL_21;
    if ( !*(_DWORD *)(a1 + 12) )
      goto LABEL_19;
    v12 = HasPrivilege(20LL);
    v13 = *(_DWORD *)(a1 + 16) & 0xFFFFFBFF;
    if ( !v12 )
      v13 = *(_DWORD *)(a1 + 16);
    v14 = ObOpenObjectByPointer(Process, v13, 0LL, *(_DWORD *)(a1 + 12), (POBJECT_TYPE)PsProcessType, v12 ^ 1, &Handle);
    *(_DWORD *)(a1 + 8) = v14;
    if ( v14 < 0 )
    {
LABEL_21:
      ObfDereferenceObject(Process);
    }
    else
    {
LABEL_19:
      *(_QWORD *)(a1 + 24) = Process;
      *(_QWORD *)(a1 + 32) = Handle;
      v15 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 40) = ProcessSessionId;
      if ( (v15 & 8) != 0 )
      {
        v16 = PtiCurrent(v10);
        *v6 = *((_QWORD *)v16 + 48);
        *((_QWORD *)v16 + 48) = v6;
        v6[2] = _lambda_02739f59c5c72c5f20f913f1c43e5320_::_lambda_invoker_cdecl_;
        v6[1] = a1;
      }
    }
  }
  return a1;
}
