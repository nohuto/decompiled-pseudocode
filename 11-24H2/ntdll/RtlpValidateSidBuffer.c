/*
 * XREFs of RtlpValidateSidBuffer @ 0x180001428
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x180001350 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlLengthRequiredSid @ 0x180001330 (RtlLengthRequiredSid.c)
 *     RtlValidSid @ 0x180039220 (RtlValidSid.c)
 */

char __fastcall RtlpValidateSidBuffer(__int64 a1, unsigned int a2)
{
  if ( a2 < 8 || a2 < (unsigned int)RtlLengthRequiredSid(*(unsigned __int8 *)(a1 + 1)) )
    return 0;
  else
    return RtlValidSid(a1);
}
