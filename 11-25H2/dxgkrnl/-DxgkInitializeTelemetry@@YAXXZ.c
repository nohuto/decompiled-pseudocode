/*
 * XREFs of ?DxgkInitializeTelemetry@@YAXXZ @ 0x140070E8C
 * Callers:
 *     DriverEntry @ 0x140433078 (DriverEntry.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x140282598 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14040402C (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

void DxgkInitializeTelemetry(void)
{
  TlgRegisterAggregateProviderEx(&dword_14015B660);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14015B628);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14015B5F0);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14015B580);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14015B548);
  TlgRegisterAggregateProviderEx(&dword_14015B5B8);
}
