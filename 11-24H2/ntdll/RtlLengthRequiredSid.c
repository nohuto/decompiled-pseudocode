/*
 * XREFs of RtlLengthRequiredSid @ 0x180001330
 * Callers:
 *     WerpAllocateAndInitializeSid @ 0x1800010F8 (WerpAllocateAndInitializeSid.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x1800011F0 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlpValidateSidBuffer @ 0x180001428 (RtlpValidateSidBuffer.c)
 *     WerpFreeSid @ 0x18011F494 (WerpFreeSid.c)
 *     RtlAllocateAndInitializeSidEx @ 0x180138E60 (RtlAllocateAndInitializeSidEx.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1801393B0 (RtlNormalizeSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLengthRequiredSid(unsigned int a1)
{
  if ( a1 > 0x3FFFFFF7 )
    return 0xFFFFFFFFLL;
  else
    return 4 * a1 + 8;
}
