/*
 * XREFs of MmFreeIsrStack @ 0x1407F73D0
 * Callers:
 *     KiFreeProcessorStacks @ 0x1405B41D4 (KiFreeProcessorStacks.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x14021D100 (MmFreeIndependentPages.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     KasanMarkAddressValid @ 0x140402290 (KasanMarkAddressValid.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 */

unsigned __int64 __fastcall MmFreeIsrStack(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v2; // r8
  _QWORD *PteAddress; // rax

  v1 = a1 - (unsigned int)KeIsrStackSize;
  KasanMarkAddressValid(v1, (unsigned int)KeIsrStackSize);
  MmFreeIndependentPages(v1, (unsigned int)KeIsrStackSize, v2);
  PteAddress = (_QWORD *)MiGetPteAddress(v1 - 4096);
  return MiReleasePtes((__int64)&qword_140E376A8, PteAddress, 1u);
}
