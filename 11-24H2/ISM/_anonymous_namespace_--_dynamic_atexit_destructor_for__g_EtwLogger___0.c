/*
 * XREFs of _anonymous_namespace_::_dynamic_atexit_destructor_for__g_EtwLogger___0 @ 0x1801D9E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG anonymous_namespace_::_dynamic_atexit_destructor_for__g_EtwLogger___0()
{
  REGHANDLE v0; // rcx

  v0 = qword_18024E2D8;
  qword_18024E2D8 = 0LL;
  dword_18024E2B8 = 0;
  return EventUnregister(v0);
}
