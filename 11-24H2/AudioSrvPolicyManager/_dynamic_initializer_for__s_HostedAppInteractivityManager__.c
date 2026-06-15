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
  qword_180064A48 = 0LL;
  dword_180064A70 = 10;
  xmmword_180064A50 = 0LL;
  xmmword_180064A60 = 0LL;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__);
}
