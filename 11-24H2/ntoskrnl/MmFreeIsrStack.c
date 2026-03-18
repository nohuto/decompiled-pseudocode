/*
 * XREFs of MmFreeIsrStack @ 0x1407F6C5C
 * Callers:
 *     KiFreeProcessorStacks @ 0x1405B6F14 (KiFreeProcessorStacks.c)
 * Callees:
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     MmFreeIndependentPages @ 0x14039EC60 (MmFreeIndependentPages.c)
 *     KasanMarkAddressValid @ 0x140409DB0 (KasanMarkAddressValid.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 */

unsigned __int64 __fastcall MmFreeIsrStack(__int64 a1)
{
  ULONG_PTR v1; // rbx
  _QWORD *PteAddress; // rax

  v1 = a1 - (unsigned int)KeIsrStackSize;
  KasanMarkAddressValid(v1, (unsigned int)KeIsrStackSize);
  MmFreeIndependentPages(v1, (unsigned int)KeIsrStackSize);
  PteAddress = (_QWORD *)MiGetPteAddress(v1 - 4096);
  return MiReleasePtes((__int64)&qword_140E37568, PteAddress, 1u);
}
