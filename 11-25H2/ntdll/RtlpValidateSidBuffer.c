/*
 * XREFs of RtlpValidateSidBuffer @ 0x180060D10
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x180060A40 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlValidSid @ 0x18005FCD0 (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x180060A20 (RtlLengthRequiredSid.c)
 */

bool __fastcall RtlpValidateSidBuffer(_BYTE *a1, unsigned int a2)
{
  return a2 >= 8 && a2 >= (unsigned int)RtlLengthRequiredSid((unsigned __int8)a1[1]) && RtlValidSid(a1);
}
