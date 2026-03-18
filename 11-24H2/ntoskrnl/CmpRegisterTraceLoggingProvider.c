/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x1406FB5FC
 * Callers:
 *     CmInitSystem2 @ 0x140C5F4F8 (CmInitSystem2.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x140AC2794 (TlgRegisterAggregateProviderEx.c)
 */

__int64 CmpRegisterTraceLoggingProvider()
{
  return TlgRegisterAggregateProviderEx(&dword_140E09EE8, 0LL, 0LL);
}
