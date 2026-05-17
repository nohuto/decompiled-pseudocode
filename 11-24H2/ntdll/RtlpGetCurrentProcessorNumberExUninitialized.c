/*
 * XREFs of RtlpGetCurrentProcessorNumberExUninitialized @ 0x180108F40
 * Callers:
 *     RtlGetCurrentProcessorNumberEx @ 0x180166270 (RtlGetCurrentProcessorNumberEx.c)
 * Callees:
 *     RtlpGetCurrentProcessorNumberInitialize @ 0x180108F60 (RtlpGetCurrentProcessorNumberInitialize.c)
 */

__int64 __fastcall RtlpGetCurrentProcessorNumberExUninitialized(__int64 a1)
{
  __int64 v1; // rdx

  RtlpGetCurrentProcessorNumberInitialize(a1, a1);
  return RtlGetCurrentProcessorNumberEx(v1);
}
