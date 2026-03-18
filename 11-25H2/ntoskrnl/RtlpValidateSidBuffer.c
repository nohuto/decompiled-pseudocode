/*
 * XREFs of RtlpValidateSidBuffer @ 0x140918F98
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140919000 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x140461BC0 (RtlSubAuthorityCountSid.c)
 *     RtlValidSid @ 0x140918DF0 (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x140918FE0 (RtlLengthRequiredSid.c)
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
