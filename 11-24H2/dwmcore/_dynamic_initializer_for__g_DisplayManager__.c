/*
 * XREFs of _dynamic_initializer_for__g_DisplayManager__ @ 0x180007100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__g_DisplayManager__()
{
  InitializeCriticalSection(&g_DisplayManager);
  qword_1803FAB38 = 0LL;
  PerformanceCount.QuadPart = 0LL;
  qword_1803FAB48 = 0LL;
  qword_1803FAB50 = 0LL;
  qword_1803FAB58 = 0LL;
  word_1803FAB60 = 0;
  byte_1803FAB62 = 0;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_DisplayManager__);
}
