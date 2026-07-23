/*
 * XREFs of RtlpGetCurrentProcessorNumberUninitialized @ 0x180103E50
 * Callers:
 *     RtlGetCurrentProcessorNumber @ 0x1801645C0 (RtlGetCurrentProcessorNumber.c)
 * Callees:
 *     RtlpGetCurrentProcessorNumberInitialize @ 0x180103E90 (RtlpGetCurrentProcessorNumberInitialize.c)
 */

ULONG RtlpGetCurrentProcessorNumberUninitialized()
{
  RtlpGetCurrentProcessorNumberInitialize();
  return RtlGetCurrentProcessorNumber();
}
