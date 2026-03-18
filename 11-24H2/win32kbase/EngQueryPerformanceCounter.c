/*
 * XREFs of EngQueryPerformanceCounter @ 0x1401C47F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngQueryPerformanceCounter(LONGLONG *pPerformanceCount)
{
  *(LARGE_INTEGER *)pPerformanceCount = KeQueryPerformanceCounter(0LL);
}
