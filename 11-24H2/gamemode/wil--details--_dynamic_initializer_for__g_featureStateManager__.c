/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_180019110 = 0LL;
  xmmword_1800190F0 = 0LL;
  xmmword_180019100 = 0LL;
  InitializeCriticalSectionEx(&stru_180019118, 0, 0);
  qword_180019180 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_180019140 = 0LL;
  xmmword_180019150 = 0LL;
  xmmword_180019160 = 0LL;
  xmmword_180019170 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
