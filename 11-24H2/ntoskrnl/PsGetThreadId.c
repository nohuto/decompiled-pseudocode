/*
 * XREFs of PsGetThreadId @ 0x14044B4F0
 * Callers:
 *     PsOpenThread @ 0x14083F680 (PsOpenThread.c)
 *     PfSnBeginTrace @ 0x140962AD8 (PfSnBeginTrace.c)
 *     PspFindFirstThreadByTebValue @ 0x140ABF77C (PspFindFirstThreadByTebValue.c)
 *     PfpScenCtxServiceThreadSet @ 0x140B5B398 (PfpScenCtxServiceThreadSet.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}
