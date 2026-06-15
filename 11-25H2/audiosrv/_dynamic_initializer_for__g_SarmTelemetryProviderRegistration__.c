/*
 * XREFs of _dynamic_initializer_for__g_SarmTelemetryProviderRegistration__ @ 0x180007F40
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180084A48 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 */

int dynamic_initializer_for__g_SarmTelemetryProviderRegistration__()
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1801CC2B0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_SarmTelemetryProviderRegistration__);
}
