/*
 * XREFs of EnableUserkTraceLogging @ 0x1C0094760
 * Callers:
 *     <none>
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1C03999F4 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C0399AD8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 EnableUserkTraceLogging()
{
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0354098);
  TlgRegisterAggregateProviderEx();
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0359080);
}
