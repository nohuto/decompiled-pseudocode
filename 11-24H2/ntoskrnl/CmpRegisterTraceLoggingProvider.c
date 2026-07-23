/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x1406F923C
 * Callers:
 *     CmInitSystem2 @ 0x140C61648 (CmInitSystem2.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x140ABDA7C (TlgRegisterAggregateProviderEx.c)
 */

__int64 CmpRegisterTraceLoggingProvider()
{
  return TlgRegisterAggregateProviderEx(&dword_140E09F58, 0LL, 0LL);
}
