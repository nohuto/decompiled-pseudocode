/*
 * XREFs of BreakPoint @ 0x14006F300
 * Callers:
 *     <none>
 * Callees:
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     AMLIDebugger @ 0x1400564EC (AMLIDebugger.c)
 */

__int64 BreakPoint()
{
  ConPrintf("\nHit a code breakpoint.\n");
  AMLIDebugger();
  return 0LL;
}
