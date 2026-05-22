/*
 * XREFs of _anonymous_namespace_::_dynamic_initializer_for__g_EtwLogger___0 @ 0x1800796B0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800796E0 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     McGenEventRegister_EventRegister @ 0x180096A14 (McGenEventRegister_EventRegister.c)
 */

int anonymous_namespace_::_dynamic_initializer_for__g_EtwLogger___0()
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_18024E328);
  McGenEventRegister_EventRegister();
  return atexit((void (__cdecl *)())anonymous_namespace_::_dynamic_atexit_destructor_for__g_EtwLogger__);
}
