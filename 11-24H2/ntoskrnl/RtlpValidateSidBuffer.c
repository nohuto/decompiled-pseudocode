/*
 * XREFs of RtlpValidateSidBuffer @ 0x1408670C8
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140867130 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x1404600D0 (RtlSubAuthorityCountSid.c)
 *     RtlValidSid @ 0x140866F20 (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x140867110 (RtlLengthRequiredSid.c)
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(PSID Sid, ULONG a2)
{
  PUCHAR v4; // rax

  if ( a2 < 8 )
    return 0;
  v4 = RtlSubAuthorityCountSid(Sid);
  if ( a2 < RtlLengthRequiredSid(*v4) )
    return 0;
  else
    return RtlValidSid(Sid);
}
