/*
 * XREFs of ndisAllocateFreeSlotFromDescriptor @ 0x14007AD00
 * Callers:
 *     ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x14006E4B0 (-ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisAllocateFreeSlotFromDescriptor(__int64 a1, int a2)
{
  int v2; // eax
  __int64 v3; // rax

  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 == -16777217 )
    return 0LL;
  v3 = v2 & 0x1FFFFFF;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 4 * v3 + 20);
  *(_DWORD *)(a1 + 4 * v3 + 20) = a2;
  return a1 + 8 * (v3 + 512);
}
