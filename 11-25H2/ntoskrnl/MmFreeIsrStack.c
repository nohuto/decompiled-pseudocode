/*
 * XREFs of MmFreeIsrStack @ 0x1407E6DCC
 * Callers:
 *     KiFreeProcessorStacks @ 0x1405B3044 (KiFreeProcessorStacks.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x140227210 (MmFreeIndependentPages.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     KasanMarkAddressValid @ 0x140401C90 (KasanMarkAddressValid.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 */

char __fastcall MmFreeIsrStack(__int64 a1)
{
  ULONG_PTR v1; // rbx
  unsigned __int64 *PteAddress; // rax

  v1 = a1 - (unsigned int)KeIsrStackSize;
  KasanMarkAddressValid(v1, (unsigned int)KeIsrStackSize);
  MmFreeIndependentPages(v1, (unsigned int)KeIsrStackSize);
  PteAddress = (unsigned __int64 *)MiGetPteAddress(v1 - 4096);
  return MiReleasePtes((__int64)&qword_140E37328, PteAddress, 1u);
}
