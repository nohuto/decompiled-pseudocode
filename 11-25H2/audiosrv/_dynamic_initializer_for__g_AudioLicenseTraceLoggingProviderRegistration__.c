/*
 * XREFs of _dynamic_initializer_for__g_AudioLicenseTraceLoggingProviderRegistration__ @ 0x180007F70
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180084A48 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 */

int dynamic_initializer_for__g_AudioLicenseTraceLoggingProviderRegistration__()
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&CallbackContext);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_AudioLicenseTraceLoggingProviderRegistration__);
}
