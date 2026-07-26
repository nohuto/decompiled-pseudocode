/*
 * XREFs of ?ndisFreeMappingAddress@@YAXPEAX@Z @ 0x1400C4998
 * Callers:
 *     ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x140141658 (-ndisAllocateNumaStripedPages@@YAPEAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeMappingAddress(void *a1)
{
  MmFreeMappingAddress(a1, 0x6C53444Eu);
}
