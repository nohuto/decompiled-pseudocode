/*
 * XREFs of ?CleanupWinlogonRpcHandleWorker@@YAXXZ @ 0x1401B3320
 * Callers:
 *     <none>
 * Callees:
 *     WmsgpDisconnect @ 0x1402C4678 (WmsgpDisconnect.c)
 */

void __fastcall CleanupWinlogonRpcHandleWorker(PVOID StartContext)
{
  struct _EX_RUNDOWN_REF *UserSessionState; // rax
  __int64 v2; // rcx
  struct _EX_RUNDOWN_REF *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  UserSessionState = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(StartContext);
  ExWaitForRundownProtectionRelease(UserSessionState + 8673);
  v3 = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v2);
  ExRundownCompleted(v3 + 8673);
  v5 = W32GetUserSessionState(v4);
  WmsgpDisconnect((RPC_BINDING_HANDLE *)(v5 + 69376));
  *(_QWORD *)(W32GetUserSessionState(v6) + 69376) = 0LL;
  *(_DWORD *)(W32GetUserSessionState(v7) + 69392) = 1;
}
