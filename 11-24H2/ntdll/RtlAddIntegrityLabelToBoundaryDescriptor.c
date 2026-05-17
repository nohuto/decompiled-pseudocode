/*
 * XREFs of RtlAddIntegrityLabelToBoundaryDescriptor @ 0x180117710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlAddIntegrityLabelToBoundaryDescriptor(__int64 a1, unsigned __int8 *a2)
{
  return RtlAddSIDToBoundaryDescriptorEx(a1, a2, 1);
}
