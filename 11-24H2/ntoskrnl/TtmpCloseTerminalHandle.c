/*
 * XREFs of TtmpCloseTerminalHandle @ 0x140770130
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     PsGetProcessId @ 0x140434960 (PsGetProcessId.c)
 *     TtmpAcquireSessionLock @ 0x1406F73C8 (TtmpAcquireSessionLock.c)
 *     TtmiLogTerminalHandleClosed @ 0x14076EC10 (TtmiLogTerminalHandleClosed.c)
 *     TtmpSetTerminalPendingCleanup @ 0x140770364 (TtmpSetTerminalPendingCleanup.c)
 */

void __fastcall TtmpCloseTerminalHandle(PEPROCESS Process, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a4 == 1 )
  {
    TtmpAcquireSessionLock();
    TtmpSetTerminalPendingCleanup(*(_QWORD *)(a2 + 16), a2);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  PsGetProcessId(Process);
  TtmiLogTerminalHandleClosed();
}
