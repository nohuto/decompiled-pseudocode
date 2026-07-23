/*
 * XREFs of PsGetThreadId @ 0x140442630
 * Callers:
 *     PsOpenThread @ 0x14083B940 (PsOpenThread.c)
 *     PfSnBeginTrace @ 0x14094A598 (PfSnBeginTrace.c)
 *     PspFindFirstThreadByTebValue @ 0x140ABA85C (PspFindFirstThreadByTebValue.c)
 *     PfpScenCtxServiceThreadSet @ 0x140B5D408 (PfpScenCtxServiceThreadSet.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}
