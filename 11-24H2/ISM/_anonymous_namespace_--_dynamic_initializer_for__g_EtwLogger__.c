/*
 * XREFs of _anonymous_namespace_::_dynamic_initializer_for__g_EtwLogger__ @ 0x18000A150
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800796E0 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 */

int anonymous_namespace_::_dynamic_initializer_for__g_EtwLogger__()
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_18024E2B8);
  return atexit((void (__cdecl *)())anonymous_namespace_::_dynamic_atexit_destructor_for__g_EtwLogger___0);
}
