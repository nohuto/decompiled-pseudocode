/*
 * XREFs of KdCheckForDebugBreak @ 0x14029DE08
 * Callers:
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x140235958 (MiWalkPageTablesRecursivelyNoSynch.c)
 *     IoWriteCrashDump @ 0x1405927D4 (IoWriteCrashDump.c)
 *     PopHiberCheckForDebugBreak @ 0x140B691F0 (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     KdPollBreakIn @ 0x14029CFB0 (KdPollBreakIn.c)
 *     DbgBreakPointWithStatus @ 0x1404FC810 (DbgBreakPointWithStatus.c)
 */

void __fastcall KdCheckForDebugBreak(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( KdPollBreakIn(a1, a2, a3) )
      DbgBreakPointWithStatus(1u);
  }
}
