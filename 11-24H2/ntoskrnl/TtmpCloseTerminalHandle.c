/*
 * XREFs of TtmpCloseTerminalHandle @ 0x140770350
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     TtmpAcquireSessionLock @ 0x1406F53C8 (TtmpAcquireSessionLock.c)
 *     TtmiLogTerminalHandleClosed @ 0x14076EE30 (TtmiLogTerminalHandleClosed.c)
 *     TtmpSetTerminalPendingCleanup @ 0x140770584 (TtmpSetTerminalPendingCleanup.c)
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
