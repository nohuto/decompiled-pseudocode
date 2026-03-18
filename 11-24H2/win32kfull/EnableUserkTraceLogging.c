/*
 * XREFs of EnableUserkTraceLogging @ 0x14028B500
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1403D0280 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     TlgRegisterAggregateProviderEx @ 0x1403D0BC8 (TlgRegisterAggregateProviderEx.c)
 */

__int64 EnableUserkTraceLogging()
{
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140398BB8);
  TlgRegisterAggregateProviderEx();
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140398B80);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140398C28);
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140398C60);
}
