/*
 * XREFs of ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x14027512C
 * Callers:
 *     ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x1400F5C38 (-_AllowSetForegroundWindow@@YA-AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPol.c)
 *     xxxConsoleControl @ 0x14015D510 (xxxConsoleControl.c)
 *     GetConsoleDesktop @ 0x14019468C (GetConsoleDesktop.c)
 *     xxxWaitForInputIdle @ 0x1401F488C (xxxWaitForInputIdle.c)
 *     ?GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14021EC80 (-GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x140240DA0 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserDwmValidateWindow @ 0x140241330 (NtUserDwmValidateWindow.c)
 *     NtUserSetActiveProcessForMonitor @ 0x140245820 (NtUserSetActiveProcessForMonitor.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXW4LockProcessOptions@@_K@Z @ 0x140275300 (--0CLockProcessByPid@@QEAA@PEAXW4LockProcessOptions@@_K@Z.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x140287CFC (-xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z.c)
 *     ?_CheckAllowForeground2@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x14028DBDC (-_CheckAllowForeground2@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z.c)
 *     ?GetWindowProcessHandleUnsafe@@YAPEAXPEAUtagWND@@PEBUtagTHREADINFO@@K@Z @ 0x140290CB8 (-GetWindowProcessHandleUnsafe@@YAPEAXPEAUtagWND@@PEBUtagTHREADINFO@@K@Z.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x140295CB0 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 */

__int64 __fastcall CLockProcessByPid::CLockProcessByPid(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  _QWORD *v5; // rdi
  int ProcessSessionId; // esi
  __int64 v8; // rdx
  NTSTATUS v9; // r14d
  __int64 v10; // rcx
  char v11; // al
  ULONG v12; // edx
  NTSTATUS v13; // eax
  int v14; // eax
  struct tagTHREADINFO *v15; // rax
  PEPROCESS Process; // [rsp+60h] [rbp+20h] BYREF
  void *Handle; // [rsp+68h] [rbp+28h] BYREF

  *(_QWORD *)(a1 + 24) = 0LL;
  v5 = (_QWORD *)(a1 + 48);
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
    if ( (*(_DWORD *)(a1 + 20) & 2) != 0 && PsGetProcessSequenceNumber(Process) )
      *(_DWORD *)(a1 + 8) = -1073741811;
    if ( (*(_DWORD *)(a1 + 20) & 4) != 0 && (unsigned __int8)PsGetProcessExitProcessCalled(Process) )
      *(_DWORD *)(a1 + 8) = -1073741558;
    if ( *(int *)(a1 + 8) < 0 )
      goto LABEL_21;
    if ( !*(_DWORD *)(a1 + 12) )
      goto LABEL_19;
    v11 = HasPrivilege(20LL);
    v12 = *(_DWORD *)(a1 + 16) & 0xFFFFFBFF;
    if ( !v11 )
      v12 = *(_DWORD *)(a1 + 16);
    v13 = ObOpenObjectByPointer(Process, v12, 0LL, *(_DWORD *)(a1 + 12), (POBJECT_TYPE)PsProcessType, v11 ^ 1, &Handle);
    *(_DWORD *)(a1 + 8) = v13;
    if ( v13 < 0 )
    {
LABEL_21:
      ObfDereferenceObject(Process);
    }
    else
    {
LABEL_19:
      *(_QWORD *)(a1 + 24) = Process;
      *(_QWORD *)(a1 + 32) = Handle;
      v14 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 40) = ProcessSessionId;
      if ( (v14 & 8) != 0 )
      {
        v15 = PtiCurrent(v10, v8);
        *v5 = *((_QWORD *)v15 + 48);
        *((_QWORD *)v15 + 48) = v5;
        v5[2] = _lambda_02739f59c5c72c5f20f913f1c43e5320_::_lambda_invoker_cdecl_;
        v5[1] = a1;
      }
    }
  }
  return a1;
}
