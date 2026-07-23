/*
 * XREFs of KdCheckForDebugBreak @ 0x1402AC8F8
 * Callers:
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x14020FAE8 (MiWalkPageTablesRecursivelyNoSynch.c)
 *     IoWriteCrashDump @ 0x14058F7F8 (IoWriteCrashDump.c)
 *     PopHiberCheckForDebugBreak @ 0x140B6A908 (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     KdPollBreakIn @ 0x1402ABAA0 (KdPollBreakIn.c)
 *     DbgBreakPointWithStatus @ 0x1404FA0D0 (DbgBreakPointWithStatus.c)
 */

void __fastcall KdCheckForDebugBreak(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( KdPollBreakIn(a1, a2, a3, a4) )
      DbgBreakPointWithStatus(1u);
  }
}
