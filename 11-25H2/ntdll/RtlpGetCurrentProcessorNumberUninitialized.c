/*
 * XREFs of RtlpGetCurrentProcessorNumberUninitialized @ 0x18010B930
 * Callers:
 *     RtlGetCurrentProcessorNumber @ 0x180167790 (RtlGetCurrentProcessorNumber.c)
 * Callees:
 *     RtlpGetCurrentProcessorNumberInitialize @ 0x18010B970 (RtlpGetCurrentProcessorNumberInitialize.c)
 */

__int64 RtlpGetCurrentProcessorNumberUninitialized()
{
  RtlpGetCurrentProcessorNumberInitialize();
  return RtlGetCurrentProcessorNumber();
}
