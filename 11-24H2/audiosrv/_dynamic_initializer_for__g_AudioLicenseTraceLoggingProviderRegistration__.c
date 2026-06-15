/*
 * XREFs of _dynamic_initializer_for__g_AudioLicenseTraceLoggingProviderRegistration__ @ 0x180008480
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180071918 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 */

int dynamic_initializer_for__g_AudioLicenseTraceLoggingProviderRegistration__()
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&CallbackContext);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_AudioLicenseTraceLoggingProviderRegistration__);
}
