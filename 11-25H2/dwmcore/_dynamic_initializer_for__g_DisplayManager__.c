/*
 * XREFs of _dynamic_initializer_for__g_DisplayManager__ @ 0x1800071E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__g_DisplayManager__()
{
  InitializeCriticalSection(&g_DisplayManager);
  qword_180406B88 = 0LL;
  PerformanceCount.QuadPart = 0LL;
  qword_180406B98 = 0LL;
  qword_180406BA0 = 0LL;
  qword_180406BA8 = 0LL;
  word_180406BB0 = 0;
  byte_180406BB2 = 0;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_DisplayManager__);
}
