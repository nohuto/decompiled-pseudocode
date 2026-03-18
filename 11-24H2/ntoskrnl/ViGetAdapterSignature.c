/*
 * XREFs of ViGetAdapterSignature @ 0x140B88FA4
 * Callers:
 *     ViGetAdapterInformationInternal @ 0x140B88E98 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B890EC (ViGetRealDmaAdapter.c)
 *     ViHookDmaAdapter @ 0x140B893E8 (ViHookDmaAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGetAdapterSignature(__int64 a1)
{
  return *(unsigned int *)(a1 + 16);
}
