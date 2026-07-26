/*
 * XREFs of ?ndisFreeMappingAddress@@YAXPEAX@Z @ 0x1400CBAC0
 * Callers:
 *     ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x14014C32C (-ndisAllocateNumaStripedPages@@YAPEAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeMappingAddress(void *a1)
{
  MmFreeMappingAddress(a1, 0x6C53444Eu);
}
