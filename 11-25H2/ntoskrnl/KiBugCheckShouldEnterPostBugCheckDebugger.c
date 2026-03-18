/*
 * XREFs of KiBugCheckShouldEnterPostBugCheckDebugger @ 0x1405AF6C0
 * Callers:
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 *     KiAttemptBugcheckRecovery @ 0x1405C13E4 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     KdRefreshDebuggerNotPresent @ 0x1404AEB30 (KdRefreshDebuggerNotPresent.c)
 */

char __fastcall KiBugCheckShouldEnterPostBugCheckDebugger(int a1, __int64 a2)
{
  char result; // al

  if ( !(_BYTE)KdDebuggerEnabled && !KdEventLoggingEnabled
    || KiHypervisorInitiatedCrashDump
    || KdRefreshDebuggerNotPresent() && !KdEventLoggingPresent )
  {
    return 0;
  }
  result = a1 != 226;
  if ( a2 )
    return *(_BYTE *)a2;
  return result;
}
