/*
 * XREFs of KiBugCheckShouldEnterPostBugCheckDebugger @ 0x1405B3050
 * Callers:
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 *     KiAttemptBugcheckRecovery @ 0x1405C5784 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     KdRefreshDebuggerNotPresent @ 0x1404AF9D0 (KdRefreshDebuggerNotPresent.c)
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
