/*
 * XREFs of RtlpGetCurrentProcessorNumberExUninitialized @ 0x18010B950
 * Callers:
 *     RtlGetCurrentProcessorNumberEx @ 0x180167800 (RtlGetCurrentProcessorNumberEx.c)
 * Callees:
 *     RtlpGetCurrentProcessorNumberInitialize @ 0x18010B970 (RtlpGetCurrentProcessorNumberInitialize.c)
 */

void __fastcall RtlpGetCurrentProcessorNumberExUninitialized(__int64 a1)
{
  PPROCESSOR_NUMBER v1; // rdx

  RtlpGetCurrentProcessorNumberInitialize(a1, a1);
  RtlGetCurrentProcessorNumberEx(v1);
}
