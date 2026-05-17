/*
 * XREFs of RtlLengthRequiredSid @ 0x180060A20
 * Callers:
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x1800608DC (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlpValidateSidBuffer @ 0x180060D10 (RtlpValidateSidBuffer.c)
 *     WerpAllocateAndInitializeSid @ 0x1800CEF58 (WerpAllocateAndInitializeSid.c)
 *     WerpFreeSid @ 0x180120D64 (WerpFreeSid.c)
 *     RtlAllocateAndInitializeSidEx @ 0x18013A5D0 (RtlAllocateAndInitializeSidEx.c)
 *     RtlNormalizeSecurityDescriptor @ 0x18013AB20 (RtlNormalizeSecurityDescriptor.c)
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
