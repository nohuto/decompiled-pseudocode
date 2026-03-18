/*
 * XREFs of KdCheckForDebugBreak @ 0x140275528
 * Callers:
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x140246BB8 (MiWalkPageTablesRecursivelyNoSynch.c)
 *     IoWriteCrashDump @ 0x14058EFA4 (IoWriteCrashDump.c)
 *     PopHiberCheckForDebugBreak @ 0x140B593C0 (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     KdPollBreakIn @ 0x1402743F0 (KdPollBreakIn.c)
 *     DbgBreakPointWithStatus @ 0x1404FA090 (DbgBreakPointWithStatus.c)
 */

void __fastcall KdCheckForDebugBreak(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( KdPollBreakIn(a1, a2, a3) )
      DbgBreakPointWithStatus(1u);
  }
}
