/*
 * XREFs of RtlpGetCurrentProcessorNumberExUninitialized @ 0x180103E70
 * Callers:
 *     RtlGetCurrentProcessorNumberEx @ 0x180164630 (RtlGetCurrentProcessorNumberEx.c)
 * Callees:
 *     RtlpGetCurrentProcessorNumberInitialize @ 0x180103E90 (RtlpGetCurrentProcessorNumberInitialize.c)
 */

void __fastcall RtlpGetCurrentProcessorNumberExUninitialized(__int64 a1)
{
  PPROCESSOR_NUMBER v1; // rdx

  RtlpGetCurrentProcessorNumberInitialize(a1, a1);
  RtlGetCurrentProcessorNumberEx(v1);
}
