/*
 * XREFs of RtlpValidateSidBuffer @ 0x180060D10
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x180060A40 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlValidSid @ 0x18005FCD0 (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x180060A20 (RtlLengthRequiredSid.c)
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(unsigned __int8 *Sid, ULONG a2)
{
  if ( a2 < 8 || a2 < RtlLengthRequiredSid(Sid[1]) )
    return 0;
  else
    return RtlValidSid(Sid);
}
