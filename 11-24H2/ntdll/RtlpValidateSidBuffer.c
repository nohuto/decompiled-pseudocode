/*
 * XREFs of RtlpValidateSidBuffer @ 0x1800DF5D8
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x1800DF500 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlValidSid @ 0x1800194A0 (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x1800DF4E0 (RtlLengthRequiredSid.c)
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(unsigned __int8 *Sid, ULONG a2)
{
  if ( a2 < 8 || a2 < RtlLengthRequiredSid(Sid[1]) )
    return 0;
  else
    return RtlValidSid(Sid);
}
