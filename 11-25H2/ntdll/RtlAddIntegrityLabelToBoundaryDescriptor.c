/*
 * XREFs of RtlAddIntegrityLabelToBoundaryDescriptor @ 0x18011A950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlAddIntegrityLabelToBoundaryDescriptor(__int64 a1, _BYTE *a2)
{
  return RtlAddSIDToBoundaryDescriptorEx(a1, a2, 1);
}
