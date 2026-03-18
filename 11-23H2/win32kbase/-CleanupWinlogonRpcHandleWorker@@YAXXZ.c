/*
 * XREFs of ?CleanupWinlogonRpcHandleWorker@@YAXXZ @ 0x1C00D0500
 * Callers:
 *     <none>
 * Callees:
 *     WmsgpDisconnect @ 0x1C02BFCA4 (WmsgpDisconnect.c)
 */

void __fastcall CleanupWinlogonRpcHandleWorker(PVOID StartContext)
{
  ExWaitForRundownProtectionRelease(&gWinLogonRpcHandleRundownRef);
  ExRundownCompleted(&gWinLogonRpcHandleRundownRef);
  WmsgpDisconnect();
  gWinLogonRpcHandle = 0LL;
  gbWinLogonRpcHandleRundownCompleted = 1;
}
