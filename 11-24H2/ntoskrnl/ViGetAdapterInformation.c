/*
 * XREFs of ViGetAdapterInformation @ 0x140B88E80
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x140610B10 (VfAllocateDomainCommonBuffer.c)
 * Callees:
 *     ViGetAdapterInformationInternal @ 0x140B88E98 (ViGetAdapterInformationInternal.c)
 */

__int64 __fastcall ViGetAdapterInformation(int a1)
{
  return ViGetAdapterInformationInternal(a1);
}
