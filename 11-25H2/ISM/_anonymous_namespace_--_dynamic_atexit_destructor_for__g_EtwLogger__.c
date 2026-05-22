/*
 * XREFs of _anonymous_namespace_::_dynamic_atexit_destructor_for__g_EtwLogger__ @ 0x180082910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 anonymous_namespace_::_dynamic_atexit_destructor_for__g_EtwLogger__()
{
  REGHANDLE v0; // rcx

  v0 = qword_180244348;
  qword_180244348 = 0LL;
  dword_180244328 = 0;
  EventUnregister(v0);
  return McGenEventUnregister_EventUnregister();
}
