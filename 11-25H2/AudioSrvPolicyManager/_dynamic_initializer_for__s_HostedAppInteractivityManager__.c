/*
 * XREFs of _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x180001BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__s_HostedAppInteractivityManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_180067AC8 = 0LL;
  dword_180067AF0 = 10;
  xmmword_180067AD0 = 0LL;
  xmmword_180067AE0 = 0LL;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__);
}
