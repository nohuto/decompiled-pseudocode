/*
 * XREFs of RtlpGetCurrentProcessorNumberExUninitialized @ 0x18010B950
 * Callers:
 *     RtlGetCurrentProcessorNumberEx @ 0x180167800 (RtlGetCurrentProcessorNumberEx.c)
 * Callees:
 *     RtlpGetCurrentProcessorNumberInitialize @ 0x18010B970 (RtlpGetCurrentProcessorNumberInitialize.c)
 */

__int64 __fastcall RtlpGetCurrentProcessorNumberExUninitialized(__int64 a1)
{
  __int64 v1; // rdx

  RtlpGetCurrentProcessorNumberInitialize(a1, a1);
  return RtlGetCurrentProcessorNumberEx(v1);
}
