/*
 * XREFs of ViGetAdapterInformation @ 0x140B8AE80
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x14060F0D0 (VfAllocateDomainCommonBuffer.c)
 * Callees:
 *     ViGetAdapterInformationInternal @ 0x140B8AE98 (ViGetAdapterInformationInternal.c)
 */

__int64 __fastcall ViGetAdapterInformation(int a1)
{
  return ViGetAdapterInformationInternal(a1);
}
