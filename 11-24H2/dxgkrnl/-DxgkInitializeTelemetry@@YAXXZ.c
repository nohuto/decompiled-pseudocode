/*
 * XREFs of ?DxgkInitializeTelemetry@@YAXXZ @ 0x14007180C
 * Callers:
 *     DriverEntry @ 0x140435078 (DriverEntry.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x140289A48 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1403FDD6C (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

void DxgkInitializeTelemetry(void)
{
  TlgRegisterAggregateProviderEx(&dword_14015E650);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14015E618);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14015E5E0);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14015E570);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14015E538);
  TlgRegisterAggregateProviderEx(&dword_14015E5A8);
}
