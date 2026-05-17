/*
 * XREFs of RtlpGetCurrentProcessorNumberUninitialized @ 0x180108F20
 * Callers:
 *     RtlGetCurrentProcessorNumber @ 0x180166200 (RtlGetCurrentProcessorNumber.c)
 * Callees:
 *     RtlpGetCurrentProcessorNumberInitialize @ 0x180108F60 (RtlpGetCurrentProcessorNumberInitialize.c)
 */

__int64 RtlpGetCurrentProcessorNumberUninitialized()
{
  RtlpGetCurrentProcessorNumberInitialize();
  return RtlGetCurrentProcessorNumber();
}
