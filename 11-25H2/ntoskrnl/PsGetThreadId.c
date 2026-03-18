/*
 * XREFs of PsGetThreadId @ 0x14044BF30
 * Callers:
 *     PfSnBeginTrace @ 0x140828318 (PfSnBeginTrace.c)
 *     PsOpenThread @ 0x1408430F0 (PsOpenThread.c)
 *     PspFindFirstThreadByTebValue @ 0x140ABB5E0 (PspFindFirstThreadByTebValue.c)
 *     PfpScenCtxServiceThreadSet @ 0x140B4B428 (PfpScenCtxServiceThreadSet.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}
