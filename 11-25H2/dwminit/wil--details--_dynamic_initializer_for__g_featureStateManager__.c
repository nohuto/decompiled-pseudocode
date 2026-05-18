/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_180019138 = 0LL;
  xmmword_180019118 = 0LL;
  xmmword_180019128 = 0LL;
  InitializeCriticalSectionEx(&stru_180019140, 0, 0);
  qword_1800191A8 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_180019168 = 0LL;
  xmmword_180019178 = 0LL;
  xmmword_180019188 = 0LL;
  xmmword_180019198 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
