/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_1800590C8 = 0LL;
  xmmword_1800590A8 = 0LL;
  xmmword_1800590B8 = 0LL;
  InitializeCriticalSectionEx(&stru_1800590D0, 0, 0);
  qword_180059138 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_1800590F8 = 0LL;
  xmmword_180059108 = 0LL;
  xmmword_180059118 = 0LL;
  xmmword_180059128 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
