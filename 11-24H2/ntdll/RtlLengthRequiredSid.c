/*
 * XREFs of RtlLengthRequiredSid @ 0x1800DF4E0
 * Callers:
 *     WerpAllocateAndInitializeSid @ 0x1800DF2A0 (WerpAllocateAndInitializeSid.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x1800DF398 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlpValidateSidBuffer @ 0x1800DF5D8 (RtlpValidateSidBuffer.c)
 *     WerpFreeSid @ 0x18011D6C4 (WerpFreeSid.c)
 *     RtlAllocateAndInitializeSidEx @ 0x180137090 (RtlAllocateAndInitializeSidEx.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1801375E0 (RtlNormalizeSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlLengthRequiredSid(ULONG SubAuthorityCount)
{
  if ( SubAuthorityCount > 0x3FFFFFF7 )
    return -1;
  else
    return 4 * SubAuthorityCount + 8;
}
