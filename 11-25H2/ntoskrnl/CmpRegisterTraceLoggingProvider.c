/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x1406EF78C
 * Callers:
 *     CmInitSystem2 @ 0x140C4E174 (CmInitSystem2.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x140ABE9A4 (TlgRegisterAggregateProviderEx.c)
 */

__int64 CmpRegisterTraceLoggingProvider()
{
  return TlgRegisterAggregateProviderEx(&dword_140E09E08, 0LL, 0LL);
}
