/*
 * XREFs of ?xxxDwmProcessShutdown@@YAJH@Z @ 0x140092B70
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 *     NtUserUnregisterSessionPort @ 0x1401BE190 (NtUserUnregisterSessionPort.c)
 * Callees:
 *     GreUnlockDwmState @ 0x1400231D0 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x140023480 (GreLockDwmState.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x140092CF0 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     IsxxxDwmStopRedirectionSupported @ 0x140092D10 (IsxxxDwmStopRedirectionSupported.c)
 *     GreSfmCleanupPresentHistory @ 0x140092D50 (GreSfmCleanupPresentHistory.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x140092EE8 (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     xxxDwmControl @ 0x14017A7C0 (xxxDwmControl.c)
 *     IsUserEnableConsoleModeSupported @ 0x14019E5D8 (IsUserEnableConsoleModeSupported.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     UserEnableConsoleMode @ 0x14023B868 (UserEnableConsoleMode.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxDwmProcessShutdown(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebp
  __int64 v3; // rbx
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(_QWORD); // rax
  unsigned int Count; // eax
  __int64 v9; // rcx
  void *v10; // rcx
  unsigned int CurrentProcessId; // eax
  char v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = a1;
  v14 = 0LL;
  v3 = W32GetUserSessionState(a1) + 70808;
  if ( (int)DxgkGetSessionTokenManager(&v14) >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 104LL))(v14);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 208LL))(v14);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  }
  v4 = 0;
  if ( !*(_DWORD *)(v3 + 8) )
    v4 = v2;
  if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
  {
    v7 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 48) + 4272LL);
    if ( v7 )
      v1 = v7(v2);
    else
      v1 = -1073741637;
  }
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
    KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v13, 1);
  GreSfmCleanupPresentHistory();
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v13);
  GreLockDwmState(v9);
  SetDwmApiPort(0LL);
  v10 = *(void **)v3;
  if ( *(_QWORD *)v3 )
  {
    ObfDereferenceObject(v10);
    *(_QWORD *)v3 = 0LL;
  }
  GreUnlockDwmState((__int64)v10);
  if ( (int)IsUserEnableConsoleModeSupported() >= 0 )
  {
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v13, 1);
    v1 = UserEnableConsoleMode(1LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v13);
  }
  *(_DWORD *)(v3 + 8) = 0;
  if ( v4 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    xxxDwmControl(1036LL, CurrentProcessId);
  }
  return v1;
}
